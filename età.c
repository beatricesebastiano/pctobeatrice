#include <stdio.h>

int main()
{
int a;

printf("inserisci un numero\n");
scanf("%d", &a);
if (a>18)
{
printf("l'utente è maggiorenne\n");
}
else if (a<18)
{
    printf("l'utente è minorenne\n");
}

}