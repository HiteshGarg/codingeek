SELECT Subject, Code
FROM marks
WHERE Pass_mark = 50
INTERSECT
SELECT Subject, Code
FROM language
WHERE Highest_score > 70
