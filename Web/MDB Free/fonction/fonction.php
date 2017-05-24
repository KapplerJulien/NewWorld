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
 * @result : Le type de l'utilisateur
*/
function typeUtilisateur($id){
	// Requête pour récupérer le type
	$requete = "Select idTypeU from utilisateur where idU = ".$id.";";
	$result = mysql_query($requete) or die ('typeUtilisateur');
	// Récupération du type
	if($donnee = mysql_fetch_assoc($result)){
		$type = $donnee["idTypeU"];
	}
	// Renvoit du type
	return $type;
}

?>
