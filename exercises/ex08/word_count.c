/* SoftSys Exercise 8

Author: David Papp

C program that uses Glib to read in a text file and count the frequency of each word.
*/

#include <stdio.h>
#include <stdlib.h>
#include <glib.h>

void iterator(gpointer key, gpointer value, gpointer user_data) {
 	printf(user_data, (char*) key, (int*) value);
}

int main(int argc, char** argv) {
	char* text_file = "test.txt"; // This could be modified to be passed in from the command line.
    GHashTable* hash = g_hash_table_new(g_str_hash, g_str_equal);
    gchar* file;
    g_file_get_contents(text_file, &file, NULL, NULL);
 	//file = g_strdelimit(file, "^a-z]", ' '); // Could use this as a delimiter for punctaiton.
    gchar** word = g_strsplit(file, " ", -1);

    // Iterate through each word
    while(*word) {
    	gpointer val = g_hash_table_lookup(hash, *word);
    	if (val) {
    		g_hash_table_replace(hash, *word, (gpointer) val + 1);
    	}
    	else {
    		g_hash_table_insert(hash, *word, (gpointer) 1);
    	}
    	word++;
    }

    g_hash_table_foreach(hash, iterator, "Freq of %s is %d\n");
    g_free(file);
    g_free(hash);
    
    return 0;
}
