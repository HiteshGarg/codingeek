SELECT Subject, Highest
FROM suppliers
WHERE supplier_id > 2000
UNION
SELECT company_id, company_name
FROM companies
WHERE company_id > 1000
