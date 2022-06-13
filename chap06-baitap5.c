#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ho[40], ten[40];
	printf ("hay nhap vao ten: ");
	scanf ("%[^\n]s", ten);
	printf ("\nhay nhap vao ho: ");
	fflush(stdin);
	scanf ("%[^\n]s", ho);
	printf ("\nho va ten la: %s %s ", ho, ten);
	return 0;
}
