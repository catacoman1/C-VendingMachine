#pragma once
#include"Cake.h"
#include"RecipeCake.h"

class CakeMaker :public Cake
{
public:
	CakeMaker();
   
    /// aceasta nu functioneaza cum trebuie
    Cake takeCommand(RecipeCake);
};
