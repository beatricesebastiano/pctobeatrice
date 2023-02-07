#include <stdio.h>

int main ()
{
 char x = 'a';
 char y= 'b';

printf("x: %c\n", x);
printf("y: %c\n", y);
printf("4\n");
scanf("%c %c", &x, &y);
printf("x: %c\n",x);
printf("y: %c\n", y); 
return (0);
}