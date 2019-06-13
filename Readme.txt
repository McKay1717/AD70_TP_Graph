BRAHMI Nour-eddine - IUNG Nicolas - MANFREDINI Simon
1)	A) Les sommets représentent les différentes sessions du congrès
B) On relie 2 sommets entre eux lorsqu’il y a une incompatibilité entre eux
C) Une couleur représente une demi-journée. Lorsque l’on colorie un sommet cela signifie qu’on lui affecte une demi-journée.
D) Il y a 4 demi-journées différentes donc 4 couleurs possibles
E) Il a au final 12 possibilités (3 salles * 4 demi-journées)

2)	A) On rajoute tout simplement des incompatibilités entre les sommets et donc on modélise des arrêtes supplémentaires
B) On hiérarchise les couleurs et on peut aussi ajouter augmenter le poids artificiellement des sessions qui doivent se dérouler plus tôt.
Question 3 : Représentation matricielle

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

Question 4 : représentation vectorielle

Voici une solution aléatoire

Congrés	A	B	C	D	E	F	G	H	I	J	K
Poids	6	7	5	4	6	5	6	6	5	5	5
Salle	2	1	3	2	2	1	3	1	2	1	3
1/2 journée	2	1	2	4	1	3	1	2	3	4


5) 

Explication de l'utilisation du code :

Les paramètres se font via le fichier texte Graph.txt. Il faut terminer les lignes par des ','.

L'algorithme va renvoyer les couleurs de chaque sommet sous forme de numéro.

6)

 
