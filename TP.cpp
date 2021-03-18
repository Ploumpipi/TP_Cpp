#include "TP.h"
#include <iostream>
#define TAILLE 10
#define PI 3.14

using namespace std;

/*Cadre::Cadre()
{
	this->ancrageX = 10;
	this->ancrageY = 5;
	this->largeur = 5;
	this->longueur = largeur*2;
	this->motif = new char[TAILLE];
	strcpy_s(this->motif, TAILLE, motif);
}*/

Cadre::Cadre(char* mot)
{
	this->ancrageX = 10;
	this->ancrageY = 5;
	this->largeur = 5;
	this->longueur = largeur * 2;
	this->motif = new char[TAILLE];
	strcpy_s(this->motif, TAILLE, mot);
}

/*Cadre::Cadre(float ancX, float ancY, float larg, float lon, char* mot)
{
	this->ancrageX = ancX;
	this->ancrageY = ancY;
	this->largeur = larg;
	this->longueur = lon;
	this->motif = new char[TAILLE];
	strcpy_s(this->motif, TAILLE, mot);
}*/

Cadre::~Cadre()
{
	std::cout << "Destructeur" << std::endl;
	//delete[];
}

float Cadre::getAncrageX() const
{
	return ancrageX;
}

float Cadre::getAncrageY() const
{
	return ancrageY;
}

float Cadre::getLargeur() const
{
	return largeur;
}

float Cadre::getLongueur() const
{
	return longueur;
}

char* Cadre::getMotif() const
{
	return motif;
}

void Cadre::setAncrageX(float ancX)
{
	this->ancrageX = ancX;
}

void Cadre::setAncrageY(float ancY)
{
	this->ancrageY = ancY;
}

void Cadre::setLargeur(float larg)
{
	this->largeur = larg;
}

void Cadre::setLongueur(float lon)
{
	this->longueur = lon;
}

void Cadre::setMotif(char* mot)
{
	strcpy_s(this->motif, TAILLE, mot);
}

void Cadre::surface()
{
	float surface;
	surface = (largeur * longueur);
	cout << "La surface fait : " << surface << endl;
}

void Cadre::perimetre()
{
	float perimetre;
	perimetre = (longueur + largeur) * 2;
	cout << "Le perimetre fait : " << perimetre << endl;
}

bool Cadre::IsCarre()
{
	if (longueur==largeur) {
		return true;
	}
	else
	{
		return false;
	}
	
}

void Cadre::rotation(float flt_rotation)
{
	ancrageX = ancrageX * cos(flt_rotation * (PI / 180)) - ancrageY * sin(flt_rotation * (PI / 180));
	ancrageY = ancrageX * sin(flt_rotation * (PI / 180)) + ancrageY * cos(flt_rotation * (PI / 180));
	std::cout << ancrageX << "  " << ancrageY << std::endl;
}
