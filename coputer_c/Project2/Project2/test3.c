#include <stdio.h>
//main() {
//	//1
//	/*printf("안녕하세요? \n");
//	printf("반갑습니다. \n");*/
//
//	//2
//	/*printf("경고음이 발생합니까? \a");*/
//
//	//3
//	/*printf("10진수=%d, 8진수=%o, 16진수=%x",10,10,10);*/
//
//	//4
//	/*int a;
//	float b;
//	float c;
//	a = 10;
//	b = 12.5;
//	c = 0.00001;
//	printf("정수형=%d, 실수형=%f, 지수형=%e", a, b, c);*/
//
//	//5
//	/*printf("%c", 'A');*/
//
//	//6
//	/*char a;
//	a = 'A';
//	printf("%c", a);*/
//	
//	//7
//	/*char a, b, c, d, e, f;
//	a = 'A';
//	b = 'B';
//	c = 'a';
//	d = 'b';
//	e = '1';
//	f = '2';
//	printf("a=%c, b=%c, c=%c, d=%c, e=%c, f=%c, \n", a, b, c, d, e, f);
//	printf("a=%d, b=%d, c=%d, d=%d, e=%d, f=%d, \n", a, b, c, d, e, f);*/
//
//	//8
//	/*printf("|%d|\n", 1234);
//	printf("|%10d|\n", 1234);
//	printf("|%-10d|\n", 1234);
//	printf("|%+10d|\n", 1234);
//	printf("|%010d|\n", 1234);
//	printf("|%+10d|\n", 1234);
//	printf("|%10.5f|\n", 1234.56);
//	printf("|%10.2f|\n", 1234.56);
//	printf("|%5.5f|\n", 1234.56);
//	printf("|%10.1f|\n", 1234.56);
//	printf("|%10s|\n", "ABCD");
//	printf("|%-10s|\n", "ABCD");
//	printf("|%10.3s|\n", "ABCD");
//	printf("|%-10.3s|\n", "ABCD");*/
//
//	//9
//	/*int a;
//	printf("정수값을 입력하시오.\n");
//	scanf("%d", &a);
//	printf("입력한 정수값은 %d입니다.", a);*/
//
//	//10
//	/*char a;
//	printf("문자를 입력하시오.\n");
//	scanf("%c", &a);
//	printf("입력한 문자는 %c입니다.", a);*/
//
//	//11
//
//	//16
//	char a[6] = "HELLO";
//	printf("%s\n", a);
//	printf("a=%c%c%c%c%c%c", a[0], a[1],a[2], a[3], a[4], a[5]);
//	printf("a=%d %d %d %d %d %d \n", a[0], a[1], a[2], a[3], a[4], a[5]);
//
//
//
//
//}

//19
int count;
main()
{

	count = 10;
	printf("전역변수count=%d", count);
	{
		int count = 20;
		printf("지역변수count=%d", count);
	}
	printf("전역변수count=%d\n", count);

}