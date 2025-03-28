#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
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
    return 0;
}