INSERT INTO codingeek
SELECT * FROM  tutorials
WHERE Preferred_subject = ANY(
SELECT Preferred subject FROM lecture
WHERE Availability == 'open'));
