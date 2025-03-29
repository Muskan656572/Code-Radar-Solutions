#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int cnt=0;
    for(int i=0;i<N;i++)
    {
        int z=arr[i];
        if(z<0){
            z=-z;
        }
        int rev=0;
        while(z!=0){
            int r=z%10;
            rev=rev*10+r;
            z=z/10;
        }
        if(arr[i]==rev){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
    
    return 0;
}