#include <stdio.h>
int main()
{
    int num1,num2;
    char ch;
    scanf("%d %d %ch",&num1, &num2, &ch);
    if(ch=='+'){
        printf("%d",num1+num2);
    }
    else if(ch=='-'){
        printf("%d",num1-num2);
    }
    else if(ch=='*'){
        printf("%d",num1*num2);
    }
   else if(ch=='/'){
        if(num2!=0)
            printf("%d",num1/num2);
        else
            printf("error");
    }
    else{
        printf("error");
    }
    return 0;
}