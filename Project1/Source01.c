#include "Header.h"

// 전처리기(preprocessor) : 컴퓨터의 처리의 있어서 중심적인 처리를 수행하는 부분을 위해 먼저 실행되는 프로그램을 의미합니다.

// #include 란 헤더 파일을 추가하는 전처리기 명령어 입니다.
// 소스 파일에 헤더 파일의 내용을 그대로 복사하는 개념

// #include 사용 방법
// #include <헤더 파일 이름>을 통해 Windows Kit 에 있는 헤어 파일을 추가합니다.
// #include "헤더 파일 이름"을 통해 프로젝트 내부에 있는 헤더 파일을 추가합니다.
// #include "헤더 파일 이름" 사용 시 Windows Kit 에 있는 헤더파일의 이름을 쓴다고
// 오류가 나지 않습니다. 없을 경우 Kit에서 검색을 한번 더 진행하는 원리

// 프로그램 코드가 실행되는 영역
// 프로젝트 단위로 작업할 경우 main은 1개 만 사용 가능

#define POINT 100
#define PIE 3.141592
// #difine 은 매크로를 만드는 기능입니다.
// 매크로는 간단하게 사용자가 상수에 대해 이름을 붙이는 것

int main()
{
#if POINT == 100
	printf("포인트가 최대치 입니다. ");

#elif POINT < 100 
	pritnf("현재 포인트는 %d 입니다. ", POINT);

#endif

	float length = 0; // float는 실수를 표현하는 데이터입니다.
	int radius = 2; // int는 정수를 표현하는 데이터입니다.

	// length를 통해 원의 길이를 표현하고자 합니다.
	
	// 원의 둘레는 2 * 원주율 * 반지름

	length = 2 * 3.141592 * radius;
	length = 2 * PIE * radius;

	// PIE가 정의되어있다면 ROUND를 정의합니다.
	// ROUND는 원의 둘레를 구하는 매크로 입니다.
#ifdef PIE
#define ROUND 2 * PIE * radius
#endif
	length = ROUND;

	printf("원의 둘레는 %.2f", length);

	// %.2f는 소수점 두자리까지 표현하는 값 
	// ,를 통해 데이터를 넣으면 그 데이터가 넘어갑니다.
	// 현재 %.2f는 length의 값을 가지게 됩니다.

	return 0;
}