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
    int cnt=1,find=0;
    for(int i=0;i<=N-1;i++){
        if(arr[i]+1 == arr[i+1]){
            cnt++;
            find=1;
        }
    }
    printf("%d",cnt);

    return 0;
}