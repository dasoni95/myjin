//3������

//#include <stdio.h>
//main()
//{
//	int i;
//	int tot;
//	printf("1���� 10������ ���� ���մϴ�");
//	tot = 0;
//		for (i = 1; i <= 10; i++)
//			tot = tot + i;
//	printf("����� %d �Դϴ�.", tot);
//}

//5������

#include <stdio.h>
main()
{
	int i;
	/*printf("���ڸ� �Է��Ͻÿ�");*/
	scanf("%d", &i);
	/*���ڸ� 2�� ������ �������� 0�̸� ¦��
	�������� 1�̸� Ȧ��*/
	if (i % 2) printf("¦���Դϴ�\n");
	printf("Ȧ���Դϴ�\n");
}