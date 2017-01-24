/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int *foo() {
    int i;
    int array[SIZE];

    printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
	   array[i] = 42;
    }
    return array;
}

void bar() {
    int i;
    int array[SIZE];

    printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
	   array[i] = i;
    }
}

int main()
{
    int i;
    int *array = foo();
    bar();

    for (i=0; i<SIZE; i++) {
	   printf("%d\n", array[i]);
    }

    return 0;
}

/*
1.
Foo returns a pointer to an int array of size 5 with values 42.
Bar creates an int array with each value being the index. I'm not sure whether this will overwrite
the array from foo, or whether the compiler will find a new place in memory to create the array.
Finally, the values of the array (as returned by foo) are printed inside main. 


2. 
Warning "Function returns address of local variable".
This error exists because array is local inside foo, so the array might be deconstructed after its pointer is returned.
This might produce weird behavior.

3.
Output:
0x7ffe56eba4e0
0x7ffe56eba4e0
0
1
2
3
4

Foo returned the pointer to an int array of size 5 with values 42 and assigned it to the variable name array.
However, when we called bar(), bar created another array that overrode the same location in memory. As a result,
bar contains the values 0, 1, 2, 3, 4 rather than 42s. When line 40 is commented out, the array contains elements
with values 42.

4. 
Output:
0
0
622034560
32520
622122288

5. 
Without the printf statements, the first elements of the array are 0 and the next 3 seem to be random.
*/