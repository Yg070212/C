#include "Weapon.h"

void Weapon::Attack()
{
	cout << "Weapon Attack" << endl;
}
// 컴파일 속도가 빨리짐, 보기 편안함.
// 처음 사용 할 땐 main함수에서 사용하는게 더 편하다 느끼지만
// 적응하고 난 후엔 헤더파일을 생성하여 사용하는것이
// 컴파일 속도 향상 및 시각적 불편함을 줄여줌