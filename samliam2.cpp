#include<stdio.h> 
int main() 
{
    int row;

  
    scanf("%d", &row);


    for(int i = 1; i <= row; i++)
    {   
       
        for(int space = 0; space <= row - i; space++)
        {
            printf("  ");
        }

       
        for(int k = 1; k <= i * 2 - 1; k++)
        {
            printf("* ");
        }               

        printf("\n");
    }

    return 0;
}
