SELECT Subject,Code
FROM marks
WHERE Pass_mark < 60
EXCEPT
SELECT Subject,Code
FROM language
WHERE High_score = 90
