#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int b=arr[0];
    for(int i=1;i<N;i++){
        if(arr[i] < b){
            b=arr[i];
        }
    }
    printf("%d ",b);
    b=arr[0];
    for(int i=1;i<N;i++){
        if(arr[i] > b){
            b=arr[i];
        }
    }
    printf("%d",b);
    return 0;
}