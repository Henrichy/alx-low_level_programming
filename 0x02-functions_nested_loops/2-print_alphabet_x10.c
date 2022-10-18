#include "main.h"



/**
 *main - Check the code.
 *print_alphabet_x10 - print 10 times the alphabets in lowercase.
 */

void print_alphabet_x10(void)

{

	int count = 0;

	char letter;



	for (count; count < 10; count++)

	{

		for (letter = 'a'; letter <= 'z'; letter++)

			_putchar(letter);

		_putchar('\n');

	}

}
