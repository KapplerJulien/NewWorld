<?php
include '../fonction/connexionBdd.php';

$requete1="set names utf8;";
$res1=mysql_query($requete1);

$requete = "select concat(utilisateur.villeU,', France') as location, true as stopover from visite inner join ControleProducteur on visite.idVisite = ControleProducteur.idVisite
	inner join utilisateur on ControleProducteur.idU = utilisateur.idU where visite.controleur = ".$_GET["idControleur"].";";
// echo $requete;
$result = mysql_query($requete);
// echo mysql_error();

while($donnees = mysql_fetch_assoc($result)){
	if($donnees["stopover"] == 1){
		$donnees["stopover"] = TRUE;
	}
	$res[] = $donnees;
}
//print_r($res);
echo json_encode($res);
?>