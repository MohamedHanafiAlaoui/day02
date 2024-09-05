# include <stdio.h>

int main()
{
    int n;
    int s = 0;
   do{
        printf("enter namber n ");
        scanf("%d",&n);
    }while (n < 0);

    for (int i = 0; i <=n; i++)
    {
       s+=i;
    }
    printf("%d",s);
    
    return 0;
    
}