SELECT Subject, Pass_mark
FROM marks
WHERE Pass_mark > 42
UNION
SELECT Subject, Highest_score
FROM language
WHERE Highest_score > 85;
