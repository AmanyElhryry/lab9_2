#include <stdio.h>
#include <stdlib.h>

int main()
{
int x , nth ;
printf("Enter number ");
scanf("%d",&x);
printf("Enter nth ");
scanf("%d",&nth);

printf("the %d is set to %d",nth,(x>>nth)&1);
    return 0;
}
