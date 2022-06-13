#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[80];
	int basic, daper; 
	float bonper, loandet, salary;
	printf ("Ten nhan vien: ");
	scanf ("%[^\n]s", name);
	printf ("luong co ban: ");
	scanf ("%d", &basic);
	printf ("phan tram du an: ");
	scanf ("%d", &daper);
	printf ("phan tram loi tuc: ");
	scanf ("%f", &bonper);
	printf ("tien vay khau tru: ");
	scanf ("%f", &loandet);
	
	salary = basic + basic*daper/100 + bonper*basic/100 - loandet;
	printf ("salary cua %s la: %.2f\ ($)", name, salary);
	
	return 0;
}
