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
<?php
    if (isset($_POST["produit"])) {
    remplireLot($_POST["qte"],$_POST["jour"],$_POST["mois"],$_POST["annees"],$_POST["conservation"],$_POST["modeProd"],$_POST["ramassage"],$_POST["prix"],$_POST["unite"],$_POST["produit"],$_SESSION["utilisateur"]["id"]);
    }
?>
    <div id="tabLotProducteur">
    <?php
        $result =  mesLots($_SESSION["utilisateur"]["id"]);
        $recupLot = "<table border width='100%'>";
        $recupLot .= "<tr><td>Nom</td><td>Quantité initiale</td><td>Quantitée restante</td><td>prix unitaire</td>";
        while($data = mysql_fetch_assoc($result)){
        // var_dump($data);
            $recupLot .= "<tr>";
            $recupLot .= "<td >".$data["libelleProd"]."</td>";
            $recupLot .= "<td>".$data["quantiteLot"]."</td>";
            $recupLot .= "<td>".$data["quantiteRestante"]."</td>";
            $recupLot .= "<td>".$data["prixUnitaireLot"]."</td>";

    }
    $recupLot .= "</table>";
    echo $recupLot;
    ?>
    </div>

    <?php
        include '../bas.php';
    ?>
</body>
</html>