#include <stdio.h>

int main()
{
    int n;
    int i;
    int somme;

    somme = 0;
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
        somme += Ele[i];
        i++;
    }
    printf("%d",somme);
	return 0;
}