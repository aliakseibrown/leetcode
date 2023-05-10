# Write your MySQL query statement below
SELECT P.firstName, P.lastName, A.city, A.state
FROM person P LEFT JOIN address A
ON A.personId = P.personId 
