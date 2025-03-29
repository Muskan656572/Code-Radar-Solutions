#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int z=arr[i];
        int sum=0,x;
        if(z<0){
            x=z+2*z;
        }
        while(x!=0){
            int r=x%10;
            sum+=r;
            x=x/10;
        }
        printf("%d ",sum);
    }
    return 0;
}