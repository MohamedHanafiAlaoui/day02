#include <stdio.h>

int main()
{
    int n;
    int i;
    int min;


    printf("enter  le nombre d'elements n = ");
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
    min = Ele[0];
    while (i < n)
    {
        if(Ele[i] < min)
        min = Ele[i];
        i++;
    }
    printf("%d",min);
	return 0;
}