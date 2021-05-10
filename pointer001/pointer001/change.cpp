#include <stdio.h>

int temp[5] = { NULL };

int* input() {

	printf("\n");
	int* ptr = nullptr;
	ptr = temp;

	for (int i = 0; i < 5; i++)
	{
		printf("배열을 변경합니다. [%d]에 들어갈 정수를 입력해주세요:", i);
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
