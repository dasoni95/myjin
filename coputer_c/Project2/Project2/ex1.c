//3번문제

//#include <stdio.h>
//main()
//{
//	int i;
//	int tot;
//	printf("1에서 10까지의 합을 구합니다");
//	tot = 0;
//		for (i = 1; i <= 10; i++)
//			tot = tot + i;
//	printf("결과는 %d 입니다.", tot);
//}

//5번문제

#include <stdio.h>
main()
{
	int i;
	/*printf("숫자를 입력하시오");*/
	scanf("%d", &i);
	/*숫자를 2로 나누어 나머지가 0이면 짝수
	나머지가 1이면 홀수*/
	if (i % 2) printf("짝수입니다\n");
	printf("홀수입니다\n");
}