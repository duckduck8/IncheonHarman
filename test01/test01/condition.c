#include <stdio.h>

int main2()
{
	
	//getch: no echo -> Ű���� ������� �ʰ� ��ȯ, ���ڰ� �ƴ϶� ���ڸ� �޴´�
	//getchar: [enter] �ʿ�?
	//int a = 1, c = 0, n = 1;
	/*char d = getch();
	printf("����Ű�� �Է��ϼ���. �ش��ϴ� ���ܾ� �˷��帱�Կ�\n");
	printf("���α׷��� �������� Q�� �Է��ϼ���\n");*/
	
	//while (1) {

	//	if (d == '1') printf(">%c: one\n", d);
	//	else if (d == '2') printf(">%c: two\n", d);
	//	else if (d == '3') printf(">%c: three\n", d);
	//	else if (c | 0x20 == 'q') break; 
	//}

	int n = 1;
	while (n)
	{
		
		printf("����Ű�� �Է��ϼ���. �ش��ϴ� ���ܾ� �˷��帱�Կ�\n");
		printf("���α׷��� �������� Q�� �Է��ϼ���\n");
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
			printf("1, 2, 3 �߿� �Է���\n");


		}

		
	}

	
	/*while (1)
	{
		
		printf("����Ű�� �Է��ϼ���. �ش��ϴ� ���ܾ� �˷��帱�Կ�\n");
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
			printf("0���� 9���� ���� �Է��ϼ���\n"); break;
		
		}*/
	
		
	
	
	
	
	

}
