
--Ex 1
SELECT p.Nombre, p.Apellidos
FROM Profesores p
JOIN Departamentos d ON p.DepartamentoID = d.DepartamentoID
WHERE p.Sueldo > 30000 AND d.Presupuesto > 200000;


--Ex 2
UPDATE Asignaturas
SET Duracion = 50
WHERE Duracion < 50;

--Ex 3
DELETE FROM Alumnos
WHERE DNI = '33444555K';