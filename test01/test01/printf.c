#include <stdio.h>

main1()
{

	////���� ����
	//char vchar;
	//int vint;
	//long vlong;
	//float vfloat;
	//double vdouble;

	////���� �ʱ�ȭ
	//vchar = 'f';
	//vint = 10;
	//vlong = 4000000000;
	//vfloat = 3.14159265;
	//vdouble = 314159265.123456789;


	//������ ����� �ʱ�ȭ
	char vchar = 'f';
	int vint = 10;
	long vlong = 4000000000;
	float vfloat = 3.14159265;
	double vdouble = 314159265.123456789;



	//�ȳ��ϼ���
	//printf("\n\n\n\n\n�ȳ��ϼ���\n\n\n\n\n\n");
	//printf("���� ��� �׽�Ʈ: [%12d]\n", 10); //4byte
	//printf("�Ǽ� ��� �׽�Ʈ: %4.2f\n", 3.141592651234); //4byte, ���Ǿ����� �Ҽ��� 6�ڸ����� ����
	//printf("�� ���� ��� �׽�Ʈ: %d\n", 10); //4byte
	//printf("�� �Ǽ� ��� �׽�Ʈ: [%12.8f]\n", 3.141592651234); //8byte
	//printf("���� ��� �׽�Ʈ: [%12e]\n", 1234567890); //4byte

	//printf("8���� ��� �׽�Ʈ: [12%o]\n", 1234567890); //4byte
	//printf("16���� ��� �׽�Ʈ: [%12x]\n", 1234567890); //4byte
	//printf("���� ��� �׽�Ʈ: [%c]\n", 50); //1byte
	//printf("���ڿ� ��� �׽�Ʈ: [%s]\n", "�ȳ�"); //4byte

	
	
	
	printf("\n\n\n\n\n�ȳ��ϼ���\n\n\n\n\n\n");
	printf("���� ��� �׽�Ʈ: [%12d]\n", vint); //4byte
	printf("�� �Ǽ� ��� �׽�Ʈ: [%12.8f]\n", vfloat); //8byte
	printf("���� ��� �׽�Ʈ: [%12e]\n", vdouble); //4byte

	printf("8���� ��� �׽�Ʈ: [%12o]\n", vint); //4byte
	printf("16���� ��� �׽�Ʈ: [%12x]\n", vint); //4byte
	printf("���� ��� �׽�Ʈ: [%c]\n", vchar); //1byte
	printf("���� ���� �׽�Ʈ: [%c]\n", vchar+1); //4byte

	// �ּҰ��� ���� 8�ڸ�, ffff ffff ->ff ���ڸ��� 1����Ʈ->�� 4����Ʈ
	// �޸��� ������ �ּ�: &
	printf("\n�ȳ��ϼ���\n");
	printf("%8x\n%8x\n%8x\n%8x\n", &vchar, &vint, &vlong, &vfloat);
	scanf("%c %d %d %f", &vchar, &vint, &vlong, &vfloat);

}