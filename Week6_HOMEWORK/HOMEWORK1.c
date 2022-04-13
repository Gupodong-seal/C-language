#include <stdio.h>

int main(void)  // HOMEWORK1
{
	int num1, num2, result;
	printf("두 수를 입력하시오 : ");
	scanf_s("%d %d", &num1, &num2);

	result = num2 > num1 ? num2 - num1 : num1 - num2;  // num2가 num1보다 크다면 num2-num1을 계산, 아니라면 num1-num2 계산
	printf("%d", result); // result 출력

	return 0;
}
