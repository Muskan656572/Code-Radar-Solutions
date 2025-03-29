#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
        printf("%d",arr[0]);
    }
    for(int i=0;i<n-1;i++){
        int find=1;
        for(int j=i+1;j<n;j++){
            if(arr[i] < arr[j]){
                find=0;
                break;
            }
        }
        if(find==1)
            printf("%d ",arr[i]);
    }
    printf("%d",arr[n-1]);
    return 0;
}