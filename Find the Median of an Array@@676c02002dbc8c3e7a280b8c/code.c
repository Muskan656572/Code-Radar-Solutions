#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
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
    if(n%2!=0){
        printf("%d",arr[n/2]);
    }
    else{
        int avg=(arr[(n-1)/2]+arr[(n/2)])/2;
        printf("%d",avg);
    }
    return 0;

}
