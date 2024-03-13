#include <stdio.h>

void test01();
void test02();
void test03();
void test04();
void test05();
void Dump(char* p, int len);
void Copy(char* p1, char* p2);



main()
{
	int n;
	void* pF[] = {test01, test02, test03, test04, test05};  //타입이 정해지지 않은 포인터, test1,2,3,4 함수의 주소들이 배열에 담긴것
	void (*pFunc)();  //함수 포인터
	while (1)
	{
		printf("\n\n\n\n");
		printf("1. 숫자키에 대한 문자열 출력미션\n");
		printf("2. 문자열과 문자배열\n");
		printf("3. 포인터의 위치 지정\n");
		printf("4. 포인터를 이용한 문자열 입출력함수\n");
		printf("5. 구조체 테스트\n");
		printf("=====================================\n  선택 ");
		scanf("%d", &n);
		if (n == 0) return;
		pFunc = pF[n - 1];
		pFunc();    //pF에 있는 함수주소를 pFunc에 넣어서 그 주소에 해당하는 함수 실행시켜 주는 것
	}
	//test01()
	//test02();
	//test03();
	//test04();
}




void test01()  //숫자키에 대한 문자열 출력
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
		if ((c | 0x20) == 'q') break;
		printf("%c: %s\n", c, str[m]);

	}
}

void test02()  //문자열과 문자배열
{
	char ca[] = "Hello"; // ca[0]: 'H' ... ca[5]:\0
	for (int i = 0; i < 10; i++)
	{
		printf("ca[%d]: %c (%02x) [%08x]\n", i, ca[i], ca[i], ca+i); //02x: 16진수 %x로 표현하는데 %02x는 2자리로 빈자리는 0으로 채우라는 뜻
	}

	int ia[] = {10,20,30,40,50};

	for (int i = 0; i < 6; i++)
	{
		printf("ia[%d]: %d (%08x) [%08x]\n", i, ia[i], ia[i], ia+i); //ia+i -> 주소 나타내는듯
	}

	int ia2[3][2] = { 10,20,30,40,50,60 };
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 2; x++) {
			printf("ia2[%d][%d]: %d [%08x]\n", y, x, ia2[y][x], ia2+y); //ia+y : 층마다 포인터 배정?
		}
	}
}

void test03()   //포인터의 위치 지정
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

void test04()   //포인터를 이용한 문자열 입출력함수
{
	char* arr[10] = { "aaaaa", "bbbb", "ccc", "dd", "eeeeee" };
	char buf[100];

	/*printf("[6]");
	scanf("%s", buf);
	arr[6] = buf;
	printf("[7]");
	scanf("%s", buf);
	arr[7] = buf;   */    //이렇게 하면 같은 주소에 6,7이 다 들어가서 7의 값으로만 나온다

	printf("[6]");
	scanf("%s", buf);
	arr[6] = buf;
	printf("[7]");
	scanf("%s", buf+50);
	arr[7] = buf+50;

	for (int i = 0; i < 10; i++)
	{
		printf("arr[%d] : 0x%08x %s\n", i, arr[i], arr[i]);
	}
}

void test05()  //구조체 테스트
{
	struct stTest
	{
		int i;  //4바이트
		float a; //4바이트
		char name[20]; //포인터 없이 [20] 해놓으면 20바이트 사용함
		//char* name;  //8바이트(주소는 무조건 8바이트)  포인터 사용해야 메모리 공간 확보에 좋은가보다
	} s1 = { 1, 3.14, "삼천갑자 동방삭" };
	//s1 = { 1, 3.14 };
	//s1.name = "삼천갑자 동방삭";  
	struct stTest s2=s1;

	printf("sizeof(struct stTest): %d\n", sizeof(struct stTest));  //struct stTest의 바이트 수 출력

	printf("struct stTest s1: %d  %f  %s\n", s1.i, s1.a, s1.name);
	printf("struct stTest s2: %d  %f  %s\n", s2.i, s2.a, s2.name);

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