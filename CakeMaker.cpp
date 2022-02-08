#include"CakeMaker.h"
#include"Cake.h"
#include<Windows.h>
#include<iostream>

using namespace std;

CakeMaker::CakeMaker() {};

Cake CakeMaker::takeCommand(RecipeCake recipe)
{
	string name = recipe.getName();
	int time = recipe.getTime();
	Cake c = Cake(name);

	cout << "Cake maker-ul a primit comanda:" << endl;                           
	Sleep(5000);
	cout << "Prajitura a fost pregatita!!!" << endl;
	return c;
}




