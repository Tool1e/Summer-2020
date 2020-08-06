#include <iostream>
using namespace std;
double MIN(double c[5][6], int& imin, int& jmin)
{
double min=c[0][0];
imin=jmin=0;
for(int i=0; i<5; i++)
for(int j=0; j<6; j++)
if(c[i][j]<min)
{ min=c[i][j];
imin=i; jmin=j;
}
imin++; jmin++;
return min;
}
int main ()
{
setlocale(0,".1251");
double c[5][6], m;
int i, j, ind_i, ind_j;
cout<<"Vvedit matritsu iz 5-ryadkiv and 3-stovptsiv:"<<endl;
for(i=0; i<5; i++)
for(j=0; j<6; j++) cin>>c[i][j];
m = MIN(c, ind_i, ind_j);
cout<< "\n Min elem " << m << "\n Located at "
<< ind_i <<" ryadku\n" << ind_j <<" stovptsi\n" << endl;
system ("pause>>void");
return 0;
}

