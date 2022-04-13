#include <stdio.h>

int main(void) // HOMEWORK2
{
	int num1, num2, num3, avg;
	printf("국영수 성적을 순서대로 입력하시오 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	avg = (num1 + num2 + num3) / 3;
	switch (avg / 10)  // 국영수 평균값을 10으로 나눠 평균값 십의 자리수가 10~9은 A, 80이상은 B, 70이상은 C, 5~6은 F 
	{
	case 10: case 9:
		printf("A 등급입니다. \n");
		break;
	case 8:
		printf("B 등급입니다. \n");
		break;
	case 7:
		printf("C 등급입니다. \n");
		break;
	case 6: case 5:
		printf("D 등급입니다. \n");
		break;
	default:
		printf("F 등급입니다. \n");
		break;
	}
	return 0;
}