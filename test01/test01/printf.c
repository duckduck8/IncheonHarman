#include <stdio.h>

main1()
{

	////변수 선언
	//char vchar;
	//int vint;
	//long vlong;
	//float vfloat;
	//double vdouble;

	////변수 초기화
	//vchar = 'f';
	//vint = 10;
	//vlong = 4000000000;
	//vfloat = 3.14159265;
	//vdouble = 314159265.123456789;


	//변수의 선언과 초기화
	char vchar = 'f';
	int vint = 10;
	long vlong = 4000000000;
	float vfloat = 3.14159265;
	double vdouble = 314159265.123456789;



	//안녕하세요
	//printf("\n\n\n\n\n안녕하세요\n\n\n\n\n\n");
	//printf("정수 출력 테스트: [%12d]\n", 10); //4byte
	//printf("실수 출력 테스트: %4.2f\n", 3.141592651234); //4byte, 조건없으면 소수점 6자리까지 찍힘
	//printf("긴 정수 출력 테스트: %d\n", 10); //4byte
	//printf("긴 실수 출력 테스트: [%12.8f]\n", 3.141592651234); //8byte
	//printf("지수 출력 테스트: [%12e]\n", 1234567890); //4byte

	//printf("8진수 출력 테스트: [12%o]\n", 1234567890); //4byte
	//printf("16진수 출력 테스트: [%12x]\n", 1234567890); //4byte
	//printf("문자 출력 테스트: [%c]\n", 50); //1byte
	//printf("문자열 출력 테스트: [%s]\n", "안녕"); //4byte

	
	
	
	printf("\n\n\n\n\n안녕하세요\n\n\n\n\n\n");
	printf("정수 출력 테스트: [%12d]\n", vint); //4byte
	printf("긴 실수 출력 테스트: [%12.8f]\n", vfloat); //8byte
	printf("지수 출력 테스트: [%12e]\n", vdouble); //4byte

	printf("8진수 출력 테스트: [%12o]\n", vint); //4byte
	printf("16진수 출력 테스트: [%12x]\n", vint); //4byte
	printf("문자 출력 테스트: [%c]\n", vchar); //1byte
	printf("문자 연산 테스트: [%c]\n", vchar+1); //4byte

	// 주소값은 보통 8자리, ffff ffff ->ff 두자리가 1바이트->총 4바이트
	// 메모리의 공간인 주소: &
	printf("\n안녕하세요\n");
	printf("%8x\n%8x\n%8x\n%8x\n", &vchar, &vint, &vlong, &vfloat);
	scanf("%c %d %d %f", &vchar, &vint, &vlong, &vfloat);

}