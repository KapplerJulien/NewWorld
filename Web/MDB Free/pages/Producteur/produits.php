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
        <fieldset id="form" style='visibility:hidden'>
            <form method="POST"  action="validationAddProduit.php">
                <div class="card">
                    <div class="card-block">
                <!--Header-->
                        <div class="text-center">
                            <h3><i class="fa fa-lock"></i> Ajouter un type de produit:</h3>
                            <hr class="mt-2 mb-2">
                        </div>
                        <div id="afficheCatSession"></div>
                        <div class="md-form">
                            <input placeholder="Nom" type="text" id="nom" name="nom" class="form-control" required maxlength="100" >
                        </div>
                        <div class="md-form">
                            Description
                            <textarea type="text" id="description" name="description" class="md-textarea" required></textarea>
                        </div>
                        <div class="text-center">
                            <button class="btn btn-deep-purple">Valider</button>
                        </div>
                    </div>
                </div>
            </form>
        </fieldset>
    </div>
    <script type="text/javascript">
        function recupLeRayon(ray)
        {
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
            document.getElementById('form').style.visibility='visible';
                $.ajax({
                    url : "./ajax/catSession.php",
                    type : "POST",
                    dataType : "JSON",
                    data : {libelle : cat},
                    success : function(data)
                    {
                        $("#afficheCatSession").html(data.catSession);
                    }
                });
        }
    </script>
    	
	<?php
		include '../bas.php';
	?>
</body>
</html>