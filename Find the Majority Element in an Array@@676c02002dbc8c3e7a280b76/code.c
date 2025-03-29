#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int find=0;
    for(int i=0;i<N;i++){
        int cnt=0;
        for(int j=0;j<N;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
        if(cnt>N/2){
            printf("%d",arr[i]);
            find=1;
            break;
        }
    }
    if(find==0){
        printf("%d",-1);
    }
    return 0;

}