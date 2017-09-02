INSERT INTO codingeek (Name,Course)
  SELECT Student_name, Preferred_subject
    FROM tutorials
    WHERE ID > 0;
