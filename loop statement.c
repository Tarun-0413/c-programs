// Online C compiler to run C program online
#include <stdio.h>
void main()
{
    int n;
    printf("enter the total number of people \n");
    scanf("%d",&n);
    int sum=0;
    for(int i=(n-1); i>=1;i--)
    {
        sum=sum+i;
    }
    printf("total no.of handshakes are:%d\n",sum);
}