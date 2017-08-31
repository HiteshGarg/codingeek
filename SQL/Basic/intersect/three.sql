SELECT Subject, Code
FROM marks
WHERE Pass_mark > 40
INTERSECT
SELECT Subject, Code
FROM language
WHERE Pass_mark > 80
