	//1
//#include <stdio.h>
//main()
//{
//
//	int num;
//	num = 10;
//	if (num > 0) printf("양수 입니다.");
//
//}


	//2
//#include <stdio.h>
//main()
//{
//	int num1, num2;
//	num1 = 5;
//	num2 = 10;
//	if (num2 > num1) {
//		num2 = num2 - num1;
//	printf("num2 = %d\n", num2);
//	}	
//
//}
// 
	//3
//#include <stdio.h>
//main()
//{	
//	int num;
//	scanf("%d",&num);
//	if (num > 0) printf("양수 입니다.");
//	else printf(" 0또는 음수 입니다.");
//}


//4
#include <stdio.h>
main() 
{
	int num;
	scanf("%d", &num);
	if (num % 2 == 0)
	{
		printf("\n 입력 받은 수");
		printf("%d 는 짝수입니다.", num);
	}
	else
	{
		printf("\n 입력 받은 수");
		printf("%d 는 홀수입니다.", num);
	}
	
}