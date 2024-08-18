#include "Header.h"

// 연습문제 2) 다음 조건의 코드를 작성하세요.
// 화면에는 메뉴와 가격이 표시되어있습니다. (메뉴는 자유롭게 작성)
// 사용자는 메뉴를 보고 그 메뉴의 번호를 입력합니다.
// 사용자가 그 메뉴를 구매할 가격을 보유하고 있을 경우 그 메뉴를 구입할 수 있습니다.
// 없는 경우에는 잔액이 부족하다는 메세지가 출력됩니다.


int main()
{
	int menu1 = 1000;
	int menu2 = 2000;
	int menu3 = 3000;

	printf("1. A : %d \n", menu1);
	printf("2. B : %d \n", menu2);
	printf("3. C : %d \n", menu3);

	int menu_select;
	printf("메뉴의 번호를 입력해주세요 >> ");
	scanf("%d", &menu_select);

	int money = 2000;
	int cost = 0;

	if (menu_select == 1)
	{
		cost = menu1;
	}
	else if (menu_select == 2)
	{
		cost = menu2;
	}
	else
	{
		cost = menu3;
	}
	if (money >= cost)
	{
		money -= cost;
		printf("물건을 구매했습니다.");
	}
	else
	{
		printf("잔액이 부족합니다.");
	}

	return 0;
}