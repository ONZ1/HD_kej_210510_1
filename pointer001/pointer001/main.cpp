#include "change.h"

void main() {
	int number[5] = { 10,20,30,40,50 };
	int* num = number;

	printf("기존 배열:");
	out(number);

	SwapCallByReference(num, input());
	
	printf("변경 후 배열:");
	out(number);

	fgetc(stdin);
}