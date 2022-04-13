#include <stdio.h>

int main(void)
{
	int A, Z;
	int result;
	for (A = 0; A < 10; A++)  // A는 0부터 9까지 1씩 증가
	{
		for (Z = 0; Z < 10; Z++) // Z는 0부터 9까지 1씩 증가
		{
			if (A == Z) 
				continue;  // A와 Z가 같다면 아래 코드 실행
			result = (A * 10 + Z) + (Z * 10 + A);
				if (result == 99) // 결과값이 99라면 출력
					printf("%d%d+%d%d=%d \n", A, Z, Z, A, result);
		}
	}
	return 0;
}