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
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                printf("%d",arr[i]);
                find=1;
                break;
            }
        }
    }
    if(find==0){
        printf("%d",-1);
    }
    return 0;
}