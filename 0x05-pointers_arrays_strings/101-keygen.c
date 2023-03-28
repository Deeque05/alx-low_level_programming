#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - creates a password of sum 1992
 *
 * Return:0;
 */
int main(void)
{
	int keynumber, symbol, checksum;

	srand(time(NULL));
	checksum = 1992;
	keynumber = 0;

	while (keynumber < (checksum - 122))
	{
		symbol = (rand() % (122 - 97 + 1)) + 97;/*to print mostly lowercaseletters*/
		printf("%c", symbol);
		keynumber = keynumber + symbol;
	}

	symbol = checksum - keynumber;
	printf("%c", symbol);

	return (0);
}
