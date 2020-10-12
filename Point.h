#pragma once
class Point
{
private:
	float flt_X;
	float flt_Y;
	//static int statn_compteur;

public:
	//constructeur
	Point(float flt_valX, float flt_valY);
	Point();

	//donner des coordoner a ajouter au point pour le deplacer
	void deplace(float flt_valX, float flt_valY);

	float getOrdonnee();

	float getAbscisse();

	//void nombreCompt();
};

