CREATE VIEW view_two AS
SELECT unique.ID, student.Name, student.Grade, student.Points
FROM  unique,student;
WHERE student.Age > 13
