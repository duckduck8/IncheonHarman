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
	void* pF[] = {test01, test02, test03, test04, test05};  //Ÿ���� �������� ���� ������, test1,2,3,4 �Լ��� �ּҵ��� �迭�� ����
	void (*pFunc)();  //�Լ� ������
	while (1)
	{
		printf("\n\n\n\n");
		printf("1. ����Ű�� ���� ���ڿ� ��¹̼�\n");
		printf("2. ���ڿ��� ���ڹ迭\n");
		printf("3. �������� ��ġ ����\n");
		printf("4. �����͸� �̿��� ���ڿ� ������Լ�\n");
		printf("5. ����ü �׽�Ʈ\n");
		printf("=====================================\n  ���� ");
		scanf("%d", &n);
		if (n == 0) return;
		pFunc = pF[n - 1];
		pFunc();    //pF�� �ִ� �Լ��ּҸ� pFunc�� �־ �� �ּҿ� �ش��ϴ� �Լ� ������� �ִ� ��
	}
	//test01()
	//test02();
	//test03();
	//test04();
}




void test01()  //����Ű�� ���� ���ڿ� ���
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
		if ((c | 0x20) == 'q') break;
		printf("%c: %s\n", c, str[m]);

	}
}

void test02()  //���ڿ��� ���ڹ迭
{
	char ca[] = "Hello"; // ca[0]: 'H' ... ca[5]:\0
	for (int i = 0; i < 10; i++)
	{
		printf("ca[%d]: %c (%02x) [%08x]\n", i, ca[i], ca[i], ca+i); //02x: 16���� %x�� ǥ���ϴµ� %02x�� 2�ڸ��� ���ڸ��� 0���� ä���� ��
	}

	int ia[] = {10,20,30,40,50};

	for (int i = 0; i < 6; i++)
	{
		printf("ia[%d]: %d (%08x) [%08x]\n", i, ia[i], ia[i], ia+i); //ia+i -> �ּ� ��Ÿ���µ�
	}

	int ia2[3][2] = { 10,20,30,40,50,60 };
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 2; x++) {
			printf("ia2[%d][%d]: %d [%08x]\n", y, x, ia2[y][x], ia2+y); //ia+y : ������ ������ ����?
		}
	}
}

void test03()   //�������� ��ġ ����
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

void test04()   //�����͸� �̿��� ���ڿ� ������Լ�
{
	char* arr[10] = { "aaaaa", "bbbb", "ccc", "dd", "eeeeee" };
	char buf[100];

	/*printf("[6]");
	scanf("%s", buf);
	arr[6] = buf;
	printf("[7]");
	scanf("%s", buf);
	arr[7] = buf;   */    //�̷��� �ϸ� ���� �ּҿ� 6,7�� �� ���� 7�� �����θ� ���´�

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

void test05()  //����ü �׽�Ʈ
{
	struct stTest
	{
		int i;  //4����Ʈ
		float a; //4����Ʈ
		char name[20]; //������ ���� [20] �س����� 20����Ʈ �����
		//char* name;  //8����Ʈ(�ּҴ� ������ 8����Ʈ)  ������ ����ؾ� �޸� ���� Ȯ���� ����������
	} s1 = { 1, 3.14, "��õ���� �����" };
	//s1 = { 1, 3.14 };
	//s1.name = "��õ���� �����";  
	struct stTest s2=s1;

	printf("sizeof(struct stTest): %d\n", sizeof(struct stTest));  //struct stTest�� ����Ʈ �� ���

	printf("struct stTest s1: %d  %f  %s\n", s1.i, s1.a, s1.name);
	printf("struct stTest s2: %d  %f  %s\n", s2.i, s2.a, s2.name);

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