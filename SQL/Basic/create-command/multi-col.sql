-- SYNTAX

ALTER TABLE table_name
  	ADD ( column_name1 datatype[(size)],
              column_name2 datatype[(size)],
              column_name3 datatype[(size)],
	      ...
            ); 


-- EXAMPLE
ALTER TABLE codingeeksql 
	ADD (Occupation VARCHAR2(30),
	     Address VARCHAR2(50),
             Phone int
             );
