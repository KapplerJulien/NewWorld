<?php
    session_start();
    include '../fonction/fonction.php';
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
    <link href="../css/bootstrap.min.css" rel="stylesheet">
    <!-- Material Design Bootstrap -->
    <link href="../css/mdb.min.css" rel="stylesheet">
    <!-- Your custom styles (optional) -->
    <link href="../css/style.css" rel="stylesheet">
</head>
<body>
    <?php
        // var_dump($_SESSION);
        $_SESSION["utilisateur"]["type"] = typeUtilisateur($_SESSION["utilisateur"]["id"]);
        include 'haut.php';
        $_SESSION["utilisateur"]["etat"] = etatUtilisateur($_SESSION["utilisateur"]["id"]);

        if($_SESSION["utilisateur"]["etat"] == "NVAL"){
            ?>
            <center>
            <?php
            if(!(isset($_POST["nouveauMdp1"]) && isset($_POST["nouveauMdp2"]))){
            ?>
            <div class="col-lg-4">
                <form method="POST" action="./connexionReussi.php" >
                    <!--Form with header-->
                        <div class="card affichageConnexion">
                            <div class="card-block">
                                <!--Header-->
                                <div class="form-header blue-gradient">
                                    <h3><i class="fa fa-user"></i> Nouveau mot de passe:</h3>
                                </div>
                                <!--Body-->
                                <div class="md-form">
                                    <i class="prefix"></i>
                                    <input type="text" id="NouveauMdp1" name="nouveauMdp1" placeholder="Nouveau mot de passe">
                                </div>
                                <div class="md-form">
                                    <i class="prefix"></i>
                                    <input type="text" id="NouveauMdp2" name="nouveauMdp2" placeholder="Confirmation mot de passe">
                                </div>

                                <div class="text-center">
                                    <input type="Submit" class="btn btn-indigo" value="Modifier" >
                                    <hr>
                                </div>
                            </div>
                        </div>
                    <!--/Form with header-->
                </form>
            </div>
            <?php
            } else {
                var_dump($_POST["nouveauMdp1"]);
                var_dump($_POST["nouveauMdp2"]);
                if(verifNewMdp($_POST["nouveauMdp1"], $_POST["nouveauMdp2"])){
                    // echo $_POST["nouveauMdp1"];
                    // echo $_POST["nouveauMdp2"];
                    modifMdp($_POST["nouveauMdp1"], $_SESSION["utilisateur"]["id"]);
                    if($_SESSION["utilisateur"]["type"] == 1){
                        modifEtat("VAL", $_SESSION["utilisateur"]["id"]);
                        // var_dump("Producteur");
                    }
                } else {
                    ?>
                    <div class="col-lg-4">
                        <form method="POST" action="./connexionReussi.php" >
                            <!--Form with header-->
                                <div class="card affichageConnexion">
                                    <div class="card-block">
                                        <!--Header-->
                                        <div class="form-header blue-gradient">
                                            <h3><i class="fa fa-user"></i> Nouveau mot de passe:</h3>
                                        </div>
                                        <!--Body-->
                                        <div class="md-form">
                                            <i class="prefix"></i>
                                            <input type="text" id="NouveauMdp1" name="nouveauMdp1" placeholder="Nouveau mot de passe" value="<?php echo $_POST["nouveauMdp1"]; ?>">
                                        </div>
                                        <div class="md-form">
                                            <i class="prefix"></i>
                                            <input type="text" id="NouveauMdp2" name="nouveauMdp2" placeholder="Confirmation mot de passe" value="<?php echo $_POST["nouveauMdp2"]; ?>">
                                        </div>
                                        <div class="text-center">
                                            <input type="Submit" class="btn btn-indigo" value="Modifier" >
                                            <hr>
                                        </div>
                                    </div>
                                </div>
                            <!--/Form with header-->
                        </form>
                    </div>
                <?php
                }
            }
        // var_dump($_SESSION);
        // echo "Connexion réussi.";
    ?>
    </center>
    <?php
        } else {
            echo "Vous vous êtes connectés";
        }
        include 'bas.php';
    ?>
</body>
</html>