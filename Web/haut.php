<?php
include'traductionFR.php';
?>

<!DOCTYPE HTML>

<html lang="fr">
	<head>
		<meta charset="utf-8">
		<link type='text/css' rel="stylesheet" href="style/style.css">
		<link href='http://fonts.googleapis.com/css?family=Great+Vibes' rel='stylesheet' type='text/css'>
		<link href='http://fonts.googleapis.com/css?family=Cedarville+Cursive' rel='stylesheet' type='text/css'>	
		<title>New World</title>
	</head>
	<body>
		<div id='statut'> 
			<a href="" style="text-decoration:none;font-size:small" class="lien">&nbsp;&nbsp;|<?php echo $language ?></a>
			<a href="./formulaire_inscription.php" style="text-decoration:none;font-size:small" class="lien">&nbsp;&nbsp;|<?php echo $registration ?></a>
			<a href="./formulaire_connexion.php" style="text-decoration:none;font-size:small" class="lien">&nbsp;&nbsp;|<?php echo $connection ?></a>


		</div>
		<div id='barreMenu'>
			<p>
				<a href="accueil.php" style="text-decoration:none" class="lien">NW</a>
				<a href="" style="text-decoration:none" class="lien"><?php echo $menuTop1 ?> </a>
				<a href="" style="text-decoration:none" class="lien"><?php echo $menuTop2 ?></a>
				<a href="" style="text-decoration:none" class="lien"><?php echo $menuTop3 ?></a>
				<input id="barreRecherche" type="text" placeHolder="  Rechercher"/>
			
			</p>
		</div>

