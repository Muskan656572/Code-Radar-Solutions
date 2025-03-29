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
        int sum=0;
        if(z<0){
            z=z+2*z;
        }
        while(z!=0){
            int r=z%10;
            sum+=r;
            z=z/10;
        }
        printf("%d ",sum);
    }
    return 0;
}