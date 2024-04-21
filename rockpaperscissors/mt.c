#include<stdio.h>
int main()
{
    int a[]={7,0,1,3,6,2,5,4};
    int n=sizeof(a)/sizeof(int);
    int key,count=0;
    for(int i=1;i<n;i++)
    {
        key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
            count++;
        }
        a[j+1]=key;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    printf("\n%d",count);
}