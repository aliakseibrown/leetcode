# Write your MySQL query statement below
SELECT email as Email
FROM Person
group by 1
having count(*) > 1;
