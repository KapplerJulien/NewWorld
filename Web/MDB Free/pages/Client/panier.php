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
    if(!(isset($_GET["idProd"]))){
        if(!(isset($_SESSION["panier"]))){
            echo"<h1>Panier vide</h1>";
        } else {
            for($nbreProduit = 0; $nbreProduit < count($_SESSION["panier"]); $nbreProduit++){
                ?>
                <center>
                <table border width="50%">
                    <tr>
                        <td><?php echo $_SESSION["panier"][$nbreProduit]["nomProd"]; ?></td>
                        <td><?php echo $_SESSION["panier"][$nbreProduit]["quantiteProd"]; ?></td>
                    </tr>
                </table>
                </center>
                <?php
            }
                echo "<form action='./commande.php'>";
                echo "<input type='submit' value='Commander'/>";
                echo "</form>";
        }
    } else {
        $idProd = $_GET["idProd"];
        $nomProd = $_GET["nomProd"];
        // var_dump($nomProd);
        $quantiteProd = $_POST["quantiteProd"];
        // $_SESSION["utilisateur"];
        if(isset($_SESSION["panier"])){
            $nbreProd = 0;
            // var_dump(count($_SESSION["panier"]));
            while(($nbreProd != count($_SESSION["panier"])) && ($_SESSION["panier"][$nbreProd]["nomProd"] != $nomProd)){
                // var_dump($nbreProd);
                // echo "while";
                $nbreProd++;
            }
            if($nbreProd == count($_SESSION["panier"])){
                // echo "blabla";
                $i = count($_SESSION["panier"]);
                // var_dump($i);
                $_SESSION["panier"][$i]["idProd"] = $idProd;
                $_SESSION["panier"][$i]["nomProd"] = $nomProd;
                $_SESSION["panier"][$i]["quantiteProd"] = $quantiteProd;
            } else {
                // echo "else";
                $quantiteProdSession = $_SESSION["panier"][$nbreProd]["quantiteProd"];
                $quantiteMax = (int) $quantiteProdSession + (int) $quantiteProd;
                $_SESSION["panier"][$nbreProd]["quantiteProd"] = $quantiteMax;
            }   
        } else {
            $i = 0;
            $_SESSION["panier"][$i]["idProd"] = $idProd;
            $_SESSION["panier"][$i]["nomProd"] = $nomProd;
            $_SESSION["panier"][$i]["quantiteProd"] = $quantiteProd;
            // var_dump($_SESSION["panier"]);
        }
        // var_dump($_GET);
        // var_dump($_POST);
    
        for($nbreProduit = 0; $nbreProduit < count($_SESSION["panier"]); $nbreProduit++){
?>
            <center>
            <table border width="50%">
                <tr>
                    <td><?php echo $_SESSION["panier"][$nbreProduit]["nomProd"]; ?></td>
                    <td><?php echo $_SESSION["panier"][$nbreProduit]["quantiteProd"]; ?></td>
                </tr>
            </table>
            </center>
<?php
        }
        echo "<form action='./commande.php'>";
        echo "<input type='submit' value='Commander'/>";
        echo "</form>";
    }
    include '../bas.php';
?>
</body>
</html>