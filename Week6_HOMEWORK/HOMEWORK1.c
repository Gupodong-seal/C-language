#include <stdio.h>

int main(void)  // HOMEWORK1
{
	int num1, num2, result;
	printf("�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &num1, &num2);

	result = num2 > num1 ? num2 - num1 : num1 - num2;  // num2�� num1���� ũ�ٸ� num2-num1�� ���, �ƴ϶�� num1-num2 ���
	printf("%d", result); // result ���

	return 0;
}
