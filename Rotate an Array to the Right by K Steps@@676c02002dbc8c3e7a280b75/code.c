#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int z=0;z<k;z++){
        for(int i=N-1;i>=0;i--){
            for(int j=0;j<i;j++){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}