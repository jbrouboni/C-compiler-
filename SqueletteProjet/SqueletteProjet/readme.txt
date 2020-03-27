#Dossier Compiler

Il contient tout le code de notre compilateur, un makefile pour le compiler, des scripts
permettant de le compiler dans divers environnements ainsi que les fichiers antlr4 générés
(dossier compiler/antlr4). 
 
#Dossier Tests

Il contient tous les fichiers afin de tester notre compilateur. Pour cela, nous disposons de fichiers 
en c pour tester notre programme situés dans le dossier tests/tests. Nous avons deux jeux de tests un
pour la version a mi-parcours et un pour la version finale. Un test correspond à comparer notre 
compilation à celle d'un compilateur gcc classique. Pour chaque test, nous produisons un dossier
dans tests/pld-test-output contenant les informations sur le test en question. 


#Informations diverses

Nous n'utilisons pas d'AST pour le moment. Le code assembleur est généré par la classe visiteur.


