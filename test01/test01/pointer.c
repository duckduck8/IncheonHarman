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

void test04(int a)  //���ڿ��� ���ڹ迭
{
	char ca[] = "Hello"; // ca[0]: 'H' ... ca[5]:\0
	for (int i = 0; i < 10; i++)
	{
		printf("ca[%d]: %c (%02x) [%08x]\n", i, ca[i], ca[i], ca+i); //02x: 16���� %x�� ǥ���ϴµ� %02x�� 2�ڸ��� ���ڸ��� 0���� ä���� ��
	}

	int ia[] = {10,20,30,40,50};

	for (int i = 0; i < 6; i++)
	{
		printf("ia[%d]: %d (%08x) [%08x]\n", i, ia[i], ia[i], ia+i);
	}

	int ia2[3][2] = { 10,20,30,40,50,60 };
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 2; x++) {
			printf("ia2[%d][%d]: %d [%08x]\n", y, x, ia2[y][x], ia2+y); //ia+y : ������ ������ ����?
		}
	}
}

void test05()
{
	char buf[100]; //���� �޸� ���� Ȯ��
	char* pBuf;    //���� �޸� �������� ��� ��ġ
	unsigned int addr;      //��� ��ġ ������ ���� �Էº���(�ּ� �Է¹ޱ�)
	char kBuf[100]; //��� ���ڿ� �Է� ����(���ڿ� �Է¹ޱ�)

	printf("���������� �ּҴ� %d[%08x] �Դϴ�.\n", buf, buf);
	printf("�Է� ������ �ּҸ� �Է��ϼ���: ");
	scanf("%d", &addr);  //�������� �����ؼ� �Է�
	pBuf = buf + addr;
	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", kBuf);
	Copy(pBuf, kBuf); //strcpy(a,b) �Լ�: b ���ڿ��� a�� �����ض�
	Dump(buf, 100);
	
}

//�޸� ���� ��� 8����Ʈ�� ���ٿ� 16����Ʈ
//[�޸� �ּ�] ���������������� ����������������
//[�޸� �ּ�] ���������������� ����������������
void Dump(char *p, int len)  //�޸� ���� ��¿� �����Լ�
{
	for (int i = 0; i < len; i++)  //�������� �޸� ����
	{	
		if (i % 16 == 0) printf("\n%08x ", p);  //16������� [�޸� �ּ�] ����ض�
		if (i % 8 == 0) printf("  ");          //8������� ���� �ض�
		printf("%02x ", (unsigned char)*p++);    //unsigned: ��ȣ ǥ���ϴ� ���� ���� msb������ ������ ũ�� ǥ���ϴµ� ��� -> ����� �ν�
	}
}

void Copy(char* p1, char* p2)

{
	while (*p2) *p1++ = *p2++; *p1 = 0;
}