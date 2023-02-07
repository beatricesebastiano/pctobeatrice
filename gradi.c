#include <stdio.h>

int main()
{
float celsius;
float kelvin;
float fahrenheit;

printf("inserisci una temperatura\n");
scanf("%f",&celsius);

if(celsius<-273.15)
{
    printf("errore");
}
else
{
    fahrenheit= celsius*9/5+32;
    kelvin= celsius+32;
    printf("la temperatura in f è %f",fahrenheit);
    printf("la temperatura in k è %f",kelvin);
}









}