///coman catalin andrei
///grupa 3.1
#include<iostream>
#include "Cake.h"
using namespace std;
Cake::Cake() {};

Cake::Cake(string nume)
{
	this->nume = nume;
}

string Cake::getName()
{
	return this->nume;
}