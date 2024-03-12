#include <stdio.h>

int test01();
void test02(int a);


main()
{
	test02(1);
}




int test01()
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

void test02(int a)  //문자열과 문자배열
{
	char ca[] = "Hello"; // ca[0]: 'H' ... ca[5]:\0
	for (int i = 0; i < 10; i++)  
	{
		printf("ca[%d]: %c (%02x)\n", i, ca[i], ca[i]); //02x: 16진수 %x로 표현하는데 %02x는 2자리로 빈자리는 0으로 채우라는 뜻
	}

	ca[2] -= 1;  //l-1 -> k
	ca[3] -= 1;  //l-1 -> k

	for (int i = 0; i < 10; i++)
	{
		printf("ca[%d]: %c (%02x)\n", i, ca[i], ca[i]); //02x: 16진수 %x로 표현하는데 %02x는 2자리로 빈자리는 0으로 채우라는 뜻
	}
}



