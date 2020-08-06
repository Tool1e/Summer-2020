#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
int i,j;
float a[100][100], max;

printf("Masyv \n");

for(i=0;i<5;i++){
for(j=0;j<5;j++){
a[i][j] = rand() % 41 -20;
printf("%0.1f ",a[i][j]);}
printf("\n");}
for(i=0;i<5;i++)
for(j=0;j<5;j++)
if(j==i)
if (a[i][j]<0)
max=a[i][j];

for(i=0;i<5;i++)
for(j=0;j<5;j++)
if(j==i)
if (a[i][j]<0)
if (a[i][j]>max)
max=a[i][j];


printf(" %0.1f ",max);
	    
		
		
	return 0;
}
