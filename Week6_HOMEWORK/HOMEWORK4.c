#include <stdio.h>

int main(void)
{
	int num;
	printf("0이상의 정수를 입력하시오 : ");
	scanf_s("%d", &num);

	switch (num / 10) // 입력된 정수를 10으로 나눠 0~9, 10~19, 20~29, 30~ 으로 분류
	{
	case 0:
		printf("0이상 10미만 \n");
		break;
	case 1:
		printf("10이상 20미만 \n");
		break;
	case 2:
		printf("20 이상 30미만 \n");
		break;
	default:
		printf("30 이상 \n");

	}
	return 0;
}