#include<stdio.h>

int main()
{
  int a[3][3];
  int b[3][3];
  int i,j;
  int m=1;
  int n=9;
  for(i=0; i<3; i++){
      for(j=0; j<3; j++){
         a[i][j]=m;
         m++;
      }
  }
  printf("Matrix a:\n");
  for(i=0; i<3; i++){
      for(j=0; j<3; j++){
         printf("%d ",a[i][j]);
      }
      printf("\n");
  }
 for(i=0; i<3; i++){
      for(j=0; j<3; j++){
         b[i][j]=n;
         n--;
      }
  }
  printf("Matrix b:\n");
  for(i=0; i<3; i++){
      for(j=0; j<3; j++){
         printf("%d  ",b[i][j]);
      }
      printf("\n");
  }
  int c[3][3];
  for(i=0; i<3; i++){
      for(j=0; j<3; j++){
         c[i][j]= a[i][j] + b[i][j];
      }
  }
  printf("Addition of Matrix A and Matrix B:\n");
  for(i=0; i<3; i++){
      for(j=0; j<3; j++){
          printf("%d ", c[i][j]);
      }
      printf("\n");
  }
    return 0;
}