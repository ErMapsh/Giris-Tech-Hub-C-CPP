#include<stdio.h>
#include<conio.h>

void main(){
	int a, b, c;
	clrscr();
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	c = a%b;
	printf("Reminder is %d", c);
	getch();
}