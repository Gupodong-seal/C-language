#include <stdio.h>

int main(void) // HOMEWORK2
{
	int num1, num2, num3, avg;
	printf("������ ������ ������� �Է��Ͻÿ� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	avg = (num1 + num2 + num3) / 3;
	switch (avg / 10)  // ������ ��հ��� 10���� ���� ��հ� ���� �ڸ����� 10~9�� A, 80�̻��� B, 70�̻��� C, 5~6�� F 
	{
	case 10: case 9:
		printf("A ����Դϴ�. \n");
		break;
	case 8:
		printf("B ����Դϴ�. \n");
		break;
	case 7:
		printf("C ����Դϴ�. \n");
		break;
	case 6: case 5:
		printf("D ����Դϴ�. \n");
		break;
	default:
		printf("F ����Դϴ�. \n");
		break;
	}
	return 0;
}