#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
        printf("%d",arr[0]);
    }
    for(int i=0;i<n-1;i++){
        int find=0;
        int b=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j] > b){
                b=arr[j];
                find=1;
            }
        }
        if(find==1){
            printf("%d ",b);
        }
    }
    printf("%d",arr[n-1]);
    return 0;
}