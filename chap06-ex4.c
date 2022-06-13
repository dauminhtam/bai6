#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf ("A string is variuos form:\n");
	printf ("without any fomat command:\n");
	printf ("Good Day Mr. Lee.\n");
	printf ("With fomat command but without any modifier:\n");
	printf ("[%s]\n", "Good Day Mr. Lee.");
	printf ("With digit string 4 as modifier:\n");
	printf ("[%4s]\n", "Good Day Mr. Lee.");
	printf ("With digit string 19 as modifier:\n");
	printf ("[%19s]\n", "Good Day Mr. Lee.");
	printf ("With digit string 23 as modifier:\n");
	printf ("[%23s]\n", "Good Day Mr. Lee.");
	printf ("With digit string 25.4 as modifier:\n");
	printf ("[%25.4s]\n", "Good Day Mr. Lee.");
	printf ("With - and digit string 25.4 as modifier:\n");
	printf ("[%-25.4s]\n", "Good Day Mr. Lee.");
	return 0;
}
