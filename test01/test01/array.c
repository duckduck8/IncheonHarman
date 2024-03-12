#include <stdio.h>

int main3()
{
	// 아스키코드에서 0은 30임 ->0x30 이렇게 쓰면 16진수 0을 사용한다는 뜻인데 
	// num-0x30 하면 이게 뭔데?
	char* str[] = { "zero","one","two","three","four","five","six","seven","eight","nine"}; //포인터 문자열 배열 선언

	printf("숫자키를 입력하세요. 해당하는 영단어 알려드릴게요\n");
	printf("프로그램을 끝내려면 Q를 입력하세요\n");

	int n = 1;
	
	while (n)
	{
		printf(">");
		char c = getch();
		int m = c - 0x30; // int m = c(c값이 예를들어 1이면 아스키에서 49) - 0x30(숫자 0의 아스키코드 보면 48임) = 49-48=1=m 이 되는거임
		// c는 지금 문자가 들어가있는데 int 에는 숫자가 들어가니까 c에 만약 1을 넣었어 그럼 아스키코드 표 보면
		// 문자1이 숫자로 49임 그래서 49-48=1 만들라고 0x30 빼준거임
			
		printf("%c: %s\n", c, str[m]);
	
	}


}