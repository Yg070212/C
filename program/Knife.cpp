#include "Knife.h"

Knife::Knife()
{
	attack = 10;
	intersection = 1;
}

void Knife::Attack()
{
	cout << "Knife Attack" << endl;
	cout << "Knife 공격력 : 10" << endl;
	cout << "Knife 사거리 : 1" << endl;
}
