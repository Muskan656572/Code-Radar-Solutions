#include <stdio.h>
int main()
{
    int rows;
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int j=rows-i+1;j>0;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}