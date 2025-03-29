#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int val,cnt=0;
    scanf("%d",&val);
    for(int i=0;i<n;i++){
        if(arr[i]>val){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}