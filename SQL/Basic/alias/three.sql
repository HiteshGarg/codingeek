SELECT Subject AS Sub_name, Code AS Sub_ID
FROM marks
WHERE Pass_marks >= 40
UNION ALL
SELECT Subject AS Sub_name, Code AS Sub_ID
FROM language
WHERE High_score > 85;
