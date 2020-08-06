#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a, s[100], n,i,l,k,j;
    a =(int *)malloc(n*sizeof(int));
	printf("n=");
    scanf(" %d \n",&n);
    	j=0; k=0;
    for(i=0;i<n;i++){
        scanf("%d",&*(a+i*n));
    if(i>0)    
    if(*(a+i*n)>(*(a+(i-1)*n)))
	{k++;
    s[j]=i; 
	j++;
	}}
    printf("\nk=%d\n",k);
    printf("Nomery ");
    for(j=0;j<k;j++){
    printf("%d ",s[j]);   
    }
    return 0;}
