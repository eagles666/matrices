#ifndef MATRICES_H
#define MATRICES_H

struct Terme {
	int ligne;
	int colonne;
};

class Matrice {
	private:
		int nbrLignes;
		int nbrColonnes;
		int tableau[12][12];
		void initialiser();
		
	public:
		Matrice();
		Matrice(int, int);
		void setValeur(Terme, int);
		int getNbrLignes();
		int getNbrColonnes();
		void afficher();
};

#endif // MATRICES_H
