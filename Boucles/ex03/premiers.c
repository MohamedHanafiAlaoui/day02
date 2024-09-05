# include <stdio.h>

int main()
{
    int n ;
    printf("enter namber n = ");

    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        //printf("2");
        for (int  j = 2; j < i; j++)
        {
           if (i % j == 0 )
           {
                i++;
                j = 2;
               
           }    
        }
         printf("%d ", i);          
    }
    
    return 0;
}
