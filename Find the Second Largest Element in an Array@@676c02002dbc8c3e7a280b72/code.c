#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    if(N==1){
        printf("%d",-1);
    }
    else{
    for(int j=N-1;j>=0;j--){
        for(int i=0;i<j;i++){
            if(arr[i] > arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j] = temp;
            }
        }
    }
    if(arr[N-2]!=arr[N-1])
    {
        printf("%d",arr[N-2]);
    }
    else{
        printf("%d",-1);
    }
    }
}