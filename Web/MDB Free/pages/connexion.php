<?php
	session_start();
	// var_dump($_SESSION);
	include_once '../fonction/fonction.php';
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
	include 'haut.php';
?>

    <center>
    	<div class="col-lg-4">
    	<?php
    		// var_dump($_POST);
    		if(!(isset($_POST["pseudo"]) && isset($_POST["mdp"]))){
    	?>
		    	<form method="POST" action="./connexion.php" >
					<!--Form with header-->
					<div class="card affichageConnexion">
					    <div class="card-block">
					        <!--Header-->
					        <div class="form-header blue-gradient">
					            <h3><i class="fa fa-user"></i> Connexion:</h3>
					        </div>
					        <!--Body-->
					        <div class="md-form">
					            <i class="fa fa-user prefix"></i>
					            <input type="text" id="Pseudo" name="pseudo" placeholder="Votre pseudo">
					        </div>
					        <div class="md-form">
					            <i class="fa fa-lock prefix"></i>
					            <input type="text" id="Mdp" name="mdp" placeholder="Mot de passe">
					        </div>

					        <div class="text-center">
					            <input type="Submit" class="btn btn-indigo" value="Se connecter" >
					            <hr>
					        </div>
					    </div>
					</div>
					<!--/Form with header-->
				</form>
		<?php
			} else {
				// var_dump($_POST);
				// echo "1";
				$pseudo = $_POST["pseudo"];
				$mdp = $_POST["mdp"];
				$_SESSION["utilisateur"]["id"] = connexionSite($pseudo, $mdp);
				// var_dump($id);
				if($_SESSION["utilisateur"]["id"] == -1){
		?>
					<form method="POST" action="./connexion.php" >
					<!--Form with header-->
					<div class="card affichageConnexion">
					    <div class="card-block">
					        <!--Header-->
					        <div class="form-header blue-gradient">
					            <h3><i class="fa fa-user"></i> Connexion:</h3>
					        </div>
					        <!--Body-->
					        <div class="md-form">
					            <i class="fa fa-user prefix"></i>
					            <input type="text" id="pseudo" placeholder="Votre pseudo" value="<?php echo $pseudo; ?>">
					        </div>
					        <div class="md-form">
					            <i class="fa fa-lock prefix"></i>
					            <input type="text" id="mdp" placeholder="Mot de passe" value="<?php echo $mdp; ?> ">
					        </div>

					        <div class="text-center">
					            <button class="btn btn-indigo">Se connecter</button>
					            <hr>
					        </div>
					        Votre pseudo ou votre mot de passe est incorrect.
					    </div>
					</div>
					<!--/Form with header-->
				</form>
		<?php
				} else {
					include 'connexionReussi.php';
				}
			}
		?>
		</div>
	</center>

	<?php
		include './bas.php';
	?>
</body>
</html>