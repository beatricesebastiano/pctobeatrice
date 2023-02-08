#include <stdio.h>
int main()
{
int annodinascita;
printf("quando sei nato?\n");
scanf("%d",&annodinascita);


if (annodinascita>1969)
{
    printf("sei nato %d anni dopo l'allunaggio\n", annodinascita-1969);
}
else if (annodinascita<1969)
{
    printf("sei nato %d prima dell'allunaggio\n", 1969-annodinascita);
}
else 
{
printf("sei nato lo stesso anno dell'allunaggio\n");
}





}