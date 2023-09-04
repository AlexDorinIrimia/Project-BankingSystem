CREATE TABLE Client(
    CNP VARCHAR(10) NOT NULL,
    Nume VARCHAR(30) NOT NULL,
    Adresa VARCHAR(30),
    'Numar de telefon' VARCHAR(10),
    Parola VARCHAR(20) NOT NULL,
    constraint client_pk PRIMARY KEY(CNP)
);

CREATE TABLE Conturi(
    'Numar Cont' VARCHAR(20) NOT NULL,
    CNP VARCHAR(10) NOT NULL,
    Sold NUMERIC(8,3),
    constraint conturi_pk PRIMARY KEY('Numar Cont'),
    constraint client_pk FOREIGN KEY (CNP) REFERENCES Client(CNP)
);

CREATE TABLE Tranzactii(
    ID VARCHAR(20) NOT NULL,
    'Numar Cont' VARCHAR(20) NOT NULL,
    Valoare NUMERIC(8,3),
    Descriere Varchar(30),
    constraint tranzactiii_pk PRIMARY KEY(ID),
    constraint conturi_pk FOREIGN KEY ('Numar Cont') REFERENCES Conturi('Numar Cont')
);