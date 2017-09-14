SELECT Subject AS Sub_name, Code AS Sub_ID
FROM marks AS m
WHERE m.Pass_marks >= 40
UNION ALL
SELECT Subject AS Sub_name, Code AS Sub_ID
FROM language AS l
WHERE l.High_score > 85;
