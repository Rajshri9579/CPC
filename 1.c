
#include <stdio.h>
#include<stdlib.h>
int main() {
char arr[10];
for(int i=0;i<10;i++)
{
    printf("enter string no %d ",i+1);
    scanf("%s",&arr[i]);
}
for(int i=0;i<10;i++)
{
    printf("Reverse of String %s is :%s",arr[i],strrev(arr[i]));
}
    return 0;
}