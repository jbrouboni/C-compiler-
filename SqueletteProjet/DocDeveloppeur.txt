Organisation des dossiers

Notre projet se compose de deux importants dossier. Le premier contient le code de notre compilateur
et le deuxième est un dossier contenant les différents jeux de tests et le code permettant de lancer
ces derniers.


Compilation de notre compilateur

Pour compiler notre programme, nous utilisons un makefile. Deux commandes distinctes existent dans ce
dernier, la première étant make permettant de compiler et d'obtenir un exécutable. La deuxième, quant
à elle, est make clean permettant de supprimer tous les output des tests effectués et les fichiers
générés par la compilation de notre programme.
Il suffit donc de se placer dans le dossier contenant le code source de notre compiler (compiler), 
d'ouvrir un terminal et de lancer la commande make.


Jeux de tests

Afin de vérifier le bon foncitonnement de notre compilateur, nous avons utilisé différents jeux de 
tests lors des différentes itérations (init et final). 
Pour lancer ces jeux de tests, il suffit d'ouvrir un terminal dans le dossier tests et de lancer 
la commande suivante :
python3 pld-test.py ./dossierFichiersATester


Script pour compiler et lancer les tests sur les machines du depart

Afin de faciliter la compilation et l'exécution des jeux de tests, nous avons mis à dispotion un 
script permettant de compilet de lancer le jeu de tests final. Ce script est situé à la racine du 
projet dans le dossier SqueletteProjet et se nomme script.sh. 


Diagramme de classe