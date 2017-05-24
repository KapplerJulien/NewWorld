<?php
	session_start();
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta http-equiv="x-ua-compatible" content="ie=edge">
    <title>Material Design Bootstrap</title>
    <!-- Font Awesome -->
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.6.0/css/font-awesome.min.css">
    <!-- Bootstrap core CSS -->
    <link href="./css/bootstrap.min.css" rel="stylesheet">
    <!-- Material Design Bootstrap -->
    <link href="./css/mdb.min.css" rel="stylesheet">
    <!-- Your custom styles (optional) -->
    <link href="./css/style.css" rel="stylesheet">
</head>

<body>

	<?php
		include 'pages/haut.php';
	?>

    <!-- SCRIPTS -->
    <!-- JQuery -->
    <script type="text/javascript" src="js/jquery-3.1.1.min.js"></script>
    <!-- Bootstrap tooltips -->
    <script type="text/javascript" src="js/tether.min.js"></script>
    <!-- Bootstrap core JavaScript -->
    <script type="text/javascript" src="js/bootstrap.min.js"></script>
    <!-- MDB core JavaScript -->
    <script type="text/javascript" src="js/mdb.min.js"></script>

    <div class="row">
        <div class="col-lg-8">
            <p><center>Le meilleur produits de saison.</center></p>
            <p><center>Du producteur à l'artisan et au consommateur</center></p>
            <p><center>Ni usine, ni camion, ni grande surface.</center></p>
            <p><center>La terre et l'homme à nouveau respectés.</center></p>
            <p><center>New World</center></p>
            <hr>
            <div class="row">
                <div class="text-center col-lg-3">
                    <!--Panel Producteur-->
                    <div class="card text-center">
                        <div class="card-header default-color-dark white-text">
                            Producteur
                        </div>
                        <div class="card-block">
                            <h4 class="card-title">Agriculteurs, éleveurs</h4>
                            <p class="card-text">Vous souhaiter proposer au juste prix des produits de qualité, sains, frais et de saison.</p>
                            <a class="btn btn-default">S'INSCRIRE</a>
                        </div>
                        <div class="card-footer text-muted default-color-dark white-text">
                            <p>Déjà xxx inscrits.</p>
                        </div>
                    </div>
                    <!--Fin panel Producteur-->
                </div>
                <div class="text-center col-lg-4 offset-lg-1">
                    <!--Panel Consommateur-->
                    <div class="card text-center">
                        <div class="card-header default-color-dark white-text">
                            Consommateur
                        </div>
                        <div class="card-block">
                            <h4 class="card-title">Adulte éco-responsable</h4>
                            <p class="card-text">Vous êtes un père ou une mère de famille responsable qui sait non seulement que l'on doit manger sain mais aussi que pour maintenir un centre ville et des campagnes peuplés, il est nécessaire de donner leurs chances aux producteurs et artisants.Les emplois que vous maintenez aujourd'hui seront peut-être ceux de vos enfants. Il faut développer l'activité locale en réduisant les coûts de transport ainsi que les intermédiaires. Vous souhaitez proposer au juste prix des produits de qualité, sains, frais et de saison.</p>
                            <a class="btn btn-default">S'INSCRIRE</a>
                        </div>
                        <div class="card-footer text-muted default-color-dark white-text">
                            <p>Déjà xxx inscrits.</p>
                        </div>
                    </div>
                    <!--Fin panel Consommateur-->
                </div>
                <div class="text-center col-lg-3 offset-lg-1">
                    <!--Panel Artisans-->
                    <div class="card text-center">
                        <div class="card-header default-color-dark white-text">
                            Artisans
                        </div>
                        <div class="card-block">
                            <h4 class="card-title">Artisan de l'alimentaire</h4>
                            <p class="card-text">Vous transformez les produits frais locaux et souhaitez maintenir votre commerce de centre ville face à l'omniprésence des grandes surfaces. Vous voyez chaque jour autour de vous des magasins qui ferment. NewWorld peut vous permettre un complément d'activité. Tentez cela ne coûte rien.</p>
                            <a class="btn btn-default">S'INSCRIRE</a>
                        </div>
                        <div class="card-footer text-muted default-color-dark white-text">
                            <p>Déjà xxx inscrits.</p>
                        </div>
                    </div>
                    <!--Fin panel Artisans-->
                </div>
            </div>
        </div>
        <div class="col-lg-4">
            <!--Card paysan-->
            <div class="card">

                <!--Card image-->
                <img class="img-fluid" src="./img/imgNewWorld/jardinier.png" alt="Card image paysan">
                <!--/.Card image-->

                <!--Card content-->
                <div class="card-block">
                    <!--Title-->
                    <h4 class="card-title">Paysans/Maraicher</h4>
                    <!--Text-->
                    <p class="card-text">En cultivant la Terre, ils la rendent plus propice à la vie.</p>
                </div>
                <!--/.Card content-->
            </div>
            <!--Card paysan-->

            <!--Card boucher-->
            <div class="card">

                <!--Card image-->
                <img class="img-fluid" src="./img/imgNewWorld/boucher.png" alt="Card image paysan">
                <!--/.Card image-->

                <!--Card content-->
                <div class="card-block">
                    <!--Title-->
                    <h4 class="card-title">Boucher, charcutier, boulanger</h4>
                    <!--Text-->
                    <p class="card-text">Ils transforment les produits locaux en respectant la charte et maintiennent les savoir faire et les centre villes vivants.</p>
                </div>
                <!--/.Card content-->
            </div>
            <!--Card boucher-->
        </div>
    </div>
    <?php
    	include 'pages/bas.php';
    ?>
</body>

</html>
