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
    $idProd = $_GET["idProd"];
    $nomProd = $_GET["nomProd"];
    var_dump($nomProd);
    $quantiteProd = $_POST["quantiteProd"];
    $_SESSION["utilisateur"]["panier"][$idProd]["nomProd"] = $nomProd;
    $_SESSION["utilisateur"]["panier"][$idProd]["quantiteProd"] = $quantiteProd;
    var_dump($_GET);
    var_dump($_POST);
?>
    <center>
    <table border width="50%">
        <tr>
            <td><?php echo $_SESSION["utilisateur"]["panier"][$idProd]["nomProd"]; ?></td>
            <td><?php echo $_SESSION["utilisateur"]["panier"][$idProd]["quantiteProd"]; ?></td>
        </tr>
    </table>
    </center>
<?php
    include '../bas.php';
?>
</body>
</html>