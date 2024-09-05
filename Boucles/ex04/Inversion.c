# include <stdio.h>

int main()
{
    int n;
    int s ;
    printf ("enter namber n");
    scanf("%d",&n);
    while (n != 0)
    {
       s = n % 10;
       printf("%d",s);
       n /= 10;
       
    }
    

}