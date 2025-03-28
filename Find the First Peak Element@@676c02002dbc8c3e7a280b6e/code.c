#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        if(i==0){
            if(arr[i] > arr[i+1]){
                printf("%d",arr[i]);
                break;
            }
           
            
        }
        else if(i==N-1){
            if(arr[i] > arr[i-1]){
                printf("%d",arr[i]);
            }
            
        }
        else{
            if(arr[i-1] < arr[i] && arr[i] > arr[i+1]){
                printf("%d",arr[i]);
                break;
            }
        }
    }
    if(i==N){
        printf("%d",-1);
    }
    return 0;
}