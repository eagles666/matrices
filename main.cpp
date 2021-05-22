/*
 * -------------------------------------
 * author : eagles666
 * date de création : 22/05/2021
 * date de modification : 
 * -------------------------------------
 * main.cpp
 * -------------------------------------
 * Code principal du programme.
 * -------------------------------------
 */


#include <iostream>
#include "Matrice.h"

int main(int argc, char *argv[]) 
{
	Matrice matrice(2,3);
	matrice.afficher();
	Matrice matrice2;
	matrice2.afficher();
	return 0;
}
