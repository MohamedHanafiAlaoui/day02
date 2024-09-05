#include <stdio.h>

int main()
{
    int n;
    int i;
    

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
    while (Ele[i])
    {
        printf("Ele[%d] =  %d\n", i, Ele[i]);
        i++;
        
    }
    
	return 0;
}
