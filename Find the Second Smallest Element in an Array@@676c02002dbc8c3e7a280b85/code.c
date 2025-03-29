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
        int i=0;
        while(i!=j){
            if(arr[i] > arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
            i++;
        }
    }
    int find=0;
    for(int i=0;i<N-1;i++){
        if(arr[i] != arr[i+1]){
            printf("%d",arr[i+1]);
            find=1;
            break;
        }
    }
    if(find==0){
        printf("%d",-1);
    }

    
    return 0;
}