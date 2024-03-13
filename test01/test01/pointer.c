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
	void* pF[] = {test01, test02, test03, test04, test05};  //展脊戚 舛背走走 省精 匂昔斗, test1,2,3,4 敗呪税 爽社級戚 壕伸拭 眼延依
	void (*pFunc)();  //敗呪 匂昔斗
	while (1)
	{
		printf("\n\n\n\n");
		printf("1. 収切徹拭 企廃 庚切伸 窒径耕芝\n");
		printf("2. 庚切伸引 庚切壕伸\n");
		printf("3. 匂昔斗税 是帖 走舛\n");
		printf("4. 匂昔斗研 戚遂廃 庚切伸 脊窒径敗呪\n");
		printf("5. 姥繕端 砺什闘\n");
		printf("=====================================\n  識澱 ");
		scanf("%d", &n);
		if (n == 0) return;
		pFunc = pF[n - 1];
		pFunc();    //pF拭 赤澗 敗呪爽社研 pFunc拭 隔嬢辞 益 爽社拭 背雁馬澗 敗呪 叔楳獣佃 爽澗 依
	}
	//test01()
	//test02();
	//test03();
	//test04();
}




void test01()  //収切徹拭 企廃 庚切伸 窒径
{
	// 焼什徹坪球拭辞 0精 30績 ->0x30 戚係惟 床檎 16遭呪 0聖 紫遂廃陥澗 倶昔汽 
	// num-0x30 馬檎 戚惟 杭汽?  庚切研 収切稽 郊荷澗闇亜
	char* str[] = { "zero","one","two","three","four","five","six","seven","eight","nine" }; //匂昔斗 庚切伸 壕伸 識情

	printf("収切徹研 脊径馬室推. 背雁馬澗 慎舘嬢 硝形球険惟推\n");
	printf("覗稽益轡聖 魁鎧形檎 Q研 脊径馬室推\n");

	int n = 1;

	while (n)
	{
		printf(">");
		char c = getch();
		int m = c - 0x30; //焼什徹葵 -> num
		if ((c | 0x20) == 'q') break;
		printf("%c: %s\n", c, str[m]);

	}
}

void test02()  //庚切伸引 庚切壕伸
{
	char ca[] = "Hello"; // ca[0]: 'H' ... ca[5]:\0
	for (int i = 0; i < 10; i++)
	{
		printf("ca[%d]: %c (%02x) [%08x]\n", i, ca[i], ca[i], ca+i); //02x: 16遭呪 %x稽 妊薄馬澗汽 %02x澗 2切軒稽 朔切軒澗 0生稽 辰酔虞澗 倶
	}

	int ia[] = {10,20,30,40,50};

	for (int i = 0; i < 6; i++)
	{
		printf("ia[%d]: %d (%08x) [%08x]\n", i, ia[i], ia[i], ia+i); //ia+i -> 爽社 蟹展鎧澗牛
	}

	int ia2[3][2] = { 10,20,30,40,50,60 };
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 2; x++) {
			printf("ia2[%d][%d]: %d [%08x]\n", y, x, ia2[y][x], ia2+y); //ia+y : 寵原陥 匂昔斗 壕舛?
		}
	}
}

void test03()   //匂昔斗税 是帖 走舛
{
	char buf[100]; //照穿 五乞軒 因娃 溌左
	char* pBuf;    //照穿 五乞軒 因娃掻税 窒径 是帖
	unsigned int addr;      //窒径 是帖 走舛聖 是廃 脊径痕呪(爽社 脊径閤奄)
	char kBuf[100]; //窒径 庚切伸 脊径 因娃(庚切伸 脊径閤奄)

	printf("照穿因娃税 爽社澗 %d[%08x] 脊艦陥.\n", buf, buf);
	printf("脊径 獣拙拝 爽社研 脊径馬室推: ");
	scanf("%d", &addr);  //照穿因娃 凧壱背辞 脊径
	pBuf = buf + addr;
	printf("庚切伸聖 脊径馬室推: ");
	scanf("%s", kBuf);
	Copy(pBuf, kBuf); //strcpy(a,b) 敗呪: b 庚切伸聖 a拭 差紫背虞
	Dump(buf, 100);
	
}

void test04()   //匂昔斗研 戚遂廃 庚切伸 脊窒径敗呪
{
	char* arr[10] = { "aaaaa", "bbbb", "ccc", "dd", "eeeeee" };
	char buf[100];

	/*printf("[6]");
	scanf("%s", buf);
	arr[6] = buf;
	printf("[7]");
	scanf("%s", buf);
	arr[7] = buf;   */    //戚係惟 馬檎 旭精 爽社拭 6,7戚 陥 級嬢亜辞 7税 葵生稽幻 蟹紳陥

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

void test05()  //姥繕端 砺什闘
{
	struct stTest
	{
		int i;  //4郊戚闘
		float a; //4郊戚闘
		char name[20]; //匂昔斗 蒸戚 [20] 背兜生檎 20郊戚闘 紫遂敗
		//char* name;  //8郊戚闘(爽社澗 巷繕闇 8郊戚闘)  匂昔斗 紫遂背醤 五乞軒 因娃 溌左拭 疏精亜左陥
	} s1 = { 1, 3.14, "誌探逢切 疑号肢" };
	//s1 = { 1, 3.14 };
	//s1.name = "誌探逢切 疑号肢";  
	struct stTest s2=s1;

	printf("sizeof(struct stTest): %d\n", sizeof(struct stTest));  //struct stTest税 郊戚闘 呪 窒径

	printf("struct stTest s1: %d  %f  %s\n", s1.i, s1.a, s1.name);
	printf("struct stTest s2: %d  %f  %s\n", s2.i, s2.a, s2.name);

}

//五乞軒 因娃 窒径 8郊戚闘梢 廃匝拭 16郊戚闘
//[五乞軒 爽社] けけけけけけけけ けけけけけけけけ
//[五乞軒 爽社] けけけけけけけけ けけけけけけけけ
void Dump(char *p, int len)  //五乞軒 因娃 窒径遂 骨遂敗呪
{
	for (int i = 0; i < len; i++)  //照穿因娃 五乞軒 棋覗
	{	
		if (i % 16 == 0) printf("\n%08x ", p);  //16壕呪原陥 [五乞軒 爽社] 窒径背虞
		if (i % 8 == 0) printf("  ");          //8壕呪原陥 句嬢床奄 背虞
		printf("%02x ", (unsigned char)*p++);    //unsigned: 採硲 妊薄馬澗 亜舌 図楕 msb猿走亀 汽戚斗 滴奄 妊薄馬澗汽 紫遂 -> 丞呪稽 昔縦
	}
}

void Copy(char* p1, char* p2)

{
	while (*p2) *p1++ = *p2++; *p1 = 0;
}