<!DOCTYPE html>
<html>
<head>
</head>
<body>
<!--Navbar-->
<nav class="navbar navbar-toggleable-md navbar-dark bg-primary">
    <div class="container">
        <button class="navbar-toggler navbar-toggler-right" type="button" data-toggle="collapse" data-target="#navbarNav1" aria-controls="navbarNav1" aria-expanded="false" aria-label="Toggle navigation">
            <span class="navbar-toggler-icon"></span>
        </button>

<?php
    if(!isset($_SESSION['utilisateur']['type'])){
?>
                <a class="navbar-brand" href="/~jkappler/MDB Free/index.php">
                    <strong>New World</strong>
                </a>
                <div class="collapse navbar-collapse" id="navbarNav1">
                    <ul class="navbar-nav mr-auto">
                        <li class="nav-item active">
                            <a class="nav-link">Acheter</a>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link">Produire</a>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link">Distribuer</a>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link" href="/~jkappler/MDB Free/pages/inscription.php">Inscription</a>
                        </li>
                        <li class="nav-item dropdown btn-group">
                            <a class="nav-link" href="/~jkappler/MDB Free/pages/connexion.php">Connexion</a>
                        </li>
                    </ul>
                </div>
<?php
    } else {
        switch ($_SESSION['utilisateur']['type']) {
            case '1':
                ?>
                <a class="navbar-brand" href="/~jkappler/MDB Free/index.php">
                    <strong>New World</strong>
                </a>
            <div class="collapse navbar-collapse" id="navbarNav1">
                <ul class="navbar-nav mr-auto">
                <li class="nav-item active">
                    <a class="nav-link" href="/~jkappler/MDB Free/pages/Producteur/ajoutLots.php">Ajout lots</a>
                </li>
                <li class="nav-item">
                    <a class="nav-link" href="/~jkappler/MDB Free/pages/Producteur/mesLots.php">Mes Lots</a>
                </li>
                <li class="nav-item">
                    <a class="nav-link" href="/~jkappler/MDB Free/pages/profil.php">Profil</a>
                </li>
                <li class="nav-item dropdown btn-group">
                    <a class="nav-link" href="/~jkappler/MDB Free/pages/deconnexion.php">Deconnexion</a>
                </li>
                </ul>
            </div>
                <?php
                break;
            
            case '2':

            case '3':
                 ?>
                <a class="navbar-brand" href="/~jkappler/MDB Free/index.php">
                    <strong>New World</strong>
                </a>
            <div class="collapse navbar-collapse" id="navbarNav1">
                <ul class="navbar-nav mr-auto">
                <li class="nav-item active">
                    <a class="nav-link" href="/~jkappler/MDB Free/pages/Client/catalogue.php">Catalogue</a>
                </li>
                <li class="nav-item">
                    <a class="nav-link" href="/~jkappler/MDB Free/pages/Client/panier.php">Panier</a>
                </li>
                <li class="nav-item">
                    <a class="nav-link" href="/~jkappler/MDB Free/pages/profil.php">Profil</a>
                </li>
                <li class="nav-item dropdown btn-group">
                    <a class="nav-link" href="/~jkappler/MDB Free/pages/deconnexion.php">Deconnexion</a>
                </li>
                </ul>
            </div>
                <?php
                break;

            default:
                # code...
                break;
        }
    }
?>
            <form class="form-inline waves-effect waves-light">
                <input class="form-control" type="text" placeholder="Search">
            </form>
        </div>
</nav>

</body>
</html>

