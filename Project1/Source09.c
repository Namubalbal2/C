//#include "Header.h"
//
//// 첫날에는 1원을 가지고 있습니다.
//// 이후 30일 동안 전날보다 2배의 금액을 받게됩니다.
//// 30일이 되었을 때 총 금액이 얼마나 나오는지 출력하시오.
//
//int main()
//{
//	//int money = 1;
//	//int total = 0;
//	//for (int day = 1; day <= 30; day++)
//	//{
//	//	total = total + money;
//	//	money = total * 2;
//	//	printf("%d일차 : %d \n", day, total);
//	//}
//	//printf("%d ", total);
//
//	// 입력한 수자가 소수인지를 판단하는 프로그램을 작성
//	// 조건) int is_prime 이라는 변수가 제공됩니다.
//	//		이 is_prime 이 1일 경우 소수, 0일 경우 소수가 아니라고 출력해줌.
//	// 소수를 계산하기위한 for 문 설계
//	// 소수의 조건 : n이 1과 자기 자신을 약수로 가지는 수
//
//	int is_prime, n;
//	printf("숫자를 입력하세요 : ");
//	scanf("%d", &n);
//
//	is_prime = 1;
//	// 문제 풀이의 핵심 is_prime 의 값이 무엇이냐
//	// is_prime 을 1로 초반 값을 설정했다면 아래의 for 문에서는 is_prime 이 0이 될 수 있는 조건을 설계
//	// is_prime 을 0으로 초반 값을 설정했다면 아래의 for 문에서는 is_prime 이 1이 될 수 있는 조건을 설계
//	for (int i = 1; i <= n; i++)
//	{
//		//1과 자기 자신이 아닌 경우 , 1로 나누어 떨어지게 된다면 그건 소수가 아닐 것이다.
//		if (i == 1 || i == n)
//		{
//			continue;
//		}
//		else if(n % i == 0)
//		{
//			is_prime = 0;
//			break;
//		}
//	}
//	if (is_prime == 1)
//	{
//		printf("%d 는 소수입니다. \n", n);
//	}
//	else
//	{
//		printf("%d는 소수가 아닙니다. \n", n);
//	}
//	return 0;
//
//}