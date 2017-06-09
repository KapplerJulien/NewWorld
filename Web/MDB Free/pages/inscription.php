<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta http-equiv="x-ua-compatible" content="ie=edge">
    <!-- Font Awesome -->
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.6.0/css/font-awesome.min.css">
    <!-- Bootstrap core CSS -->
    <link href="../css/bootstrap.min.css" rel="stylesheet">
    <!-- Material Design Bootstrap -->
    <link href="../css/mdb.min.css" rel="stylesheet">
    <!-- Your custom styles (optional) -->
    <link href="../css/style.css" rel="stylesheet">
    <script language="javascript">
            function verifForm()
            {
                var nomOk=document.getElementById("nom");
                var prenomOk=document.getElementById("prenom");
                var pseudoOk=document.getElementById("pseudo");
                var emailOk=document.getElementById("email");
                var telOk=document.getElementById("telephone");

                if(verifNom(nomOk) && verifPrenom(prenomOk) && verifPseudo(pseudoOk) && verifMail(emailOk) && verifTel(telOk))
                {
                    return true;            
                }
                else                    
                {
                    alert("Tout les champs ne sont pas bien remplie");
                    return false;
                }
            }

            function surligne(champ, erreur)
            {
                if(erreur)
                    champ.style.backgroundColor = "#fba";
                else
                    champ.style.backgroundColor = "";
            }
                function verifTel(numTel)
                {
                    var regex =/^[0-9]{10,10}$/;
                    if(!regex.test(numTel.value))
                    {
                        surligne(numTel, true);
                        return false;

                    }
                    else
                    {
                        surligne(numTel, false);
                        return true;

                    }
                }
    </script>
</head>
<body>
<?php include "haut.php"; ?>
    <form method="POST"  action="validationInscrip.php" onsubmit="return verifForm(this)">
        <div class="col-lg-6 offset-lg-3">
            <!--Naked Form-->
            <div class="card-block">
                <!--Header-->
                <div class="text-center">
                    <h3><i class="fa fa-lock"></i> Inscription:</h3>
                    <hr class="mt-2 mb-2">
                </div>

                <!--Body-->
                 <div class="md-form">
                    <i class="fa fa-user prefix"></i>
                    <input placeholder="login" type="text" id="pseudo" name="pseudo" class="form-control" required maxlength="15">
                </div>
                <div class="md-form">
                    <i class="fa fa-user prefix"></i>
                    <input placeholder="Nom" type="text" id="nom" name="nom" class="form-control" required maxlength="30">
                </div>
                <div class="md-form">
                    <i class="fa fa-user prefix"></i>
                    <input placeholder="Prenom" type="text" id="prenom" name="prenom" class="form-control" required maxlength="30">
                </div>
                <div class="md-form">
                    <i class="fa fa-envelope prefix"></i>
                    <input placeholder="Email" type="email" id="email" name="email" class="form-control" required >
                </div>
                <div class="md-form">
                    <i class="fa fa-mobile-phone prefix"></i>
                    <input placeholder="Telephone" type="telephone" id="telephone" name="telephone" class="form-control" required onchange="verifTel(this);" maxlength="10">
                </div>
                <div class="md-form">
                    <h4>Votre type : </h4><br>
                    <input type="radio" name="typeUtilisateur" value="Producteur" checked>Producteur <br>
                    <input type="radio" name="typeUtilisateur" value="Client">Client <br>
                    <input type="radio" name="typeUtilisateur" value="Point de vente"> Point de vente 
                </div>
                <div class="md-form">
                    <h4>Question secrète : </h4><br>
                    <select name="questionSecrete">
                        <option> blabla </option>
                        <?php
                        echo "1";
                            $result = recupQuestion();
                            while($data = mysql_fetch_assoc($result)){
                                echo "<option>".$data["libelleQuestion"]."</option>";
                            }
                        ?>
                    </select>
                </div>

                <div class="text-center">
                    <button class="btn btn-deep-purple">Inscription</button>
                </div>
            </div>
        </div>
    </form>
</body>