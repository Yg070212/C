#include "Pencil.h"
#include <iostream>

Pencil::Pencil()
{
	thickness = 0.5;
}

void Pencil::Draw()
{
	cout << "±½±â : " << thickness << endl;
	cout << "Pencil Draw" << endl;
}

Pencil::~Pencil()
{
	cout << "Release Pencil" << endl;
}
