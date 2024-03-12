#include <stdio.h>

int main2()
{
	
	//getch: no echo -> 키값을 출력하지 않고 반환, 숫자가 아니라 문자를 받는다
	//getchar: [enter] 필요?
	//int a = 1, c = 0, n = 1;
	/*char d = getch();
	printf("숫자키를 입력하세요. 해당하는 영단어 알려드릴게요\n");
	printf("프로그램을 끝내려면 Q를 입력하세요\n");*/
	
	//while (1) {

	//	if (d == '1') printf(">%c: one\n", d);
	//	else if (d == '2') printf(">%c: two\n", d);
	//	else if (d == '3') printf(">%c: three\n", d);
	//	else if (c | 0x20 == 'q') break; 
	//}

	int n = 1;
	while (n)
	{
		
		printf("숫자키를 입력하세요. 해당하는 영단어 알려드릴게요\n");
		printf("프로그램을 끝내려면 Q를 입력하세요\n");
		char d = getch();

		switch (d) {

		case '1':
			printf(">%c: one\n", d);
			break;
		case '2':
			printf(">%c: two\n", d);
			break;
		case '3':
			printf(">%c: three\n", d);
			break;
		case 'q':
		case 'Q':n = 0;
			break;
		default:
			printf("1, 2, 3 중에 입력해\n");


		}

		
	}

	
	/*while (1)
	{
		
		printf("숫자키를 입력하세요. 해당하는 영단어 알려드릴게요\n");
		scanf("%d", &c);
		switch (c) {

		case 1:
			printf(">%d: one\n", c);
			break;
		case 2:
			printf(">%d: two\n", c);
			break;
		case 3:
			printf(">%d: three\n", c);
			break;
		case 4:
			printf(">%d: four\n", c);
			break;
		case 5:
			printf(">%d: five\n", c);
			break;
		case 6:
			printf(">%d: six\n", c);
			break;
		case 7:
			printf(">%d: seven\n", c);
			break;
		case 8:
			printf(">%d: eight\n", c);
			break;
		case 9:
			printf(">%d: nine\n", c);
			break;
		case 0:
			printf(">%d: zero\n", c);
			break;
		default:
			printf("0에서 9사이 값을 입력하세요\n"); break;
		
		}*/
	
		
	
	
	
	
	

}
