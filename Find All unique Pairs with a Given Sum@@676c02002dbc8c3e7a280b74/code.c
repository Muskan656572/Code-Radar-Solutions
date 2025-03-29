#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum;
    scanf("%d",&sum);
    for(int i=0;i<n;i++){
        if(arr[i]==-1){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("%d %d\n",arr[i],arr[j]);
                arr[i]=arr[j]=-1;
                break;
            }
        }
    }
    return 0;
}