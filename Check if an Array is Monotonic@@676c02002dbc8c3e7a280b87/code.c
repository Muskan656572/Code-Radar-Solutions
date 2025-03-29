#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int find=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]<=arr[i] && arr[i] <=arr[i+1]){
            find=1;
        }
        else if(arr[i]<=arr[i-1] && arr[i]>=arr[i+1] ){
            find=1;
        }
        else{
            find=0;
            break;
        }
    }
    if(find==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}