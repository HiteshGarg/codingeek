--SYNTAX:

UPDATE table_name
SET column1 = value1, column2 = value2,...columnN = valueN
WHERE condition;


--EXAMPLE:
UPDATE Users
SET FirstName = 'Catherine', City='Mumbai'
WHERE CustomerID = 3;
