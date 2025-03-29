#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        int b=arr[i+1];
        for(int j=i+2;j<n;j++){
            if(arr[j] < b){
                b=arr[j];
            }
        }
        int temp=arr[i];
        arr[i]=b;
        b=temp;
    }
    if(arr[i] != arr[i+1]){
        printf("%d",arr[i+1]);
    }
    else{
        printf("%d",-1);
    }
    return 0;
}