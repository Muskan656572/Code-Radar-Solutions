#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int j=0,k=N-1;
    while(j!=k){
        if(arr[j] != arr[k]){
            printf("NO");
            break;
        }
        j++;
        k--;
    }
    if(k==j){
        printf("YES");
    }
    return 0;
}