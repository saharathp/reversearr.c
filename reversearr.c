#include<stdio.h>
void rev(int *arr,int n)
{
for(int i=0;i<(n/2);i++)
{
    int temp;
    temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
}
}
int main(){
    int arr[]={4,5,6,3,1,9};
    rev(arr,6);
    for(int i=0;i<6;i++)
    {
        printf("The value of %d element is:%d\n",i,arr[i]);
    }
    return 0;
}