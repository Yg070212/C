#include "Brush.h"
#include <iostream>

Brush::Brush()
{
	thickness = 1.0f;
}

void Brush::Draw()
{
	cout << "���� : " << thickness << endl;
	cout << "Brush Draw" << endl;
}

Brush::~Brush()
{
	cout << "Release Brush" << endl;
}
