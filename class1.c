#include <stdio.h>

#include <math.h>

int main() 
{
int value;
int valueSquared;
int difference;
char string[100];  

printf("Hello, what's your name?");

scanf("%s", string);

printf("Hi, %s, what's your age?", string);

scanf("%d", &value);

valueSquared = pow(value - 15, 2);
difference = sqrt(valueSquared);

printf("Cool, we are %d years apart", difference);

return 0;
}
