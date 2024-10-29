#include "Keyboard.h"

Keyboard::Keyboard()
{
	cout << "Create Keybord" << endl;
}

void Keyboard::OnEnter()
{
	cout << "Keyboard Enter" << endl;
}

Keyboard::~Keyboard()
{
	cout << "Release Keyboard" << endl;
}
