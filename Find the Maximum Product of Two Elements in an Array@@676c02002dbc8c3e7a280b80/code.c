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
    for(int i=0;i<n-1;i++){
        int pro=arr[i]*arr[i+1];
        ans=(pro>ans)? pro:ans;
    }
    printf("%d",ans);
    return 0;
}