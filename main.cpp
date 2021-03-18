/*
	Question 1 :
	Le rôle d'un constructeur est d'initialiser l'objet quand il est créé.
	L'appel du constructeur se fait lors de la création de l'objet
	
	Question 2 :
	Le rôle d'un destructeur est de détruire les objets.
	Il est exécuter quand on le demande ou alors en fin de programme.
	Il est indispensable lorsque l'on chaine les objets avec des pointeurs.

	Question 3 :
	Le constructeur d'une classe est dans la partie "public" et il a le même nom que la classe.
	Oui il peut y en avoir plusieurs.
	Pour pouvoir initiliser différemments certaines variables, donner des types différents/en plus.

	Question 4 :
	La surdefinition de fonction ou surchage de fonction est le fait qu'on peut avoir plusieurs fonctions avec le même nom,
	mais avec des paramètres différents.

	Question 5 :
	"Public" signifie qu'on peut accéder a ce qu'il y a dedans en dehors de la classe,
	alors que le "Private" lui signifie que seul les composants de la classe peuvent accéder à ce qu'il y a dedans.
*/

#include "TP.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
#define TAILLE 10

void afficheLog(char* pt_mot);
void afficheLog(float flt_ancX, float flt_ancY, float flt_larg, float flt_lon);
void afficheLog(bool booleen);


using namespace std;

int main() {
	
	char* pt_test = new char[TAILLE];
	strcpy_s(pt_test, TAILLE, "*");

	Cadre test(pt_test);
	afficheLog(test.getAncrageX(), test.getAncrageY(), test.getLargeur(), test.getLongueur());
	afficheLog(test.getMotif());


	char* pt_motif = new char[TAILLE];
	strcpy_s(pt_motif, TAILLE, "rectangle");

	/*Cadre rectangle(4.0, 4.0, 5.0, 5.0, pt_motif);
	afficheLog(rectangle.getAncrageX(), rectangle.getAncrageY(), rectangle.getLargeur(), rectangle.getLongueur());
	afficheLog(pt_motif);
	rectangle.surface();
	rectangle.perimetre();

	float mem_ancX;
	cout << "Veuillez rentrer une position d'ancrage X " << endl;
	cin >> mem_ancX;
	rectangle.setAncrageX(mem_ancX);

	float mem_ancY;
	cout << "Veuillez rentrer une position d'ancrage Y " << endl;
	cin >> mem_ancY;
	rectangle.setAncrageY(mem_ancY);

	float mem_larg;
	cout << "Veuillez la nouvelle largeur : " << endl;
	cin >> mem_larg;
	rectangle.setLargeur(mem_larg);

	float mem_long;
	cout << "Veuillez la nouvelle longueur : " << endl;
	cin >> mem_long;
	rectangle.setLongueur(mem_long);

	cout << "Veuillez entrer le nouveau motif : " << endl;
	cin >> pt_motif;

	afficheLog(rectangle.getAncrageX(), rectangle.getAncrageY(), rectangle.getLargeur(), rectangle.getLongueur());
	afficheLog(pt_motif);
	if (rectangle.IsCarre() == 1) {
		cout << "C'est un carre" << endl;
	}
	else {
		cout << "C'est un rectangle" << endl;
	}
	afficheLog(rectangle.IsCarre());*/

	test.rotation(6);


	return 0;
}

void afficheLog(char* pt_mot) {
	cout << "Motif : " << pt_mot << endl;
}

void afficheLog(float flt_ancX, float flt_ancY, float flt_larg, float flt_lon) {
	cout << "Position X : " << flt_ancX << " Position Y : " << flt_ancY << " Largeur : " << flt_larg << " Longueur : " << flt_lon << endl;
}

void afficheLog(bool booleen) {
	cout << booleen << endl;
}