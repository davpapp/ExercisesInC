# Chapter 5 Reading Questions
### by David Papp

####1) Suppose you have the value 128 stored as an unsigned 8-bit number. What happens if you convert it to a 16-bit number and accidentally apply sign extension?
128 is b10000000 as an unsigned 8 bit. If we apply sign extension, it would produce b1111111110000000 in 16 bits.
This is because sign extension copies the leftmost bit (1 in this case) and extends the number from the left with this bit.

####2) Write a C expression that computes the two's complement of 12 using the XOR bitwise operator. Try it out and confirm that the result is interpreted as -12.
int y = 12 ^ 32676 + 1; // Assuming an 8 bit int

####3) Can you guess why IEEE floating-point uses biased integers to represent the exponent rather than a sign bit or two's complement?
The bias allows the exponent to be represented as if it was an unsigned integer. This allows high speed comparisons.

####4) Following the example in Section 5.4, write the 32-bit binary representation of -13 in single precision IEEE floating-point. What would you get if you accidentally interpreted this value as an integer?
sign: 1
exponent: 130 (3 + 127 offset): 10000010
coefficient: 10100000000000000000000
11000001010100000000000000000000
Interpreting this as an integer would read 3243245568.


####5) Write a function that takes a string and converts from lower-case to upper-case by flipping the sixth bit.
As a challenge, you can make a faster version by reading the string 32 or 64 bits at a time, rather than one character at a time. This optimization is made easier if the length of the string is a multiple of 4 or 8 bytes.

char str[] = "teststring";
int *p = str;

while (*p != '\0') {
	// 64 = 100000
	p = p ^ 64;
}
