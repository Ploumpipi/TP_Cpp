#pragma once

class Cadre {
private:
	float ancrageX, ancrageY, largeur, longueur;
	//char motif;
	char* motif;
public:
	//Constructeurs
	//Cadre();
	Cadre(char*mot);
	//Cadre(float ancX, float ancY, float larg, float lon, char* mot);

	//Destructeur
	~Cadre();

	//Accesseurs
	float getAncrageX()const;
	float getAncrageY()const;
	float getLargeur()const;
	float getLongueur()const;
	char* getMotif()const;

	//Mutateurs
	void setAncrageX(float ancX);
	void setAncrageY(float ancY);
	void setLargeur(float larg);
	void setLongueur(float lon);
	void setMotif(char * mot);

	void surface();
	void perimetre();

	bool IsCarre();

	void rotation(float flt_rotation);
};