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
    if(!(isset($_POST["pdv"]) && isset($_POST["heure"]))){
    // Faire choisir le point de vente où le client devra récupérer les produits + l'heure
?>
<form action="commande.php">
    <!--Form without header-->
    <div class="card">
        <div class="card-block">

            <!--Header-->
            <div class="text-center">
                <h3><i class="fa fa-lock"></i> Commande:</h3>
                <hr class="mt-2 mb-2">
            </div>

            <!--Body-->
            <div class="md-form">
                Point de vente choisi
                <select id="Pdv" class="form-control" name="pdv">
                    <option selected>Choix d'un point de vente</option>
                    <option>Point de vente 1</option>
                    <?php
                        

                    ?>
                </select>
            </div>

            <div class="md-form">
                <i class="fa fa-lock prefix"></i>
                <input type="text" id="Heure" name="heure" class="form-control" placeholder="Date de récupération(format AAAA-MM-JJ)">
            </div>

            <div class="text-center">
                <button class="btn btn-deep-purple"></button>
            </div>
        </div>
    </div>
    <!--/Form without header-->
</form>
<?php
    } else {
        // Ajouter à la base la quantité voulu d'un produit, le pdv choisi et l'heure de récupération prévu et l'heure de récupération réel   
        


        // Envoie vers commandeEffectue
        include './commandeEffectue.php'; 
    }
    include '../bas.php';
?>
</body>
</html>