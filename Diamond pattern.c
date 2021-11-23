#include<stdio.h>
int main()
{
    int num,row,col;
    printf("Enter an integer number :");
    scanf("%d",&num);
    row =1;
    do{
        for(col=1;col<=num-row;col++)
             printf(" ");
             for(col=1;col<=2*row-1;col++)
                printf("*");
             printf("\n");
             row++;
    }while(row<=num);
    row = num-1;

       do{
        for(col=1;col<=num-row;col++)
             printf(" ");
             for(col=1;col<=2*row-1;col++)
                printf("*");
             printf("\n");
             row--;
    }while(row>=1);


    getch();
}
