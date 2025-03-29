#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        int b=arr[i+1];
        for(int j=i+2;j<n;j++){
            if(arr[j] > b){
                b=arr[j];
            }
        }
        arr[i]=b;
    }
    arr[n-1]=-1;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}