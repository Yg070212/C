#include <iostream> 
#include "Vultuer.h"

using namespace std;

int main()
{
#pragma region 가상 함수
	// 상속하는 클래스 내에서 같은 형태의 함수로
	// 재정의될 수도 있는 함수입니다.

	Terran * terran = new Vultuer;

	cout << "Vulter의 크기 : " << sizeof(Vultuer) << endl;

	terran->Move();

	// 가상 함수 실행 시간에 상위 클래스에 대한 참조로
	// 하위 클래스에 재정의된 함수를 호출할 수 있습니다.
#pragma endregion


	return 0;
}