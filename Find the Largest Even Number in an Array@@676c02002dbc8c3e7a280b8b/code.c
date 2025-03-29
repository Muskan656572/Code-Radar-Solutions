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
    int ans=INT_MIN,find=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            ans=(arr[i]>ans)? arr[i]:ans;
            find=1;
        }
    if(find==1)
        printf("%d",ans);
    else
        printf("%d",-1);
    return 0;
}