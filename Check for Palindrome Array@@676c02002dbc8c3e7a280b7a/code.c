#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int j=0,k=N-1,find=1;
    while(j<k){
        if(arr[j] != arr[k]){
            printf("NO");
            find=0;
            break;
        }
        j++;
        k--;
    }
    if(find){
        printf("YES");
    }
    return 0;
}