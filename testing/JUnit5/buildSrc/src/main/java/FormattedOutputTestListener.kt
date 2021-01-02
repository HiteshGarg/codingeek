import org.gradle.api.tasks.testing.Test
import org.gradle.api.tasks.testing.TestDescriptor
import org.gradle.api.tasks.testing.TestListener
import org.gradle.api.tasks.testing.TestResult

const val ANSI_BOLD_WHITE = "\u001B[0;1m"
const val ANSI_RESET = "\u001B[0m"
const val ANSI_RED = "\u001B[31m"
const val ANSI_GREEN = "\u001B[32m"
const val ANSI_YELLOW = "\u001B[33m"
const val ANSI_WHITE = "\u001B[37m"
const val CHECK_MARK = "\u2713"
const val NEUTRAL_FACE = "\u0CA0_\u0CA0"
const val X_MARK = "\u274C"

class FormattedOutputTestListener : TestListener {

    private val failedTests = mutableListOf<TestDescriptor>()
    private val skippedTests = mutableListOf<TestDescriptor>()

    override fun beforeSuite(suite: TestDescriptor?) {
        if (suite?.name?.startsWith("Test Run")!! || suite.name.startsWith("Gradle Worker")) return

        if (suite.parent != null && suite.className != null) {
            println(ANSI_BOLD_WHITE + suite.displayName +" [ ${suite.name} ]"+ ANSI_RESET)
        }
    }

    override fun afterSuite(suite: TestDescriptor?, result: TestResult?) {
        if (suite?.parent != null && suite.className != null) {
            if (result?.failedTestCount?.equals(0)!!) {
                println("travis_fold:end:" + suite.displayName + "\r"); }
            println("")
        }


        if (suite?.parent == null) { // will match the outermost suite
            val failStyle = ANSI_RED
            val skipStyle = ANSI_YELLOW
            val summaryStyle = when (result?.resultType) {
                TestResult.ResultType.SUCCESS -> ANSI_GREEN
                TestResult.ResultType.FAILURE -> ANSI_RED
                else -> ANSI_WHITE
            }

            println("--------------------------------------------------------------------------");
            println("Results: " + summaryStyle + "${result?.resultType}" + ANSI_RESET
                    + " (${result?.testCount} tests, "
                    + ANSI_GREEN + "${result?.successfulTestCount} passed" + ANSI_RESET
                    + ", " + failStyle + "${result?.failedTestCount} failed" + ANSI_RESET
                    + ", " + skipStyle + "${result?.skippedTestCount} skipped" + ANSI_RESET
                    + ")");
            println("--------------------------------------------------------------------------");

            failedTests.takeIf { it.isNotEmpty() }?.prefixedSummary("$failStyle Failed Tests")
            println(ANSI_RESET)
            skippedTests.takeIf { it.isNotEmpty() }?.prefixedSummary("$skipStyle Skipped Tests:")
            println(ANSI_RESET)
        }
    }

    override fun beforeTest(testDescriptor: TestDescriptor?) {
    }

    override fun afterTest(testDescriptor: TestDescriptor?, result: TestResult?) {

        val indicator = when {
            result?.failedTestCount!! > 0 -> ANSI_RED + X_MARK
            result.skippedTestCount > 0 -> ANSI_YELLOW + NEUTRAL_FACE
            else -> ANSI_GREEN + CHECK_MARK
        }

        println("    $indicator $ANSI_RESET ${testDescriptor?.displayName}");

        if (result.failedTestCount > 0) {
            println(" ")
        }

        when (result.resultType) {
            TestResult.ResultType.FAILURE -> testDescriptor?.let { failedTests.add(it) }
            TestResult.ResultType.SKIPPED -> testDescriptor?.let { skippedTests.add(it) }
            else -> Unit
        }
    }

    private infix fun List<TestDescriptor>.prefixedSummary(subject: String) {
        println(subject)
        forEach { test -> println("\t${test.displayName()}") }
    }

    private fun TestDescriptor.displayName() = parent?.let { "${it.name} - $name" } ?: name


}
