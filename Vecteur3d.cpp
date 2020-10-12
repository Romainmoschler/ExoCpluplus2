#include "Vecteur3d.h"
#include <math.h>
#include <iostream>

using namespace std;


Vecteur3d::Vecteur3d(float flt_val1, float flt_val2, float flt_val3)
//But:
//Entree:
//Sortie:
{
	this->mflt_X = flt_val1; this->mflt_Y = flt_val2; this->mflt_Z = flt_val3;
}

Vecteur3d::Vecteur3d():mflt_X(0), mflt_Y(0), mflt_Z(0)
//But:
//Entree:
//Sortie:
{
}

bool Vecteur3d::Coincideval(Vecteur3d vect_val1)
//But:
//Entree:
//Sortie:
{
	if (this->mflt_X == vect_val1.mflt_X && this->mflt_Y == vect_val1.mflt_Y && this->mflt_Z == vect_val1.mflt_Z)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Vecteur3d::CoincideReff(Vecteur3d &vect_val1)
//But:
//Entree:
//Sortie:
{
	if (this->mflt_X == vect_val1.mflt_X && this->mflt_Y == vect_val1.mflt_Y && this->mflt_Z == vect_val1.mflt_Z)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Vecteur3d::CoincideAdd(Vecteur3d * vect_val1)
//But:
//Entree:
//Sortie:
{
	if (this->mflt_X == vect_val1->mflt_X && this->mflt_Y == vect_val1->mflt_Y && this->mflt_Z == vect_val1->mflt_Z)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Vecteur3d Vecteur3d::normaxVal(Vecteur3d vect_val1)
//But:
//Entree:
//Sortie:
{
	float flt_norm1 = sqrt(pow(this->mflt_X, 2) + pow(this->mflt_Y, 2) + pow(this->mflt_Z, 2));
	float flt_norm2 = sqrt(pow(vect_val1.mflt_X, 2) + pow(vect_val1.mflt_Y, 2) + pow(vect_val1.mflt_Z, 2));
	if (flt_norm1 >= flt_norm2)
	{
		cout << "le Premier vecteur possede la norme la plus grande" << endl;
		return *this;

	}else
	{
		cout << "le Second vecteur possede la norme la plus grande" << endl;
		return vect_val1;
	}
}

Vecteur3d& Vecteur3d::normaxReff(Vecteur3d & vect_val1)
//But:
//Entree:
//Sortie:
{
	float flt_norm1 = sqrt(pow(this->mflt_X, 2) + pow(this->mflt_Y, 2) + pow(this->mflt_Z, 2));
	float flt_norm2 = sqrt(pow(vect_val1.mflt_X, 2) + pow(vect_val1.mflt_Y, 2) + pow(vect_val1.mflt_Z, 2));
	if (flt_norm1 >= flt_norm2)
	{
		cout << "le Premier vecteur possede la norme la plus grande" << endl;
		return *this;

	}
	else
	{
		cout << "le Second vecteur possede la norme la plus grande" << endl;
		return vect_val1;
	}
}

 Vecteur3d* Vecteur3d::normaxAdd(Vecteur3d * vect_val1)
	 //But:
//Entree:
//Sortie:
{
	float flt_norm1 = sqrt(pow(this->mflt_X, 2) + pow(this->mflt_Y, 2) + pow(this->mflt_Z, 2));
	float flt_norm2 = sqrt(pow(vect_val1->mflt_X, 2) + pow(vect_val1->mflt_Y, 2) + pow(vect_val1->mflt_Z, 2));
	if (flt_norm1 >= flt_norm2)
	{
		cout << "le Premier vecteur possede la norme la plus grande" << endl;
		return this;

	}
	else
	{
		cout << "le Second vecteur possede la norme la plus grande" << endl;
		return vect_val1;
	}
}

 void Vecteur3d::afficheVecteur()
//But:
//Entree:
//Sortie:
 {
	 cout << "X: " << this->mflt_X << "   Y: " << this->mflt_Y << "   Z: " << this->mflt_Z << endl;
 }

 void Vecteur3d::SommeVecteur(Vecteur3d vect_val1)
//But:
//Entree:
//Sortie:
 {
	 ;
	 this->mflt_X = this->mflt_X + vect_val1.mflt_X;
	 this->mflt_Y = this->mflt_Y + vect_val1.mflt_Y;
	 this->mflt_Z = this->mflt_Z + vect_val1.mflt_Z;

	
 }

 float Vecteur3d::ProduitScalaire(Vecteur3d vect_val1)
 {
	 float flt_false;

	 flt_false = this->mflt_X*vect_val1.mflt_X + this->mflt_Y*vect_val1.mflt_Y + this->mflt_Z*vect_val1.mflt_Z;

	 return flt_false;
 }
