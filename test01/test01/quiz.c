#include <stdio.h>
#include <string.h>

void work01();  //���� ����
void work02();  //���ڿ� �ϰ� �빮�ڷ�
void work03();  //�� �� �����ϱ�
void work04();  //�Ƕ�̵� �����
void work05();  //���� ���Ƕ�̵� �����
void work06();  //�ƽ�Ű�ڵ� ���
void work07();  //�ִ����� ���ϱ�
void swap(int* a, int* b); //�����Լ�
int gcd(int c, int d);  //�ִ����� �Լ�

int main(void)
{
	int n;
	void* pF[] = { work01, work02, work03, work04, work05, work06, work07};  //Ÿ���� �������� ���� ������, test1,2,3,4 �Լ��� �ּҵ��� �迭�� ����
	void (*pFunc)();  //�Լ� ������
	while (1)
	{
		printf("\n\n\n\n");
		printf("1. ���� ����\n");
		printf("2. ���� �ϰ� �빮�ڷ� �����\n");
		printf("3. �� �� �����ϱ�\n");
		printf("4. �Ƕ�̵� �����\n");
		printf("5. ���� ���Ƕ�̵� �����\n");
		printf("6. �ƽ�Ű�ڵ� ���\n");
		printf("7. �ִ����� ���ϱ�\n");
		printf("=====================================\n  ���� ");
		scanf("%d", &n);
		if (n == 0) return;
		pFunc = pF[n - 1];
		pFunc();    //pF�� �ִ� �Լ��ּҸ� pFunc�� �־ �� �ּҿ� �ش��ϴ� �Լ� ������� �ִ� ��

	}

	////���� �� �Է��ϱ�
	//char str[100];
	//int i = 0;

	//printf("���ڸ� �Է��ϼ���\n");
	//scanf("%s", str);
	//while(str[i] != 0)
	//{
	//	printf("%c ", str[i]);
	//	i++;
	//}



	////���ڿ� �ϰ� �빮�ڷ�
	//work02();




	////�ƽ�Ű�ڵ� ���
	//for (int i = 0; i < 32; i++)
	//{
	//	printf("|%d| |%x| |%o| |%c| \n",
	//		i, i, i, i, i + 31, i + 31, i + 31, i + 31, i + 62, i + 62, i + 62, i + 62, i + 93, i + 93, i + 93, i + 93);
	//}






	////�Ƕ�̵� �����
	//int floor;
	//
	//while (1) {
	//	printf("�������� �������?: ");
	//	scanf("%d", &floor);
	//	if (floor % 2 == 0) printf("Ȧ�� �Է��ϼ���\n");
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

	
		



	////���� �Է¹޾� ���Ƕ�̵� �����
	//char floor;
	//printf("���ڸ� �Է��ϼ���: ");
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









	////�ΰ� �� �����ϱ�
	//int a1;
	//int a2;
	//printf("�ΰ��� ���ڸ� �Է��ϼ���: \n");
	//scanf("%d %d", &a1, &a2);
	//printf("���� ��: %d, %d\n", a1, a2);
	//swap(&a1, &a2);
	//printf("���� ��: %d, %d\n", a1, a2);


	



	////�ִ����� ���ϱ�
	//int x;
	//int y;
	//printf("���� ���� 2���� �Է��ϼ���\n");
	//scanf("%d %d", &x, &y);
	//printf("�� ���� �ִ�����: %d", gcd(x, y));





	return 0;
}


void work01()  //���� �� �Է��ϱ�
{
	char str[100];
	int i = 0;

	printf("���ڸ� �Է��ϼ���\n");
	scanf("%s", str);
	while(str[i] != 0)
	{
		printf("%c ", str[i]);
		i++;
	}
}

void work02()  //�빮�ڷ� �ٲٱ�
{

	char str[100];

	printf("���ڸ� �Է��ϼ���\n");
	scanf("%s", str);

	for (int i = 0; i < strlen(str) ;i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		
	}
	
	printf("��� �빮�ڷ� ��ȯ�� ����: %s", str);
}

void work03()  //�ΰ� �� �����ϱ�
{
	
	int a1;
	int a2;
	printf("�ΰ��� ���ڸ� �Է��ϼ���: \n");
	scanf("%d %d", &a1, &a2);
	printf("���� ��: %d, %d\n", a1, a2);
	swap(&a1, &a2);
	printf("���� ��: %d, %d\n", a1, a2);
}

void work04()  //�Ƕ�̵� �����
{

	
	int floor;
	
	while (1) {
		printf("�������� �������?: ");
		scanf("%d", &floor);
		if (floor % 2 == 0) printf("Ȧ�� �Է��ϼ���\n");
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

void work05()  //���� ���Ƕ�̵� �����
{
	char floor;
	printf("���ڸ� �Է��ϼ���: ");
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

void work06()  //�ƽ�Ű�ڵ� ���
{
	for (int i = 0; i < 32; i++)
	{
		printf("|%d| |%x| |%o| |%c| |%d| |%x| |%o| |%c| |%d| |%x| |%o| |%c| |%d| |%x| |%o| |%c| \n",i, i, i, i, i+32, i+32, i+32, i+32, i+64, i+64, i+64, i+64, i+96, i+96, i+96, i+96);
	}
}

void work07()  //�ִ����� ���ϱ�
{
	int x;
	int y;
	printf("���� ���� 2���� �Է��ϼ���\n");
	scanf("%d %d", &x, &y);
	printf("�� ���� �ִ�����: %d", gcd(x, y));

}

void swap(int* a, int* b)  //�����Լ�
{
	

	int t;
	t = *a;
	*a = *b;
	*b = t;

}

int gcd(int c, int d) {   //�ִ����� �Լ�

	int r;

	while (d != 0) {

		r = c % d;

		c = d;

		d = r;

	}

	return c;

}

