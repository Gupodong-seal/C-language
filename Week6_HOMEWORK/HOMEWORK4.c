#include <stdio.h>

int main(void)
{
	int num;
	printf("0�̻��� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	switch (num / 10) // �Էµ� ������ 10���� ���� 0~9, 10~19, 20~29, 30~ ���� �з�
	{
	case 0:
		printf("0�̻� 10�̸� \n");
		break;
	case 1:
		printf("10�̻� 20�̸� \n");
		break;
	case 2:
		printf("20 �̻� 30�̸� \n");
		break;
	default:
		printf("30 �̻� \n");

	}
	return 0;
}