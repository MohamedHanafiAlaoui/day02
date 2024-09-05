#include <stdio.h>

int main()
{
    int n;
    int i;
    int max;


    printf("enter  le nombre d'éléments n = ");
    scanf("%d",&n);
    int Ele[n];
    i = 0;
    while (i < n)
    {
        printf("entre Ele[%d] = ",i);
        scanf("%d",&Ele[i]);
        i++;
    }

    i = 0;
    max = Ele[i];
    while (i < n)
    {
        if(Ele[i] > max)
        max = Ele[i];
        i++;
    }
   printf("%d",max);
	return 0;
}