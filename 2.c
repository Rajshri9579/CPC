
#include <stdio.h>
#include<stdlib.h>
int main() {
char arr[5]={6,3,4,8,9};
int max;
for(int i=0;i<4;i++)
{
    if(arr[i]<arr[i+1])
    max=arr[i+1];
    else
    max=arr[i];
}
printf("maximum number is : %d",max);
    return 0;
}