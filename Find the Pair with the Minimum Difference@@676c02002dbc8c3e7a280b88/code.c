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
    if(n==1){
        printf("%d",-1);
    }
    else{
        for(int j=n-1;j>=0;j--){
            int i=0;
            while(i!=j){
                if(arr[i] > arr[j]){
                    int temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
                i++;
            }
        }
        int ans=INT_MAX,num1,num2;
        for(int i=1;i<n;i++){
            int diff=arr[i]-arr[i-1];
            if(diff < ans){
                ans=diff;
                num1=arr[i-1];
                num2=arr[i];
            }
        }
        printf("%d %d",num1,num2);
    }
    return 0;

}