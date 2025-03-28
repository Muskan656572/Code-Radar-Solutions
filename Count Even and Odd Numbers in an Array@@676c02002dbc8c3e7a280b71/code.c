#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int ec=0,oc=0;
    for(int i=0;i<N;i++){
        if(arr[i]%2==0){
            ec++;
        }
        else{
            oc++;
        }
    }
    printf("%d %d",ec,oc);
    return 0;
}