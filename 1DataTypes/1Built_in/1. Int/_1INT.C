#include<stdio.h>
#include<conio.h>

int main(){
	int a, b, c; // allcating memory in ram, we can also called that declaration of variable

	/* clearing the previous console screen, 
	usually we use this in TURBO c++ but not here no need */
	// clrscr(); 

	printf("Enter a: ");
	scanf("%d", &a); /* getting input from user, input should be compatible with fromat specifier
	and that input addressing to varible location using ampersand operator(&) */

	printf("Enter b: ");
	scanf("%d", &b);

	c = a%b; // operand opearator operand 
	printf("Reminder is %d", c);

	/* after execution of program, we have to press any key to exit console, this all. in another word getch() pauses the Output Console until a key is pressed */
	//getch(); 


	return 0;
}