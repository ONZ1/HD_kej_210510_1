#include "change.h"

void main() {
	int number[5] = { 10,20,30,40,50 };
	int* num = number;

	printf("���� �迭:");
	out(number);

	SwapCallByReference(num, input());
	
	printf("���� �� �迭:");
	out(number);

	fgetc(stdin);
}