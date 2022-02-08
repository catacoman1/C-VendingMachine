#include "RecipeCake.h"
#include<iostream>

RecipeCake::RecipeCake() {};

RecipeCake::RecipeCake(string name, int time)
{
	this->name = name;
	this->time = time;
}

string RecipeCake::getName()
{
	return this->name;
}

int RecipeCake::getTime()
{
	return this->time;
}
void RecipeCake::afisare()
{
	cout << this->name << " " << this->time << endl;
}
