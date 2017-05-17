DROP TABLE IF EXISTS Ouverture;
DROP TABLE IF EXISTS Consommateur;
DROP TABLE IF EXISTS Jour;
DROP TABLE IF EXISTS Producteur;
DROP TABLE IF EXISTS Gestionnaire;
DROP TABLE IF EXISTS Controleur;
DROP TABLE IF EXISTS PointDeVente;
DROP TABLE IF EXISTS Utilisateur;

CREATE TABLE Utilisateur (
id INT NOT NULL,
rue VARCHAR(150) NOT NULL,
cp INT(5) NOT NULL,
ville VARCHAR(45) NOT NULL,
login VARCHAR(45) NOT NULL,
motDePasse VARCHAR(45) NOT NULL,
mail VARCHAR(100) NOT NULL,
validationCompte TINYINT(1),
questionSecrete VARCHAR(100),
reponseSecrete VARCHAR(45),
tel INT(10) NOT NULL,
telFix INT(10) NOT NULL,
type VARCHAR(30) NOT NULL,
PRIMARY KEY (id) )
ENGINE = InnoDB;

CREATE TABLE Consommateur (
id INT NOT NULL ,
nom VARCHAR(45) NOT NULL ,
prenom VARCHAR(45) NOT NULL ,
idUser INT NOT NULL,
PRIMARY KEY (id),
FOREIGN KEY (idUser)
REFERENCES Utilisateur(id) )
ENGINE = InnoDB;

CREATE TABLE Jour (
id INT NOT NULL ,
nom CHAR NULL ,
PRIMARY KEY (id) )
ENGINE = InnoDB;

CREATE TABLE PointDeVente (
id INT NOT NULL ,
nom VARCHAR(45) NOT NULL ,
tel INT(10) NULL ,
telFix INT(10) NULL ,
noSiret INT(14) NOT NULL ,
IBAN VARCHAR(27) NOT NULL ,
idUser INT NOT NULL,
PRIMARY KEY (id),
FOREIGN KEY (idUser)
REFERENCES Utilisateur(id)  )
ENGINE = InnoDB;

CREATE TABLE Producteur (
id INT NOT NULL ,
nom VARCHAR(45) NOT NULL ,
prenom VARCHAR(45) NOT NULL ,
noSiret INT(14) NOT NULL ,
IBAN VARCHAR(27) NOT NULL ,
idUser INT NOT NULL,
PRIMARY KEY (id),
FOREIGN KEY (idUser)
REFERENCES Utilisateur(id)  )
ENGINE = InnoDB;

CREATE TABLE Gestionnaire (
id INT NOT NULL ,
nom VARCHAR(45) NOT NULL , 
prenom VARCHAR(45) NOT NULL,
idUtilisateur INT NOT NULL,
PRIMARY KEY (id),
FOREIGN KEY (idUtilisateur)
REFERENCES Utilisateur(id) )
ENGINE = InnoDB;

CREATE TABLE Controleur (
id INT NOT NULL,
nom VARCHAR(45) NOT NULL,
prenom VARCHAR(45) NOT NULL,
idUtilisateur INT NOT NULL,
dateEmbauche DATE NOT NULL,
PRIMARY KEY (id),
FOREIGN KEY (idUtilisateur)
REFERENCES Utilisateur(id) )
ENGINE = InnoDB;		

CREATE TABLE Ouverture (
idJour INT NOT NULL ,
idPointDeVente INT NOT NULL ,
horaireOuverture VARCHAR(5) NOT NULL ,
horaireFermerture VARCHAR(5) NOT NULL ,
PRIMARY KEY (idJour, idPointDeVente) ,
FOREIGN KEY (idJour )
REFERENCES Jour (id ),
FOREIGN KEY (idPointDeVente )
REFERENCES PointDeVente (id ) )
ENGINE = InnoDB;


-- Jeu d'essai de la base de données
INSERT INTO Utilisateur(id, rue, cp, ville, login, motDePasse, mail, tel, telFix, type) values (1, 'test rue', 05000, 'GAP', 'testGest', 'mdpGest', 'adresseGestTest@gmail.com', 0202020202, 0202020202, 'Gestionnaire');


INSERT INTO Gestionnaire(id, nom, prenom, idUtilisateur) values(1, 'Gerard', 'test', 1);




-- Nouvelle base

CREATE TABLE Localite(
noInsee varchar(10),
nom varchar(50),
codePostal varchar(10),
acheminement varchar(50),
primary key(noInsee)
);

CREATE TABLE PointDeVente(
no int(11),
adresse varchar(50),
codePostal varchar(10),
nom varchar(50),
activite varchar(50),
ville varchar(30),
tel varchar(20),
responsable int(11),
primary key(no)
);

CREATE TABLE Rayon(
no int(11),
libelle varchar(30),
primary key(no)
);

CREATE TABLE Utilisateur(
identifiant int(11),
prenom varchar(25),
nom varchar(40),
dateNaissance date,
adresse1 varchar(75),
adresse2 varchar(75),
ville varchar(25),
email varchar(50),
telephone varchar(15),
codePostal varchar(10),
typeUtilisateur tinyint(4),
cle varchar(100),
motDePasse varchar(100),
dateInscription date,
verifie tinyint(1),
primary key(identifiant)
);

CREATE TABLE Personnel(
numeroPersonnel INTEGER,
nom VARCHAR(25),
prenom VARCHAR(25),
email VARCHAR(35),
typePersonnel VARCHAR(25),
ssNumber VARCHAR(30),
mdp VARCHAR(60),
date_Embauche DATE,
supprime BOOL,
primary key(numeroPersonnel)
);

CREATE TABLE Visite(
numerovisite INTEGER,
libellevisite VARCHAR(25),
dateVisite DATE,
Planificateur INTEGER NOT NULL,
Contrôleur INTEGER NOT NULL, 
foreign key (Planificateur) references Personnel(numeroPersonnel), 
foreign key (Contrôleur) references Personnel(numeroPersonnel),
primary key(numerovisite)
);

CREATE TABLE ControleProducteur(
visiteConcluante BOOL,
motifRejet VARCHAR(250),
heureDebutControle TIME,
numeroOrdreDansLaVisite INTEGER,
numerovisite INTEGER NOT NULL,
identifiant int(11) NOT NULL, 
foreign key (numerovisite) references visite(numerovisite), 
foreign key (identifiant) references utilisateur(identifiant),
primary key(numerovisite,identifiant)
);

CREATE TABLE Categorie(
numero int(11),
libelle varchar(30),
no int(11) NOT NULL, 
foreign key (no) references Rayon(no),
primary key(numero)
);

CREATE TABLE Produit(
numeroPdt int(11),
libelle varchar(100),
pu float,qte int(11),
no int(11) NOT NULL, 
foreign key (no) references Categorie(numero),
primary key(numeroPdt)
) ENGINE = InnoDB;

CREATE TABLE Lot(
nolot int(11),
quantite float,
dateRecolte date,
nbJourConservation int(11),
uniteDeVente varchar(50),
modeProduction varchar(25),
ramassageManuel tinyint(1),
prixUnitaire float,
numero int(11) NOT NULL,
identifiant int(11) NOT NULL, 
foreign key (numero) references Produit(numeroPdt), 
foreign key (identifiant) references Utilisateur(identifiant),
primary key(numero,identifiant,nolot)
);

CREATE TABLE ProposerA(
no int(11) NOT NULL,
numero int(11) NOT NULL,
identifiant int(11) NOT NULL,
nolot int(11) NOT NULL, 
foreign key (no) references PointDeVente(no), 
foreign key (numero,identifiant,nolot) references Lot(numero,identifiant,nolot),
primary key(no,numero,identifiant,nolot)
);
	
