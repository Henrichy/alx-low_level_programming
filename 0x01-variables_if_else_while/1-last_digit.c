#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastdigit = n % 10;
	if (lastdigit>5){
	    printf("and is greater than 5 %d\n");
	}else if(lastdigit==0){
	    printf("and is zero %d\n");
	}else if(lastdigit!=0 && lastdigit<6){
	    printf("and is less than 6 and not 0 %d\n");
	}
	return (0);
}
