#include <stdio.h>

int temp[5] = { NULL };

int* input() {

	printf("\n");
	int* ptr = nullptr;
	ptr = temp;

	for (int i = 0; i < 5; i++)
	{
		printf("�迭�� �����մϴ�. [%d]�� �� ������ �Է����ּ���:", i);
		scanf_s("%d", ptr+i);
	}
	printf("\n");

	return ptr;
}
void SwapCallByReference(int* a, int* b) {
	for (int i = 0; i < 5; i++)
	{
		int temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}
void out(int number[]) {
	for (int i = 0; i < 5; i++)
	{
		printf("%d, ", number[i]);
	}
	printf("\n");
}
