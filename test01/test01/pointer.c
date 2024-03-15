#include <stdio.h>

void test01();
void test02();
void test03();
void test04();
void test05();
void test06();
void test07();
void test08();
void Dump(char* p, int len);
void Copy(char* p1, char* p2);
int Length(char* str);
int Compare(char* str1, char* str2);
//fflush(stdin),rewind(stdin): scanf���� ���������� �ٽ� ó������ ���������ִ� �Լ�
//if (n == 0)  //�Է¿����ǹ�   //�̷������� ����ϸ� ��
//{
//	fflush(stdin); //���� Ŭ����
//	rewind(stdin);// ���� ������ Ŭ����
//	continue;
//}



main5()
{
	int n;
	void* pF[] = {test01, test02, test03, test04, test05, test06, test07, test08};  //Ÿ���� �������� ���� ������, test1,2,3,4 �Լ��� �ּҵ��� �迭�� ����
	void (*pFunc)();  //�Լ� ������
	while (1)
	{
		printf("\n\n\n\n");
		printf("1. ����Ű�� ���� ���ڿ� ��¹̼�\n");
		printf("2. ���ڿ��� ���ڹ迭\n");
		printf("3. �������� ��ġ ����\n");
		printf("4. �����͸� �̿��� ���ڿ� ������Լ�\n");
		printf("5. ����ü �׽�Ʈ\n");
		printf("6. ǥ���Լ� �׽�Ʈ\n");
		printf("7. ���ڿ� ���� ��ȯ\n");
		printf("8. ���ڿ� ũ�� ��\n");
		printf("=====================================\n  ���� ");
		scanf("%d", &n);
		if (n == 0) return;
		pFunc = pF[n - 1];
		pFunc();    //pF�� �ִ� �Լ��ּҸ� pFunc�� �־ �� �ּҿ� �ش��ϴ� �Լ� ������� �ִ� ��

	}

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

void test06()
{
	char* s1 = "Good";   //���ڿ��� �״�� �����ͷ� ������ ���� ���ڿ��� -> const������ ���� -> ���� �Ұ�
	char* s2 = "aternoon";  //�迭�� ������ �Ǵµ�
	char buf[100];          //��ư �׷��� ���۰����� ������༭ ���� ������Ѽ� �ϴ°�

	//���� ���ڿ� �ٷ궧�� buf���� ���������� ����� �����
	//s1=buf
	//s2=buf+50
	//s1�� buf�������� ������ϰ�, s2�� s1������ 50���� buf������ ������ϴ°� 


	//strcat Test  //strcat(str1, str2): ���ڿ� �߰��Լ�, str1 + str2 �ϴ°�
	//strcpy Test  //strcpy(a, b): ���ڿ� �����Լ�, a�� b���� �����Ѵ�
	//printf("s1: %s\n", s1);
	//printf("s2: %s\n", s2);
	//strcpy(buf, s1);
	//strcat(buf, s2);   
	//printf("strcat(s1,s2): %s", buf);
	//sprintf(buf, "strcat(s1,s2): %s%s", s1, s2);   //sprintf(buf, "str"): ���ڿ��� ����(����)�� �����ؼ� ���
	
	
	//strlen test  //strlen(str): ���ڿ� ���� ��ȯ�Լ�(null�� ī��Ʈ ����)
	printf("s1: %s(%d)\n", s1, strlen(s1));
	printf("s2: %s(%d)\n", s2, strlen(s2));
	strcpy(buf, s1);  //��ǻ� s1=buf; �� ���� ��
	strcat(buf, s2);   
	printf("strcat(s1,s2): %s", buf);

}

void test07()
{
	char buf[100];
	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", buf);
	printf("�Է��� ���ڿ��� ���̴�  [%d]  �Դϴ�.\n", Length(buf));
}

void test08()
{
	char buf1[100];
	char buf2[100];

	printf("ù��° ���ڿ� �Է�: \n");
	scanf("%s", buf1);
	printf("�ι�° ���ڿ� �Է�: \n");
	scanf("%s", buf2);
	printf("%d\n", Compare(buf1, buf2));



}

//----�Լ��� ����----
//�Լ���: Length
//���: ���ڿ��� �μ��� �޾Ƽ� ���ڿ� ���� ��ȯ
//�μ�: ���ڿ� - char *str
//���ϰ�: ���ڿ� ���� - int len
//Prototype: int Length(char* str)
int Length(char* str) 
{
	int len=0;  //��ȯ�� ���ڿ��� ����  
	
	while (1)
	{
		if (*(str + len) == 0) break; //���ڿ� ���� �����ϸ� Ż��
		len++;
	}

	return len;


	//���� ������ ����
	//int len=0;
	//while (str != NULL)
	//{
	//	len+=1;	
	//}
	//printf("������ ���̴� %d �Դϴ�.", len);



	
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


//----�Լ��� ����----
//�Լ���: Copy
//���: p2 ���ڿ��� �μ��� �޾Ƽ� p1 ���ڿ��� ����
//�μ�: Ÿ�ٹ��ڿ�, �ҽ����ڿ� - char*p1, char*p2
//���ϰ�: void
//Prototype: void Copy(char* p1, char* p2)
void Copy(char* p1, char* p2)

{
	while (*p2) *p1++ = *p2++; *p1 = 0;
}


int Compare(char* str1, char* str2)
{
	

	while ((*str1) && (*str2) && (*str1 == *str2))
	{
		*str1++;
		*str2++;
	}

	if (*str1 - *str2 == 0) return 0;
	else if ((*str1 - *str2) > 0) return 1;
	else if ((*str1 - *str2) < 0) return -1;
	
}
	




//Compare ����鼭 ���� �� �����ΰ�

//str1[100];
//str2[100];
//
//if (Length(str1) > Length(str2)) return 1;
//else if (Length(str1) < Length(str2)) return 0;
//
//
//else if (Length(str1) == Length(str2)) {
//	while (1)
//	{
//		if (str1[i] == str2[i]) return 0;
//
//		else if ((str1[i] > str2[i]) | (str1[i] != '\0' && str2[i] == '\0')) {
//			return 1;
//			break;
//		}
//
//		else if ((str1[i] < str2[i]) | (str1[i] == '\0' && str2[i] != '\0')) {
//			return -1;
//			break;
//		}
//
//		i++;
//	}
//}
	/*while (str1[i] != '\0' && str2[i] !='\0')
	{
		if (str1[i] == str2[i]) i++;

		else if (str1[i] > str2[i]) {
			return 1;
			i++;
		}

		else if (str1[i] < str2[i]) {
			return -1;
			i++;
		}
	}
	
	if (str1[i] != '\0' && str2[i] == '\0') return 1;
	else if (str1[i] == '\0' && str2[i] != '\0') return -1;
	else return 0;
		
		*/

		

	


