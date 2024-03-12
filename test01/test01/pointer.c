#include <stdio.h>

int test03();
void test04(int a);
void test05();
void Dump(char* p, int len);
void Copy(char* p1, char* p2);



main()
{
	//test03()
	//test04(1);
	test05();
}




int test03()
{
	// 아스키코드에서 0은 30임 ->0x30 이렇게 쓰면 16진수 0을 사용한다는 뜻인데 
	// num-0x30 하면 이게 뭔데?  문자를 숫자로 바꾸는건가
	char* str[] = { "zero","one","two","three","four","five","six","seven","eight","nine" }; //포인터 문자열 배열 선언

	printf("숫자키를 입력하세요. 해당하는 영단어 알려드릴게요\n");
	printf("프로그램을 끝내려면 Q를 입력하세요\n");

	int n = 1;

	while (n)
	{
		printf(">");
		char c = getch();
		int m = c - 0x30; //아스키값 -> num

		printf("%c: %s\n", c, str[m]);

	}
}

void test04(int a)  //문자열과 문자배열
{
	char ca[] = "Hello"; // ca[0]: 'H' ... ca[5]:\0
	for (int i = 0; i < 10; i++)
	{
		printf("ca[%d]: %c (%02x) [%08x]\n", i, ca[i], ca[i], ca+i); //02x: 16진수 %x로 표현하는데 %02x는 2자리로 빈자리는 0으로 채우라는 뜻
	}

	int ia[] = {10,20,30,40,50};

	for (int i = 0; i < 6; i++)
	{
		printf("ia[%d]: %d (%08x) [%08x]\n", i, ia[i], ia[i], ia+i);
	}

	int ia2[3][2] = { 10,20,30,40,50,60 };
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 2; x++) {
			printf("ia2[%d][%d]: %d [%08x]\n", y, x, ia2[y][x], ia2+y); //ia+y : 층마다 포인터 배정?
		}
	}
}

void test05()
{
	char buf[100]; //안전 메모리 공간 확보
	char* pBuf;    //안전 메모리 공간중의 출력 위치
	unsigned int addr;      //출력 위치 지정을 위한 입력변수(주소 입력받기)
	char kBuf[100]; //출력 문자열 입력 공간(문자열 입력받기)

	printf("안전공간의 주소는 %d[%08x] 입니다.\n", buf, buf);
	printf("입력 시작할 주소를 입력하세요: ");
	scanf("%d", &addr);  //안전공간 참고해서 입력
	pBuf = buf + addr;
	printf("문자열을 입력하세요: ");
	scanf("%s", kBuf);
	Copy(pBuf, kBuf); //strcpy(a,b) 함수: b 문자열을 a에 복사해라
	Dump(buf, 100);
	
}

//메모리 공간 출력 8바이트씩 한줄에 16바이트
//[메모리 주소] ㅁㅁㅁㅁㅁㅁㅁㅁ ㅁㅁㅁㅁㅁㅁㅁㅁ
//[메모리 주소] ㅁㅁㅁㅁㅁㅁㅁㅁ ㅁㅁㅁㅁㅁㅁㅁㅁ
void Dump(char *p, int len)  //메모리 공간 출력용 범용함수
{
	for (int i = 0; i < len; i++)  //안전공간 메모리 덤프
	{	
		if (i % 16 == 0) printf("\n%08x ", p);  //16배수마다 [메모리 주소] 출력해라
		if (i % 8 == 0) printf("  ");          //8배수마다 띄어쓰기 해라
		printf("%02x ", (unsigned char)*p++);    //unsigned: 부호 표현하는 가장 왼쪽 msb까지도 데이터 크기 표현하는데 사용 -> 양수로 인식
	}
}

void Copy(char* p1, char* p2)

{
	while (*p2) *p1++ = *p2++; *p1 = 0;
}