#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int cnt=0;
    for(int i=0;i<N;i++){
        if(arr[i]==0){
            cnt++;
        }
    }
    for(int j=0;j<cnt;j++){
        for(int i=0;i<N-1;i++){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
}