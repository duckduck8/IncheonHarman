#include <stdio.h>
#include <string.h>

void work01();  //문자 띄우기
void work02();  //문자열 일괄 대문자로
void work03();  //두 값 스왑하기
void work04();  //피라미드 만들기
void work05();  //문자 역피라미드 만들기
void work06();  //아스키코드 출력
void work07();  //최대공약수 구하기
void swap(int* a, int* b); //스왑함수
int gcd(int c, int d);  //최대공약수 함수

int main(void)
{
	int n;
	void* pF[] = { work01, work02, work03, work04, work05, work06, work07};  //타입이 정해지지 않은 포인터, test1,2,3,4 함수의 주소들이 배열에 담긴것
	void (*pFunc)();  //함수 포인터
	while (1)
	{
		printf("\n\n\n\n");
		printf("1. 문자 띄우기\n");
		printf("2. 문자 일괄 대문자로 만들기\n");
		printf("3. 두 값 스왑하기\n");
		printf("4. 피라미드 만들기\n");
		printf("5. 문자 역피라미드 만들기\n");
		printf("6. 아스키코드 출력\n");
		printf("7. 최대공약수 구하기\n");
		printf("=====================================\n  선택 ");
		scanf("%d", &n);
		if (n == 0) return;
		pFunc = pF[n - 1];
		pFunc();    //pF에 있는 함수주소를 pFunc에 넣어서 그 주소에 해당하는 함수 실행시켜 주는 것

	}

	////문자 띄어서 입력하기
	//char str[100];
	//int i = 0;

	//printf("문자를 입력하세요\n");
	//scanf("%s", str);
	//while(str[i] != 0)
	//{
	//	printf("%c ", str[i]);
	//	i++;
	//}



	////문자열 일괄 대문자로
	//work02();




	////아스키코드 출력
	//for (int i = 0; i < 32; i++)
	//{
	//	printf("|%d| |%x| |%o| |%c| \n",
	//		i, i, i, i, i + 31, i + 31, i + 31, i + 31, i + 62, i + 62, i + 62, i + 62, i + 93, i + 93, i + 93, i + 93);
	//}






	////피라미드 만들기
	//int floor;
	//
	//while (1) {
	//	printf("몇층으로 쌓을까요?: ");
	//	scanf("%d", &floor);
	//	if (floor % 2 == 0) printf("홀수 입력하세요\n");
	//	else break;
	//}

	//for (int i = 0; i < floor-i; i++)
	//{
	//	for (int j = i; j < floor-1; j++)
	//	{
	//		printf(" ");
	//	}
	//	for (int k = 0; k < i * 2 + 1; k++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	
		



	////문자 입력받아 역피라미드 만들기
	//char floor;
	//printf("문자를 입력하세요: ");
	//scanf("%c", &floor);

	//for (int i = 0; i < floor-64; i++)
	//{
	//	for (int k = 0; k < i; k++)
	//	{
	//		printf(" ");
	//	}

	//	for (int j = floor-64; j > i; j--)
	//	{
	//		printf("%c", 65 + i);
	//	}

	//	printf("\n");
	//}









	////두개 값 스왑하기
	//int a1;
	//int a2;
	//printf("두개의 숫자를 입력하세요: \n");
	//scanf("%d %d", &a1, &a2);
	//printf("변경 전: %d, %d\n", a1, a2);
	//swap(&a1, &a2);
	//printf("변경 후: %d, %d\n", a1, a2);


	



	////최대공약수 구하기
	//int x;
	//int y;
	//printf("양의 정수 2개를 입력하세요\n");
	//scanf("%d %d", &x, &y);
	//printf("두 수의 최대공약수: %d", gcd(x, y));





	return 0;
}


void work01()  //문자 띄어서 입력하기
{
	char str[100];
	int i = 0;

	printf("문자를 입력하세요\n");
	scanf("%s", str);
	while(str[i] != 0)
	{
		printf("%c ", str[i]);
		i++;
	}
}

void work02()  //대문자로 바꾸기
{

	char str[100];

	printf("문자를 입력하세요\n");
	scanf("%s", str);

	for (int i = 0; i < strlen(str) ;i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		
	}
	
	printf("모두 대문자로 변환한 문자: %s", str);
}

void work03()  //두개 값 스왑하기
{
	
	int a1;
	int a2;
	printf("두개의 숫자를 입력하세요: \n");
	scanf("%d %d", &a1, &a2);
	printf("변경 전: %d, %d\n", a1, a2);
	swap(&a1, &a2);
	printf("변경 후: %d, %d\n", a1, a2);
}

void work04()  //피라미드 만들기
{

	
	int floor;
	
	while (1) {
		printf("몇층으로 쌓을까요?: ");
		scanf("%d", &floor);
		if (floor % 2 == 0) printf("홀수 입력하세요\n");
		else break;
	}

	for (int i = 0; i < floor-i; i++)
	{
		for (int j = i; j < floor-1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void work05()  //문자 역피라미드 만들기
{
	char floor;
	printf("문자를 입력하세요: ");
	scanf(" %c", &floor);

	for (int i = 0; i < floor-64; i++)
	{
		for (int k = 0; k < i; k++)
		{
			printf(" ");
		}

		for (int j = floor-64; j > i; j--)
		{
			printf("%c", 65 + i);
		}

		printf("\n");
	}

}

void work06()  //아스키코드 출력
{
	for (int i = 0; i < 32; i++)
	{
		printf("|%d| |%x| |%o| |%c| |%d| |%x| |%o| |%c| |%d| |%x| |%o| |%c| |%d| |%x| |%o| |%c| \n",i, i, i, i, i+32, i+32, i+32, i+32, i+64, i+64, i+64, i+64, i+96, i+96, i+96, i+96);
	}
}

void work07()  //최대공약수 구하기
{
	int x;
	int y;
	printf("양의 정수 2개를 입력하세요\n");
	scanf("%d %d", &x, &y);
	printf("두 수의 최대공약수: %d", gcd(x, y));

}

void swap(int* a, int* b)  //스왑함수
{
	

	int t;
	t = *a;
	*a = *b;
	*b = t;

}

int gcd(int c, int d) {   //최대공약수 함수

	int r;

	while (d != 0) {

		r = c % d;

		c = d;

		d = r;

	}

	return c;

}

