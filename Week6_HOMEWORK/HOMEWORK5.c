#include <stdio.h>

int main(void)
{
	int A, Z;
	int result;
	for (A = 0; A < 10; A++)  // A�� 0���� 9���� 1�� ����
	{
		for (Z = 0; Z < 10; Z++) // Z�� 0���� 9���� 1�� ����
		{
			if (A == Z) 
				continue;  // A�� Z�� ���ٸ� �Ʒ� �ڵ� ����
			result = (A * 10 + Z) + (Z * 10 + A);
				if (result == 99) // ������� 99��� ���
					printf("%d%d+%d%d=%d \n", A, Z, Z, A, result);
		}
	}
	return 0;
}