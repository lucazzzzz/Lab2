# Laboratoire 2 - Module Python

## Créer Projet VisualStudio

Pour commencer, il faut tout d'abord créer un projet VisualStudio en C++ dans le dossier de notre choix:

![Screenshot #1](https://github.com/lucazzzzz/Lab2/blob/master/Images/CreerProjetVS.JPG)

Ensuite, il faut ajouter tous les fichiers d'en-tête et tous les fichiers sources au projet:

![Screenshot #2](https://github.com/lucazzzzz/Lab2/blob/master/Images/AjouterFichiersdeGit.JPG)

Finalement, il faut régler correctement les propriétés du projet pour que le code fonctionne! Voici 3 images qui illustrent toutes les librairies à ajouter et toutes les configurations à changer sur VisualStudio (ne pas oublier de changer les options de configuration pour Release et les options de plateforme pour x64):

![Screenshot #3](https://github.com/lucazzzzz/Lab2/blob/master/Images/ProprietesProjetLib.JPG)

![Screenshot #4](https://github.com/lucazzzzz/Lab2/blob/master/Images/LibrairiePython.JPG)

![Screenshot #5](https://github.com/lucazzzzz/Lab2/blob/master/Images/LibrairieDirectShow.JPG)

## Ajouter la vidéo sur le C:/

Il ne faut pas oublier d'ajouter la vidéo à manipuler au bon endroit, pour notre code se sera le disque C:/

![Screenshot #6](https://github.com/lucazzzzz/Lab2/blob/master/Images/ExampleAVI.JPG)

## Configuration Python

Il ne reste que le fichier videoplayer.py à ajouter au bon endroit, se sera dans le même dossier que le fichier myModule.pyd. Il faut générer la solution sur VisualStudio avant de compléter cette étape. Ne pas oublier d'ouvrir la console de commande dans le même dossier que le fichier videoplayer.py:

![Screenshot #7](https://github.com/lucazzzzz/Lab2/blob/master/Images/AjouterPYmyModule.JPG)

![Screenshot #8](https://github.com/lucazzzzz/Lab2/blob/master/Images/OuvrirPowerShellVideoplayerPY.JPG)

Maintenant il faut créer l'environnement virtuel pour exécuter le fichier videoplayer.py et installer la librairie readchar pour que le code fonctionne. Voici une image de toutes les commandes à effectuer sur la console de commande:

![Screenshot #9](https://github.com/lucazzzzz/Lab2/blob/master/Images/PipInstall.JPG)

La dernière commande "python videoplayer.py" va exécuter le code et la vidéo vas démarrer simultanément. Afin de contrôler la vidéo avec les commandes "p pour pause/play, r pour retour arrière, a pour avance rapide et q pour quitter", il faut taper ces commandes sur la console de commande sinon les touches ne seront pas enregistrées.
