<?php
include ('connexionBdd.php');

function ptsDeVente(){
	// Requête SQL
	$result = mysql_query('SELECT nom from PointDeVente order by nom;') or die ('ptsDeVente');
	
	return $result;
} 

function bddAjoutConso($rue, $cp, $ville, $login, $email, $questS, $repS, $tel, $mdp){
	$id = idMax()+1;
	// echo $mdp;
	// echo '<br>';
        // echo $id;
	// echo '<br>';

	// Requête SQL
	$texteReq="insert into Utilisateur(identifiant,adresse1,codePostal,ville,pseudo,motDePasse,email,verifie,questionSecrete,reponseSecrete,telephone,telephoneFix) values($id,'$rue',$cp,'$ville','$login','$mdp','$email',0,'$questS','$repS','$tel','0000000000'); ";
	echo $texteReq;
	$result = mysql_query($texteReq) or die ('bddAjoutConso');

	return $result;
}

function idMax(){
	// Requête SQL
	$requete = "select ifnull(max(identifiant),0) as idMax from Utilisateur;";	
	$result = mysql_query($requete) or die ('idMax');
	if($donnees = mysql_fetch_assoc($result))
	{
   		$id = $donnees['idMax'];
	}
	// echo $result;
	return $id;
}

function rand_string( $length ) {

    $chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    return substr(str_shuffle($chars),0,$length);

}

/* Fonction pour la connexion au site
 * @param $pseudo : Le pseudo de l'utilisateur
 * @param $mdp : Le mot de passe de l'utilisateur
 * @return $id : L'id de l'utilisateur
*/
function connexionSite($pseudo, $mdp){
	// Requête pour savoir si le pseudo et le mot de passe correspond à un utilisateur
	$requete = "select idU from utilisateur where pseudoU = '".$pseudo."' and motDePasseU = '".$mdp."';";
	// echo $requete;
	$result = mysql_query($requete) or die ('connexionSite');
	// Récupération de l'utilisateur ou de rien
	if($donnee = mysql_fetch_assoc($result)){
		$id = $donnee['idU'];
	}
	if(!isset($id)){
		return -1;
	} else {
		// Retourne l'utilisateur
		return $id;
	}	
}

/* Fonction qui récupère le type de l'utilisateur en fonction de son id
 * @param $id : L'id de l'utilisateur
 * @return $type : Le type de l'utilisateur
*/
function typeUtilisateur($id){
	// Requête pour récupérer le type
	$requete = "Select idTypeU from utilisateur where idU = ".$id.";";
	//echo $requete;
	$result = mysql_query($requete) or die ('typeUtilisateur');
	// Récupération du type
	if($donnee = mysql_fetch_assoc($result)){
		$type = $donnee["idTypeU"];
	}
	// Renvoit du type
	return $type;
}

/* Fonction pour récupérer l'état de l'utilisateur
 * @param $id : l'id de l'utilisateur
 * @return $valide : l'état de l'utilisateur
*/
function etatUtilisateur($id){
	// Requête pour récupéré le champs de l'état du compte
	$requete = "Select etatU from utilisateur where idU = ".$id.";";
	$result = mysql_query($requete);
	// Récupération de l'état
	if($donnee = mysql_fetch_assoc($result)){
		$etat = $donnee["etatU"];
	}
	// Envoie de l'état
	return $etat;
}

/* Fonction pour récupérer tous les rayons
 * @return $rayons : tableau contenant les rayons
*/

function listeRayon(){
	// Requête pour récupérer les rayons
	$requete = "Select idRay from rayon;";
	$result = mysql_query($requete) or die ('listeRayon');
	// Récupération
	while($donnees = mysql_fetch_assoc($result)){
		$rayons[] = $donnees;
	}
	// Envoie
	return $rayons;
}

/* Fonction qui récupère toutes les catégories de la base de données en fonction d'un rayon
 * @param $rayon : le nom du rayon
 * @return $result : résultat de la query
*/
function listeCategories($rayon){
	// Requête pour récupérer les catégories
	$requete = "Select c.libelleCat from categorie c inner join rayon r on c.idRay = r.idRay where libelleRay = '".$rayon."';";
	// echo $requete;
	$result = mysql_query($requete) or die ('listeCategories');
	// Envoie
	return $result;
}

/* Fonction qui récupère tous les types de produit de la base de données en fonction d'une catégorie
 * @param $categorie : le nom de la catégorie
 * @return $result : résultat de la query
*/
function listeProduits($categorie){
	// Requête pour récupérer les produits
	$requete = "Select libelleProd from produit p inner join categorie c on p.idCat = c.idCat where libelleCat = '".$categorie."';";
	$result = mysql_query($requete) or die ('listeProduits');
	return $result;
}

/* Fonction qui récupère tous les rayons
 * @return $result : résultat de la query contenant tous les rayons
*/
function listeRayons(){
	$requete = "Select libelleRay from rayon;";
	$result = mysql_query($requete) or die ('listeRayons');
	return $result;
}

/*
 * 
 *
*/
function listeLots($produit){
	$requete = "Select p.idProd, p.descriptionProd, p.imageProd, l.quantiteLot - l.uniteDeVenteLot as quantiteLot, l.dateRecolteLot, l.nbJourConservationLot, l.modeProductionLot, l.ramassageManuelLot, l.prixUnitaireLot from produit p inner join lot l on p.idProd = l.idProd where p.libelleProd = '".$produit."';";
	$result = mysql_query($requete) or die ('listeLot');
	return $result;
}

/* Fonction qui permet de changer son mot de passe
 * @param $nouveauMdp1 : le mot de passe rentré 1 fois
 * @param $nouveauMdp2 : le mot de passe rentré 2 fois
 * @return $verif : vrai si le nouveau mdp est bien vérifié sinon faux
*/
function verifNewMdp($nouveauMdp1, $nouveauMdp2){
	$verif = false;
	if($nouveauMdp1 == $nouveauMdp2){
		$verif = true;
		return $verif;
	} else {
		return $verif;
	}
}

/* Fonction qui modifie l'ancien mot de passe par le nouveau
 * @param $nouveauMdp : le nouveau mot de passe de l'utilisateur
 * @param $idUtilisateur : l'id de l'utilisateur
*/
function modifMdp($nouveauMdp, $idUtilisateur){
	$requete = "update utilisateur set motDePasseU ='".$nouveauMdp."' where idU = ".$idUtilisateur.";";
	mysql_query($requete);
}

/* Modification de l'état de l'utilisateur 
 * @param $etat : Le nouvel état de l'utilisateur
 * @param $idUtilisateur : l'id de l'utilisateur
*/
function modifEtat($etat, $idUtilisateur){
	$requete = "update utilisateur set etatU ='".$etat."' where idU = ".$idUtilisateur.";";
	mysql_query($requete);
}

?>
