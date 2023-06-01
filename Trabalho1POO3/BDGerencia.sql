CREATE TABLE Funcionario 
(
  ID int PRIMARY KEY, 
  idade int,
  altura NUMERIC,
  nome VARCHAR(30),
  sexo VARCHAR(1),
  endereço VARCHAR(200)
);

CREATE TABLE Carro
(
ID int PRIMARY KEY,
portas int,
ano int,
marca VARCHAR(30),
cor VARCHAR(30),
linha VARCHAR(30)
);