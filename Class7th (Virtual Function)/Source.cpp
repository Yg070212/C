#include <iostream>
#include <iostream>
#include "../program/Vultuer.h"
#include "../program/SiegeTank.h"
#include "../program/Goliath.h"

using namespace std;

int main()
{
#pragma region 가상 함수
	// 상속하는 클래스 내에서 같은 형태의 함수로
	// 재정의될 수도 있는 함수입니다.

	// Terran * terran = new Vultuer;
	// 
	// cout << "Vulter의 크기 : " << sizeof(Vultuer) << endl;
	// 
	// terran->Move();

	// 가상 함수 실행 시간에 상위 클래스에 대한 참조로
	// 하위 클래스에 재정의된 함수를 호출할 수 있습니다.
#pragma endregion

#pragma region Factory
	// 1. 입력을 받습니다.
	// int input = 0;
	// int count = 0;
	// 
	// Terran* pointer = nullptr;
	// 
	// while (count < 5)
	// {
	// 	cout << "Create Unit Number : ";
	// 	cin >> input;
	// 
	// 	cout << endl;
	// 
	// 	switch (input)
	// 	{
	// 	case 1: pointer = new Vultuer;
	// 		break;
	// 	case 2: pointer = new SiegeTank;
	// 		break;
	// 	case 3:pointer = new Goliath;
	// 		break;
	// 	default: continue;
	// 		break;
	// 	}
	// 
	// 	count++;
	// 
	// 	pointer->Move();
	// }


	// 2. 생성 가능한 횟수는 5번이며,
	//    1번을 선택하면 Vulture가 생성됩니다.
	//    2번을 선택하면 SiegeTank가 생성됩니다.
	//    3번을 선택하면 Goliath이 생성됩니다.

	//    다른 번호를 입력하면 다시 입력받을 수 있도록 합니다.

	// 3. 생성된 유닛은 Move()가 호출되어서 각각의 Move()가
	//    호출될 수 있도록 합니다.

#pragma endregion


	return 0;
}
{
    std::cout << "Hello World!\n";
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
