
#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;
int main(){
setlocale(LC_ALL, "UKR");
int n, k, max = 0, min = 0, a, b;
int d[10][10];
for (int i = 1; i <= 6; i++){
for (int f = 1; f <= 5; f++){
d[i][f] = rand() % 210;
cout << d[i][f] << "\t";
if (f == 1) {
max = d[i][f];
min = d[i][f];}
if (i == 1) {
if (max > d[i][f]) {
max = d[i][f];
a = f;}
if (min < d[i][f]) {
min = d[i][f];
b = f;}}}
cout << endl;}
cout << "Kandidat yakiy nabrav minimalnu kilkist baliv -- " << b << endl;
cout << "Kandidat yakiy nabrav maksimalnu kilkist baliv -- " << a << endl;
return 0;}
