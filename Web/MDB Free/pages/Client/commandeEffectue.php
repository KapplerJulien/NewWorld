<?php
	session_start();
	include '../haut.php';
    include '../../fonction/fonction.php';
?>
<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta http-equiv="x-ua-compatible" content="ie=edge">
    <title>Material Design Bootstrap</title>
    <!-- Font Awesome -->
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.6.0/css/font-awesome.min.css">
    <!-- Bootstrap core CSS -->
    <link href="../../css/bootstrap.min.css" rel="stylesheet">
    <!-- Material Design Bootstrap -->
    <link href="../../css/mdb.min.css" rel="stylesheet">
    <!-- Your custom styles (optional) -->
    <link href="../../css/style.css" rel="stylesheet">

    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.1.0/jquery.min.js"></script>
</head>
<body>
<?php
	$idCommande = commander($_SESSION["commande"]["pdv"],$_SESSION["commande"]["heure"],$_SESSION["utilisateur"]["id"]);
	for($i=0;$i < count($_SESSION["panier"]); $i++){
		$idLot = recupIdLot($_SESSION["panier"][$i]["idProd"]);
		panier($idCommande,$idLot,$_SESSION["utilisateur"]["id"],$_SESSION["panier"][$i]["idProd"],$_SESSION["panier"][$i]["quantiteProd"]);
	}
?>
Commande effectué.

<?php
    include '../bas.php';
?>
</body>
</html>