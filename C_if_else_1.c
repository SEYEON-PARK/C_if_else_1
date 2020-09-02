#include <stdio.h>

int main(void)
{
	char a;

	printf("t를 입력하시오. : ");
	scanf_s("%c", &a, sizeof(a));

	if (a == 't')
		printf("올바르게 입력하셨습니다.\n");
	else
		printf("잘못 입력하셨습니다.\n");

	return 0;

}