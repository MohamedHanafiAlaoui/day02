#include <stdio.h>

int main()
{
    int a;
    int b;
    

        for (int  i = 0; i < 7; i++)
        {
           a = 6 - i ;
           b = 6 + i ;
            for (int j = 0; j < 14; j++)
            {
                if (a <=j && j <= b)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }               
            }
            printf("\n");    
        }
    return 0;
}
