#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int k,find=0;
    scanf("%d",&k);
    for(int i=0;i<N;i++){
        if(arr[i]==k){
            printf("%d",i);
            find=1;
            break;
        }
    }
    if(find==0){
        printf("%d",-1);
    }
    return 0;
}