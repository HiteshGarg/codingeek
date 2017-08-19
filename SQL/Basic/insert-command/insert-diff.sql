INSERT INTO codingeek
(Name,Course)
SELECT  ID AS Student_name,Preferred_subject
FROM tutorials
WHERE ID > 0;
