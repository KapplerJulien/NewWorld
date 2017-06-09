<?php
    session_start(); 
    include './haut.php'; 
    include '../fonction/fonction.php'; 
    $tabRes=recupProfil($_SESSION["utilisateur"]["id"]);
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
<div class="col-lg-6 offset-lg-3">
    <form method="POST"  action="profil.php">
    <div class="card">
        <div class="card-block">
            <!--Header-->
            <div class="text-center">
                <h3><i class="fa fa-lock"></i> Modification Profil:</h3>
                <hr class="mt-2 mb-2">
            </div>
            <div class="md-form">
                <input placeholder="Nom" type="text" id="nom" name="nom" class="form-control" required maxlength="" value="<?php echo $tabRes['nomU'] ?>">
            </div>
            <div class="md-form">
                <input placeholder="Prenom" type="text" id="prenom" name="prenom" class="form-control" required maxlength="" value="<?php echo $tabRes['prenomU'] ?>">
            </div>
            <div class="md-form">
                <input placeholder="Adresse" type="text" id="adresse" name="adresse" class="form-control" required maxlength="" value="<?php echo $tabRes['adresseU'] ?>">
            </div>
            <div class="md-form">
                <input placeholder="Code Postal" type="text" id="cp" name="cp" class="form-control" required maxlength="5" value="<?php echo $tabRes['codePostalU'] ?>">
            </div>
            <div class="md-form">
                <input placeholder="Ville" type="text" id="ville" name="ville" class="form-control" required maxlength="" value="<?php echo $tabRes['villeU'] ?>">
            </div>
             <div class="md-form">
                <input placeholder="Telephone" type="text" id="tel" name="tel" class="form-control" required maxlength="12" value="<?php echo $tabRes['telephoneU'] ?>">
            </div>
             <div class="md-form">
                <input placeholder="Email" type="text" id="mail" name="mail" class="form-control" required maxlength="" value="<?php echo $tabRes['emailU'] ?>">
            </div>
            <div class="md-form">
                <input placeholder="pseudo" type="text" id="pseudo" name="pseudo" class="form-control" required maxlength="" value="<?php echo $tabRes['pseudoU'] ?>">
            </div>
            <div class="md-form">
                <input placeholder="iban" type="text" id="iban" name="iban" class="form-control" required maxlength="34" value="<?php echo "rien" ?>">
            </div>
            <div class="text-center">
                <button class="btn btn-deep-purple">Modifier</button>
            </div>
        </div>
    </div>
    </form>
</div>
</body>
</html>






