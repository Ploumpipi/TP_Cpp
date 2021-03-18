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
