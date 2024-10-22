#include "Hammer.h"

Hammer::Hammer()
{
	attack = 15;
	intersection = 1;
}

void Hammer::Attack()
{
	cout << "Hammer Attack" << endl;
	cout << "Hammer 공격력 : 15" << endl;
	cout << "Hammer 사거리 : 1" << endl;
}
