<?php
    session_start();
    include 'haut.php';
    include '../fonction/fonction.php';
?>
<html>
<head>
	<meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta http-equiv="x-ua-compatible" content="ie=edge">
    <title>Material Design Bootstrap</title>
    <!-- Font Awesome -->
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.6.0/css/font-awesome.min.css">
    <!-- Bootstrap core CSS -->
    <link href="../css/bootstrap.min.css" rel="stylesheet">
    <!-- Material Design Bootstrap -->
    <link href="../css/mdb.min.css" rel="stylesheet">
    <!-- Your custom styles (optional) -->
    <link href="../css/style.css" rel="stylesheet">

    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.1.0/jquery.min.js"></script>
</head>
<body>
    <?php  
        if (isset($_POST["nom"])) {
            modifProfil($_SESSION["utilisateur"]["id"],$_POST["nom"],$_POST["prenom"],$_POST["adresse"],$_POST["cp"],$_POST["ville"],$_POST["tel"],$_POST["mail"],$_POST["pseudo"],$_POST["iban"]);
			if(isset($_POST["heureL"])){
				echo"1";
				if(isset($_POST["minL"])){
					echo"2";
				}
			}
        }
        $tabRes=recupProfil($_SESSION["utilisateur"]["id"]);
    ?>
    <div class="col-lg-6 offset-lg-3">
        <p>Nom:<?php echo $tabRes["nomU"]; ?></p>
        <p>Prénom:<?php echo $tabRes["prenomU"]; ?></p>
        <p>Adresse:<?php echo $tabRes["adresseU"]; ?></p>
        <p>Code Postal:<?php echo $tabRes["codePostalU"]; ?></p>
        <p>Ville:<?php echo $tabRes["villeU"]; ?></p>
        <p>Telephone:<?php echo $tabRes["telephoneU"]; ?></p>
        <p>Email:<?php echo $tabRes["emailU"]; ?></p>
        <p>Pseudo:<?php echo $tabRes["pseudoU"]; ?></p>
        <p>iban:<?php echo "ver"; ?></p>
        <p><a href="modifierProfil.php" class="btn btn-info" role="button">Modifier le Profil</a></p>
    </div>


<?php
    include 'bas.php';
?>
</body>
</html>