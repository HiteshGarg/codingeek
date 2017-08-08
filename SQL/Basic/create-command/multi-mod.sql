-- SYNTAX

ALTER TABLE table_name
	MODIFY (column_name1 column_datatype[(size)],
          column_name2 column_datatype[(size)],
          column_name3 column_datatype[(size)],
          ....
    );


-- EXAMPLE
ALTER TABLE codingeeksql
	MODIFY (ID SMALLINT,
          NAME CHAR(13)
    );
