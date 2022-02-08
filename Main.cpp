///coman catalin andrei
///grupa 3.1
#include<iostream>
#include<string>
#include<list>

#include "Cake.h"
#include "RecipeCake.h"
#include "CakeMaker.h"
#include "CarouselOfCakes.h"
#include "CommandPanel.h"
#include "CommandTaker.h"
using namespace std;


int main()
{

	int opt,nr;
	string name;
	CommandPanel c;
	CommandPanel p;
	CommandPanel a;
	CommandPanel b;

	do {
		cout << "                     MENIU";
		cout << endl;
		cout << "1.afisati meniul.";
		cout << endl;
		cout << "2.selectati produsul dorit.";
		cout << endl;
		cout << "3.selectati produsul si de asemenea cantitatea dorita.";
		cout << endl;
		///cout << "4.afisati produsele din carusel.";  aici functioneaza partial
		cout << endl;
		cout << " 0.iesire";
		cout << endl;
		cout << "Optiunea dumneavostra este:";
		cin >> opt;
		switch (opt)
		{
		case 0:
			break;
		case 1:
		{
		    c.showProducts();
		}
			break;
		case 2: 
		{
			cout << "introduceti numele prajiturii pe care doriti sa o adaugati in cos:";
			cin >> name;
			p.selectProduct(name);
		}
			break;
		case 3: 
		{
			cout << "Dati numele prajiturii pe care o doriti:"; 
				cin >> name;
				cout << "Dati numarul de prajituri:";
				cin >> nr;
				a.selectProduct(name, nr);
		}
			break;
		case 4: 
		{
			b.showProductsInCarousel();
		}
			break;
		default:cout << "optiunea dumneavoastra nu exista" << endl;
			break;
		}
	} while (opt != 0);

	system("pause");
	return 0;
}