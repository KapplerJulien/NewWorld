<?php
	session_start();
	include '../haut.php';
    include '../../fonction/fonction.php'
?>
<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta http-equiv="x-ua-compatible" content="ie=edge">
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

Votre produit a été remonté aux gestionnaires. Merci de votre demande et de votre amélioration du site.
    <?php
        var_dump($_POST);
        $cat = $_POST["cat"];
        $nom = $_POST["nom"];
        $description = $_POST["description"];
        addDemandeProd($nom,$description,$cat);
        include '../bas.php';
    ?>
</body>
</html>