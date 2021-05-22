#include <iostream>
#include "Matrice.h"

Matrice::Matrice()
{
	std::cout << "Nombre de lignes de la matrice ? ";
	std::cin >> nbrLignes;
	std::cout << "Nombre de colonnes de la matrice ? ";
	std::cin >> nbrColonnes;
	initialiser();
}
Matrice::Matrice(int lignes, int colonnes)
{
	nbrLignes = lignes;
	nbrColonnes = colonnes;
	initialiser();
}

void Matrice::setValeur(Terme terme, int valeur) 
{
	tableau[terme.ligne][terme.colonne] = valeur;
}

int Matrice::getNbrLignes()
{
	return nbrLignes;
}

int Matrice::getNbrColonnes()
{
	return nbrColonnes;
}

void Matrice::initialiser() 
{
	int valeurTerme = 0;
	for ( int i = 0; i < getNbrLignes(); i++) 
	{
		for ( int j = 0; j < getNbrColonnes(); j++) 
		{
			std::cout <<"terme (ligne : " << i + 1 << " colonne : " << j + 1 << ") : ";
			std::cin >> valeurTerme;
			setValeur({ i, j }, valeurTerme);
		}
	}
}

void Matrice::afficher() 
{
	for ( int i = 0; i < getNbrLignes(); i++) 
	{
		for ( int j = 0; j < getNbrColonnes(); j++) 
		{
			std::cout << tableau[i][j] << " "; 
		}
		std::cout << std::endl;
	}
}
