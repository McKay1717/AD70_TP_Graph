1)	A) Les sommets repr�sentent les diff�rentes sessions du congr�s
B) On relie 2 sommets entre eux lorsqu�il y a une incompatibilit� entre eux
C) Une couleur repr�sente une demi-journ�e. Lorsque l�on colorie un sommet cela signifie qu�on lui affecte une demi-journ�e.
D) Il y a 4 demi-journ�es diff�rentes donc 4 couleurs possibles
E) Il a au final 12 possibilit�s (3 salles * 4 demi-journ�es)

2)	A) On rajoute tout simplement des incompatibilit�s entre les sommets et donc on mod�lise des arr�tes suppl�mentaires
B) On hi�rarchise les couleurs et on peut aussi ajouter augmenter le poids artificiellement des sessions qui doivent se d�rouler plus t�t.
Question 3 : Repr�sentation matricielle

	A	B	C	D	E	F	G	H	I	J	K
A	0	1	1	0	1	0	1	1	0	1	0
B		0	1	1	0	0	1	1	1	0	1
C			0	0	1	1	0	1	0	0	0
D				0	0	1	0	1	0	1	1
E					0	0	1	0	1	1	1
F						0	1	0	0	1	1
G							0	1	1	0	0
H								0	1	0	1
I									0	1	0
J										0	0
K											0
											

Il y a au final 30 contraintes (il suffit de compter le nombre de 1)

Question 4 : repr�sentation vectorielle

Voici une solution al�atoire

Congr�s	A	B	C	D	E	F	G	H	I	J	K
Poids	6	7	5	4	6	5	6	6	5	5	5
Salle	2	1	3	2	2	1	3	1	2	1	3
1/2 journ�e	2	1	2	4	1	3	1	2	3	4


5) 

Explication de l'utilisation du code :

Les param�tres se font via le fichier texte Graph.txt. Il faut terminer les lignes par des ','.

L'algorithme va renvoyer les couleurs de chaque sommet sous forme de num�ro.

6)

 