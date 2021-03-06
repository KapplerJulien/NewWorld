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
    <div class="col-lg-6 offset-lg-3">
<?php
    $res=listeRayons();
    while($data =mysql_fetch_assoc($res))
    {
        echo "<button type='button' class='btn btn-default' onclick=' recupLeRayon(\"".$data["libelleRay"]."\")' id='".$data["libelleRay"]. "'>".$data["libelleRay"]."</button>";
    }
    ?>
    <div id="affichageCat" ></div>
    <div id="affichageProd"></div>
    <fieldset id="form" style='visibility:hidden'>
    <div class="col-lg-6 offset-lg-3">
        <form method="POST"  action="mesLots.php">
        <div class="card">
            <div class="card-block">
                <!--Header-->
                <div class="text-center">
                    <h3><i class="fa fa-lock"></i> Ajouter un lot:</h3>
                    <hr class="mt-2 mb-2">
                </div>
                <div class="md-form" id="afficheProdSession"></div>
                <div class="md-form">
                    <input placeholder="Quantite" type="number" id="qte" name="qte" class="form-control" required>
                </div>
                <div class="md-form">
                Date recolte
                        <select name="jour">
                        <?php
                        for($i=1;$i<32;$i++)
                        {
                            echo "<option>".$i."</option>";
                        }
                        ?>
                    </select>
                    <select name="mois">
                    <?php
                        for($i=1;$i<13;$i++)
                        {
                            echo "<option>".$i."</option>";
                        }
                        ?>
                    </select>
                    <select name="annees">
                        <?php
                            for($i=2000;$i<2100;$i++)
                            {
                                echo "<option>".$i."</option>";
                            }
                        ?>
                    </select>
                </div>
                <div class="md-form">
                    <input placeholder="Conservation (nombre de jour)" type="number" id="conservation" name="conservation" class="form-control" required>
                </div>
                mode de production:
                <input type='radio' name='modeProd' value='serre' id='serre' checked /> <label>Serre</label>
                <input type='radio' name='modeProd' value='pleine aire' id='pleineAire' /> <label>Pleine air</label>
                <br>
                <br>
                ramassage manuel:
                <input type='radio' name='ramassage' value='manuel' id='manuel' /> <label>oui</label>
                <input type='radio' name='ramassage' value='Nmanuel' id='Nmanuel' checked /> <label>non </label>
                <div class="md-form">
                    <input placeholder="prix unitaire" type="number" id="prix" name="prix" class="form-control" step="0.01" required>
                </div>

                <div class="md-form">
                    <select name="unite">
                        <?php
                            $res=recupUnite();
                        while($data =mysql_fetch_assoc($res))
                        {
                            echo "<option>".$data["libelleUnite"]."</option>";
                        }
                        ?>
                        ?>
                    </select>
                </div>
                <div class="text-center">
                    <button class="btn btn-deep-purple">Valider</button>
                </div>
            </div>
        </div>
        </form>
        </fieldset>
    </div>
    <div id="affichageLot"></div>
    <a class="btn btn-primary" href="produits.php" role="button">Nouveau produit</a> 
    <?php //var_dump($_SESSION); ?>
    <script type="text/javascript">
        function recupLeRayon(ray)
        {
            document.getElementById('affichageProd').style.visibility='hidden';
            document.getElementById('form').style.visibility='hidden';
                $.ajax({
                    url : "./ajax/categorie.php",
                    type : "POST",
                    dataType : "JSON",
                    data : {libelle : ray},
                    success : function(data)
                    {
                        $("#affichageCat").html(data.categorie);
                    }
                });
        }

        function recupLaCategorie(cat)
        {
            document.getElementById('affichageProd').style.visibility='visible';
            document.getElementById('form').style.visibility='hidden';
                $.ajax({
                    url : "./ajax/produit.php",
                    type : "POST",
                    dataType : "JSON",
                    data : {libelle : cat},
                    success : function(data)
                    {
                        $("#affichageProd").html(data.produit);
                    }
                });
        }

        function affichageLot(produit)
        {

            document.getElementById('form').style.visibility='visible';
            
                $.ajax({
                url : "./ajax/produitSession.php",
                type : "POST",
                dataType : "JSON",
                data :{libelle : produit},
                success : function(data)
                {
                    $("#afficheProdSession").html(data.produitSession);
                }
                });
        }
    </script>


    <?php
        include '../bas.php';
    ?>
</body>
</html>