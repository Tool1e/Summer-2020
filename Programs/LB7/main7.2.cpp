#include"iostream" 
#include"conio.h" 
#include"locale.h" 
#include"stdlib.h" 
#include<time.h> 
 
  
 
long double fanky(long double x); 
long double fanka(long double y, int n, int m);
using namespace std; 
 
int main() {  
setlocale(LC_ALL,"UKR"); 
int n,m; 
long double y,c[4][4],x,a,sum; 
cout<<"x= "; 
cin>>x; 
y=fanky(x); 
cout<<"Nachalniy massiv"<<endl; 
for(n=1,c;n<=4;n++)
{ 
cout<<n<<" "; 
for(m=1,c;m<=4;m++)
{ 
a=fanka(y,n,m); 
c[n][m]=a; 
cout<<c[n][m]<<" ";
} 
cout<<endl; 
} 
cout<<"Massiv pislya zaminu"<<endl; // якщо вона присутня
for(n=1,c;n<=4;n++)
{ 
cout<<n<<" "; 
for(m=1,c;m<=4;m++) 
{ 
a=fanka(y,n,m); 
c[n][m]=a; 
if(c[n][m]==0) 
c[n][m]=1; 
cout<<c[n][m]<<" "; 
} 
cout<<endl; 
} 
cout<<"Etapu sumuvanya"<<endl; // для спрощення тестування
for(n=1,sum=0,c;n<=4;n++) 
{
for(m=4,c;m>=n;m--) 
{ 
a=fanka(y,n,m); 
c[n][m]=a; 
sum+=a; 
cout<<sum<<endl; 
} 
} 
cout<<" "<<endl; 
cout<<"Suma elementiv pid diagonallyu = "<<sum<<endl; 
system("pause"); 
} 
long double fanky(long double x)
{ 
return(7.4*(x)+(5.7*x-3+((4*x)))/((x-1.2)*(x+3.5))); 
} 
long double fanka(long double y, int m, int n) 
{ 
return(y*2*m+16*n); 
}

