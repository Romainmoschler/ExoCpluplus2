#include "Vecteur3d.h"
#include "Point.h"
#include <iostream>
using namespace std;

int main()
{
	return 0;

	Vecteur3d vct_pos1;
	Vecteur3d vct_pos2(10,6,7);

	//Exercice 70

	if (vct_pos1.Coincideval(vct_pos2) == true)
	{
		cout << "Les deux points coincide" << endl;
	}
	else
	{
		cout << "ne Coincide pas" << endl;
	}

	if (vct_pos1.CoincideAdd(&vct_pos2) == true)
	{
		cout << "Les deux points coincide" << endl;
	}
	else
	{
		cout << "ne Coincide pas" << endl;
	}
	if (vct_pos1.CoincideReff(vct_pos2) == true)
	{
		cout << "Les deux points coincide" << endl;
	}
	else
	{
		cout << "ne Coincide pas" << endl;
	}

	//End Exercice 70

	cout << endl << "tes des fonction de l'exercice 71" << endl;

	//Exercice 71

	vct_pos1.normaxVal(vct_pos2);

	vct_pos1.normaxAdd(&vct_pos2);
	
	vct_pos2.normaxReff(vct_pos1);
	//End Exercice 71

	cout << endl << "On commence l'exercice 72" << endl;
	
	//Exercice 72

	Vecteur3d vct_somm2vect(15.0,2.0,10.0);
	vct_somm2vect.SommeVecteur(vct_pos1);

	cout << "la somme de vct_pos1 et vct_somm2vect = "; vct_somm2vect.afficheVecteur();

	Vecteur3d vct_produitscal(9.0, 12.0, 7.0);
	vct_produitscal.ProduitScalaire(vct_pos1);

	cout << "le produit scalaire de vct_porduitscal et vc_pos1 = "; vct_produitscal.afficheVecteur();
	//End Exercice 72

	cout << endl << "On commence l'exercice Exercice 73" << endl;
	//Exercice 73

	//End Exercice 73
	return 0;
}
