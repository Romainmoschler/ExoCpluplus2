#include "Point.h"
#include <math.h>
#include <iostream>
using namespace std;




Point::Point(float flt_valX, float flt_valY)
{
	this->flt_X = flt_valX; 
	this->flt_Y = flt_valY;
	//statn_compteur++;

}

Point::Point()
{
	this->flt_X = 0;
	this->flt_Y = 0;
	//statn_compteur++;
}

void Point::deplace(float flt_valX, float flt_valY)
{
	this->flt_X = this->flt_X + flt_valX;
	this->flt_Y = this->flt_Y + flt_valY;
}

float Point::getOrdonnee()
{
	return this->flt_X;
}

float Point::getAbscisse()
{
	return this->flt_Y;
}

/*
void Point::nombreCompt()
{
	cout << "nombre de point cree dans le programme: " << statn_compteur << endl;
}
*/

