#pragma once
class Vecteur3d

{
private:

	float mflt_X; float mflt_Y; float mflt_Z;

public:
	//Exercice 69
	Vecteur3d(float n_val1,float n_val2,float n_val3);

	Vecteur3d();

	//Exercice 70
	bool Coincideval(Vecteur3d vect_val1);

	bool CoincideReff(Vecteur3d &vect_val1);

	bool CoincideAdd(Vecteur3d* vect_val1);

	//Exercice 71
	Vecteur3d normaxVal(Vecteur3d vect_val1);

	Vecteur3d& normaxReff(Vecteur3d & vect_val1);

	Vecteur3d* normaxAdd(Vecteur3d * vect_val1);

	//Exercice 72

	void afficheVecteur();

	void SommeVecteur(Vecteur3d vect_val1);

	float ProduitScalaire(Vecteur3d vect_val1);
};

