#include"main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
*/

void print_alphabet(void)
{
	int chara;

	for (chara = 'a'; chara <= 'z'; ++chara)
		 _putchar(chara);
	_putchar('\n');
}
