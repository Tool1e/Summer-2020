#include <stdio.h>
#include <stdlib.h>
#include <math.h>
             
void Sum(int *a, int n) {  //функція знаходження сліду матриці 
int i1,j1,i2,j2,l;
float max,min;
    max=0;
    for (i1=1; i1<=n; i1++)
    for (j1=1; j1<=n; j1++)
       if(*(a+i1*n+j1)>max)
       max=(*(a+i1*n+j1));
    printf("\nmax element > %0.1f",max);
    }    
int main ()
{
    int *c,i,j,n;
    scanf("%d", &n);
    c =(int *)malloc(n*n*sizeof(int));  // виділяю пам'ять на масив
for(i=1; i<=n; i++)
{printf("\n");
for (j=1; j<=n; j++){
*(c + i*n + j)=rand()%9;
printf("%d ",*(c+i*n+j));}}
Sum(c,n);
return 0;}
 


