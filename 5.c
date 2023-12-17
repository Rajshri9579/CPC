#include<stdio.h>

int main()
{
    int a[5];
    int b[5];
    int c[5];
    int i; 
    for(i=0; i<5; i++){
    a[i] = i+100;
    }
    printf(" value of array 1:\n");
    for(i=0; i<5; i++){
    printf("%d\n",a[i]);
    }
    for(i=0; i<5; i++){
    b[i] = i+200;
    }
    printf(" value of array 2:\n");
    for(i=0; i<5; i++){
    printf("%d\n",b[i]);
    }
    for(i=0; i<5; i++){
    c[i] = a[i] + b[i];
    }
    printf(" value of array 2:\n");
    for(i=0; i<5; i++){
    printf("%d\n",c[i]);
    }
    
    
    return 0;
}