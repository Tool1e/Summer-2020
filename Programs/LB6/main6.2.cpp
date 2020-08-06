    #include <iostream>
    #include <string.h>
    #include <locale.h>
 
    
    
using namespace std; 
int main(){   
setlocale(LC_ALL, "UKR");
string str_fio;
char fio[50];
char otch[50];  
int a = 0, n = 0, n2 = 0, x = 0;
bool c = false;  
cout << "Vvedit Prizviche Imya po Batkovi" << endl;   
cin.getline(fio, 50);    
for (int i = 0; i < 50; i++){
if (fio[i] == 'a' || fio[i] == 'A')
a++;}
for (int i = 2; i < 50; i++){
 if (isupper(fio[i]) == true){
c = true;   
n = i;};
if (c == true) break;}
c = false;
for (int i = n + 1; i < 50;i++){
if (isupper(fio[i]) == true){
c = true;
n2 = i;}
if (c == true) break;}
for (int i = n2; i < 50; i++){
otch[x] = fio[i];
x++;}
str_fio = fio;
int pos1 = str_fio.find(" ", 2);
int pos2 = str_fio.find(" ", pos1 + 1);
string str_name = str_fio.substr(pos1 + 1, pos2 - pos1);
int n_name = str_name.length();
char ppp = '!';
str_fio.push_back(ppp);
int pos3 = str_fio.find("!", pos2);
str_fio.erase(pos3, 1);
string str_last_name = str_fio.substr(pos2 + 1, pos3-pos2);
cout << endl;
cout << "Your Prizviche Imya po Batkovi = " << fio << endl;
cout << "Dovzhina ryadka = " << strlen(fio) << endl;
cout << "Kkilkist bukv A/a = " << a << endl;
cout << endl;
cout << "" << endl;
cout << "Kkilkist simvoliv at your name = " << ((n2 - n) - 1) << endl;
cout << "Vas po Batkovi = " << otch << endl;
return 0;}

