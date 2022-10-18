#include <stdio.h>



/**

 *main - Check the code.

 *Return: Always 0. 

 */

void print_alphabet_x10(void)

{

	int count = 0;

	char letter;



	for(count; count < 10; count++)

	{

		for (letter = 'a'; letter <= 'z'; letter++)

			putchar(letter);

		putchar('\n');

	}

}

int main(void)

{

    print_alphabet_x10();



    return(0);

}    
