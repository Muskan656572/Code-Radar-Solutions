#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int cnt=1;
    for(int i=0;i<N;i++){
        int find=0;
        if(arr[i]==2 || arr[i]==1){
            cnt++;
        }
        else{
            for(int j=2;j<arr[i];j++){
                if(arr[i] % j == 0 ){
                    find=1;
                }
            }
            if(find==0){
                cnt++;
            }
        }
    }
    printf("%d",cnt);
}