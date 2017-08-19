CREATE OR REPLACE VIEW view_name AS
SELECT v1.column_name1, v2.column_name2, v2.column_name3 etc
FROM table_name1 AS v1, table_name2 AS v2...
WHERE  [condition];
