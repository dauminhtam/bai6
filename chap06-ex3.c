#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf ("The nuber 555.55 in various form:\n");
	printf ("In float from without modifiers:\n");
	printf ("[%f]\n", 555.55);
	printf ("In exponential without any modifier:\n");
	printf ("[%e]\n", 555.55);
	printf ("In float from - without modifier:\n");
	printf ("[%-f]\n", 555.55);
	printf ("In float form with digit string 10.3 as modifier:\n");
	printf ("[%10.3f]\n", 555.55);
	printf ("In float form with 0 as modifier:\n");
	printf ("[%0f]\n", 555.55);
	printf ("In float form with 0 and digit string 10.3 as modifier:\n");
	printf ("[%010.3f]\n", 555.55);
	printf ("In float form - and digit string 10.3 as modifier:\n");
	printf ("[%-10.3f]\n", 555.55); 
	printf ("In exponential form 0 and digit string 10.3 as modifier:\n");
	printf ("[%010.3e]\n", 555.55);
	printf ("In exponential form - and digit string 10.3 as modifier:\n");
	printf ("[%-010.3e]\n\n", 555.55);
	return 0;
}
