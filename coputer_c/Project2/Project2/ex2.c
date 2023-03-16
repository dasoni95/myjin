//#include <stdio.h>
//main()
//{
//	int i;
//	/* printf("숫자를 입력하시오"); */
//	
//	scanf("%d", &i);
//	/* 숫자를 2로 나누어 나머지가 0이면 짝수
//		나머지가 1이면 홀수 */
//	if (!\(i % 2)) printf("짝수입니다\n");
//	else printf("홀수입니다\n");
//}

#include <stdio.h>
main() {
	int i;
	/*printf("숫자를 입력하시오.");*/
	scanf("%d" , &i);
	if (!(i % 2)) printf("짝수입니다\n");
	else printf("홀수입니다\n");

	
}