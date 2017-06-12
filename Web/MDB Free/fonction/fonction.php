<?php
include ('connexionBdd.php');

/**function ptsDeVente(){
	// Requête SQL
	$result = mysql_query('SELECT nom from PointDeVente order by nom;') or die ('ptsDeVente');
	
	return $result;
} */

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

function recupProfil($idUtilisateur){
	$requete = "select prenomU,nomU,adresseU,villeU,emailU,telephoneU,codePostalU,pseudoU from utilisateur where idU=".$idUtilisateur.";";
	$result = mysql_query($requete);
	$tabU = mysql_fetch_assoc($result);
	return $tabU;
}

function modifProfil($id, $nom, $prenom, $adresse, $cp, $ville, $tel, $email, $pseudo){
	$requete="update utilisateur set nomU='".$nom."' , prenomU='".$prenom."' , adresseU='".$adresse."' , codePostalU='".$cp."' , villeU='".$ville."' , telephoneU='".$tel."' , emailU='".$email."' , pseudoU='".$pseudo."' where idU=".$id.";";
	mysql_query($requete) or die ("modifProfil");
}

function ajoutUtilisateur($pseudo, $nom, $prenom, $email, $telephone, $type){
	$requeteIdType = "select idTypeU from typeUtilisateur where libelletypeU='".$type."';";
	$result = mysql_query($requeteIdType);
	if($data = mysql_fetch_assoc($result)){
		$idTypeU = $data["idTypeU"];
	}
	$idUtilisateurMax = idMaxUtilisateur();
	$requete = "insert into utilisateur(idU,prenomU,nomU,pseudoU,emailU,telephoneU,idTypeU) values(".$idUtilisateurMax.",'".$prenom."','".$nom."','".$pseudo."','".$email."','".$telephone."',".$idTypeU.");";
	echo $requete;
	mysql_query($requete) or die ("ajoutUtilisateur");
}

function idMaxUtilisateur(){
	$requete = "select ifnull(max(idU),0)+1 as idMax from utilisateur;";
	$result = mysql_query($requete) or die ("idMaxUtilisateur");
	if($data = mysql_fetch_assoc($result)){
		$id = $data["idMax"];
	}
	return $id;
}

function recupQuestion(){
	$requete = "select libelleQuestion from question where idQuestion != 1;";
	$result = mysql_query($requete);
	return $result;
}

function recupUnite()
{
    $texteRequete="select libelleUnite from unite;";
    $resultat=mysql_query($texteRequete);
    return $resultat;
}

function remplireLot($qte,$jour,$mois,$annees,$conservation,$modeProd,$ramassage,$prix,$unite,$produit,$idUser)
{
    if($ramassage=='manuel')
    {
        $ram=1;
    }
    else
    {
        $ram=0;
    }
    //recuperer l'id max +1 pour incrementer
    $requeteIdMax="select ifnull(max(idLot),0)+1 as maxId from lot;";
    $resultatIdMax=mysql_query($requeteIdMax);
    $tabInfosIdMax=mysql_fetch_assoc($resultatIdMax);
    $maxId=$tabInfosIdMax["maxId"];
    //recuperer l'id du produit selectionner
    $requeteIdProd="select idProd from produit where libelleProd='".$produit."' ;";
    $resultatIdProd=mysql_query($requeteIdProd);
    $tabInfosIdProd=mysql_fetch_assoc($resultatIdProd);
    $idProd=$tabInfosIdProd["idProd"];
    //recuperer l'id de l'unite
    $texteRequeteIdUnite="select idUnite from unite where libelleUnite='".$unite."' ;";
    $resultatIdUnite=mysql_query($texteRequeteIdUnite);
    $tabInfosIdUnite=mysql_fetch_assoc($resultatIdUnite);
    $idUnite=$tabInfosIdUnite["idUnite"];
    //requete finale pour l'insertion du lot
    $texteRequete="insert into lot (idLot,quantiteLot,dateRecolteLot,nbJourConservationLot,uniteDeVenteLot,modeProductionLot,ramassageManuelLot,prixUnitaireLot,idProd,idU,idUnite) values (".$maxId.",".$qte.",'".$annees."-".$mois."-".$jour."',".$conservation.",0,'".$modeProd."',".$ram.",".$prix.",".$idProd.",".$idUser.",".$idUnite.");";
    //echo $texteRequete;
    mysql_query($texteRequete);
    //echo mysql_error();
}

function mesLots($idUser)
{
    $requeteLotProducteur="select p.libelleProd,l.quantiteLot - l.uniteDeVenteLot as quantiteRestante,l.quantiteLot,l.prixUnitaireLot from lot l inner join produit p on l.idProd=p.idProd where l.idU=".$idUser.";";
    $resultat=mysql_query($requeteLotProducteur);
    return $resultat;
}

function addDemandeProd($libelle,$description,$cat)
{
    //
    $requeteIdMax="select ifnull(max(idProd),0)+1 as maxId from produit;";
    $resultatIdMax=mysql_query($requeteIdMax);
    $tabInfosIdMax=mysql_fetch_assoc($resultatIdMax);
    $maxId=$tabInfosIdMax["maxId"];
    //
    $requeteIdCat="select idCat from categorie where libelleCat='".$cat."' ;";
    $resultatIdCat=mysql_query($requeteIdCat);
    $tabInfosIdCat=mysql_fetch_assoc($resultatIdCat);
    $idCat=$tabInfosIdCat["idCat"];
    //
    $texteRequete="insert into produit (idProd,libelleProd,supprimeProd,etatprod,descriptionProd,idCat) values(".$maxId.",'".$libelle."',0,'ATT','".$description."',".$idCat.");";
    mysql_query($texteRequete);
}

function recupPdvClient(){
	$requete = "select idPdv,nomPdv from pointDeVente;";
	$result = mysql_query($requete);
}

?>
