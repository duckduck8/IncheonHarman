#include <stdio.h>

int test01();
void test02(int a);


main()
{
	test02(1);
}




int test01()
{
	// �ƽ�Ű�ڵ忡�� 0�� 30�� ->0x30 �̷��� ���� 16���� 0�� ����Ѵٴ� ���ε� 
	// num-0x30 �ϸ� �̰� ����?  ���ڸ� ���ڷ� �ٲٴ°ǰ�
	char* str[] = { "zero","one","two","three","four","five","six","seven","eight","nine" }; //������ ���ڿ� �迭 ����

	printf("����Ű�� �Է��ϼ���. �ش��ϴ� ���ܾ� �˷��帱�Կ�\n");
	printf("���α׷��� �������� Q�� �Է��ϼ���\n");

	int n = 1;

	while (n)
	{
		printf(">");
		char c = getch();
		int m = c - 0x30; //�ƽ�Ű�� -> num

		printf("%c: %s\n", c, str[m]);

	}
}

void test02(int a)  //���ڿ��� ���ڹ迭
{
	char ca[] = "Hello"; // ca[0]: 'H' ... ca[5]:\0
	for (int i = 0; i < 10; i++)  
	{
		printf("ca[%d]: %c (%02x)\n", i, ca[i], ca[i]); //02x: 16���� %x�� ǥ���ϴµ� %02x�� 2�ڸ��� ���ڸ��� 0���� ä���� ��
	}

	ca[2] -= 1;  //l-1 -> k
	ca[3] -= 1;  //l-1 -> k

	for (int i = 0; i < 10; i++)
	{
		printf("ca[%d]: %c (%02x)\n", i, ca[i], ca[i]); //02x: 16���� %x�� ǥ���ϴµ� %02x�� 2�ڸ��� ���ڸ��� 0���� ä���� ��
	}
}



