#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//개념확인 과제// 

int main(void)
{
	int num1;
	int num2;
	int result1;
	int result2;
	int result3;

	printf("Input two integers:");
	scanf("%d", &num1);
	scanf("%d", &num2);

	result1 = num1 & num2;
	result2 = num1 | num2;
	result3 = num1 ^ num2;

	printf("%d & %d = %d\n", num1, num2, result1);
	printf("%d | %d = %d\n", num1, num2, result2);
	printf("%d ^ %d = %d\n", num1, num2, result3);

	return 0;
}
