#include <stdio.h>

int main(void)
{
	char a;

	printf("t�� �Է��Ͻÿ�. : ");
	scanf_s("%c", &a, sizeof(a));

	if (a == 't')
		printf("�ùٸ��� �Է��ϼ̽��ϴ�.\n");
	else
		printf("�߸� �Է��ϼ̽��ϴ�.\n");

	return 0;

}