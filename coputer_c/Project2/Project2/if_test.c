	//1
//#include <stdio.h>
//main()
//{
//
//	int num;
//	num = 10;
//	if (num > 0) printf("��� �Դϴ�.");
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
//	if (num > 0) printf("��� �Դϴ�.");
//	else printf(" 0�Ǵ� ���� �Դϴ�.");
//}


//4
#include <stdio.h>
main() 
{
	int num;
	scanf("%d", &num);
	if (num % 2 == 0)
	{
		printf("\n �Է� ���� ��");
		printf("%d �� ¦���Դϴ�.", num);
	}
	else
	{
		printf("\n �Է� ���� ��");
		printf("%d �� Ȧ���Դϴ�.", num);
	}
	
}