#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=N-1;j>=0;j--){
        for(int i=0;i<i;i++){
            if(arr[i] > arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d",arr[N-2]);

}