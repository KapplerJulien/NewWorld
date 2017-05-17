<?php
 
function ptsDeVente(){
// Connection à Mysql
$connect = mysql_connect('localhost','adminDBNewWorld','Pa$$w0rd');

// Sélection de la base
mysql_select_db('dbNewWorld',$connect);

// Requête SQL
$result = mysql_query('SELECT nom from PointDeVente order by nom;') or die ('Erreur SQL');

return $result;

} 

function bddAjoutConso($rue, $cp, $ville, $login, $email, $questS, $repS, $tel, $mdp){
	// Connection à Mysql
	$connect = mysql_connect('localhost','adminDBNewWorld','Pa$$w0rd');

	// Sélection de la base
	mysql_select_db('dbNewWorld',$connect);

	$id = idMax()+1;
	// echo $mdp;
	// echo '<br>';
        // echo $id;
	// echo '<br>';

	// Requête SQL
	$texteReq="insert into Utilisateur(id,rue,cp,ville,login,motDePasse,mail,validationCompte,questionSecrete,reponseSecrete,tel,telFix) values($id,'$rue',$cp,'$ville','$login','$mdp','$email',0,'$questS','$repS',$tel,0000000000); ";
	// echo $texteReq;
	$result = mysql_query($texteReq) or die ('Erreur SQL');

return $result;
}

function idMax(){
	// Connection à Mysql
	$connect = mysql_connect('localhost','adminDBNewWorld','Pa$$w0rd');

	// Sélection de la base
	mysql_select_db('dbNewWorld',$connect);

	// Requête SQL
	$requete = "select max(id) from Utilisateur;";	
	$result = mysql_query($requete) or die ('Erreur SQL');
	if($donnees = mysql_fetch_assoc($result))
	{
   		$id = $donnees['max(id)'];
	}
	// echo $result;
	return $id;
}

function rand_string( $length ) {

    $chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    return substr(str_shuffle($chars),0,$length);

}

?>