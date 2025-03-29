#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            ans=(arr[i]:ans)? arr[i]:ans;
        }
    }
    printf("%d",ans);
    return 0;
}