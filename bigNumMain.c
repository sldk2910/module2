#include <stdio.h>
#include <stdlib.h>

#include "bigNumber.h"

int main()
{
	struct BigNumber* obj = NULL;

	FILE* f;

	fopen_s(&f, "number.txt", "r");

	obj = BigNumberFileContructor_1(f, 100);


	/*BigNumberPrint(obj);
	fclose(f);
	return 0;*/



}