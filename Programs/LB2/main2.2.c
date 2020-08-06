#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
int L[100][100],i,j,l,min,max,a,b,iv,jv;
printf("Vvedit mas L(10)\n");
min=100;
max=L[1][1];
l=1;
for (i=1;i<=1;i++){
for (j=1;j<=10;j++){
L[i][j]=l;
printf("%d ",L[i][j] );
l++;}
printf("\n");}

for (i=1;i<=1;i++)
for (j=1;j<=10;j++)
if(L[i][j]<min){
 min=L[i][j];
a=i;
b=j;}

for (i=1;i<=1;i++)
for (j=1;j<=10;j++)
if(L[i][j]>max)
{max=L[i][j];
iv=i;
jv=j;}

L[iv][jv]=min;
L[a][b]=max;

for (i=1;i<=1;i++){
for (j=1;j<=10;j++)
{printf("%d ",L[i][j]);}
printf("\n");}
	return 0;}
