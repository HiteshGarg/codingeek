SELECT *
FROM fruits
WHERE NOT EXISTS
  (SELECT * 
   FROM vitamins
   WHERE fruits.Fruits = vitamins.Fruits);
