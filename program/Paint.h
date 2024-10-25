#pragma once

using namespace std;

class Paint
{
protected:
	float thickness;

public:

	virtual void Draw() = 0;
	virtual ~Paint();
};

