#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int x = 5;
    int y = x + 1;
    printf("%i\n", y);

    /*
	I could not get the optimization to work using the flag -02,
	so I can't comment on how the optimization works.
	My guess is that since the program recognizes that x is never used,
	y points to X's memory in location and increments it.
    */
}