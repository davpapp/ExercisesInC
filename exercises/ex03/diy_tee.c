
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//int main() {
int main(int argc, char *argv[]) {

	char ch;
	int count = 2;
	int first_file = 1;
	char type = 'w';

	while ((ch = getopt(argc, argv, "a")) != EOF) {
		switch(ch) {
			case 'a':
				type = 'a';
				count = 1;
				first_file = 0;
				break;
			default:
				fprintf(stderr, "Unknown option '%s'\n", optarg);
				return 1;
		}
		argc -= optind;
		argv += optind;
	}

	
	for (count; count < argc; count++) {
		FILE *in_file = fopen(argv[first_file], "r");
		char word[20];
		/* With this approach, the input file is opened and closed for each
		file that needs to be written. It would be more efficient to keep 
		each file open at all times (in some array) and only open and close
		each one once. However, I did not implement this due to time 
		constraints.
		*/

		FILE *out_file;
		if (type == 'w') {
			out_file = fopen(argv[count], "w");
		}
		else {
			out_file = fopen(argv[count], "a");
		}
		while(fscanf(in_file, "%20s", word) == 1) {
			/*
			This was the easiest way I found to copy the contents of 
			the input file to the output file. However, this misses
			line breaks.
			*/
			fprintf(out_file, "%s ", word);
		}

		fclose(out_file);
		fclose(in_file);
	}

	return 0;
}

"""
Reflection:
3) One thing that slowed me down was the fact that the indexing for argv[] depends on whether there 
is an option entered. I did not notice this at first, and this created many corrupt files. I implemented a 
solution that likely is not the most elegant.
Another thing that slowed me down was reading and opening files. I wasn't sure how to copy the contents besides
reading each word and writing it. Also, in my solution, I open, close, and reopen the input file a number of times.
A more elegant approach would be to open all files simultaneously, store them in an array of pointers, and iterate 
the words in the input file. This would eliminate the need to close and reopen the input file.

4) I couldn't find the source code for the real tee.c, just the documentation. The real tee has more options and better 
error checking. My solution is scrappy in comparison and relies on a few hacks to get it working. 
"""
