CREATE VIEW view_two AS
SELECT unique.ID, student.Name, student.Grade
FROM  unique,student;
