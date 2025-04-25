#include <iostream>
using namespace std;

void findLetterPosition(string str, int a) {
   
   for (int i = 0; i < a; i++) {
      cout<<(str[i] & 31) << " ";
   }
}


int main() {

int p ;
cout << "Enter a prime number: ";
cin >> p;

int q ;
cout << "Enter another prime number: ";
cin >> q;

int m ;
cout << "Enter another prime number: ";
cin >> m;

int n ;
cout << "Enter another prime number: ";
cin >> n;

float sum1 , sum2 , sum3 , sum4 , sum5 , sum6 , sum7, sum8 , fv ;


sum1 = p*m ;
sum2 = q*n ;
sum3 = sum1 + sum2 ;
sum4 = m*n;
sum5 = n*p;
sum6 = p*q;
sum7 = sum5/sum6;
sum8 = sum4 + sum7;
fv = sum3/sum8;

cout << fv << "\n" ;//hid afterwards

string enci;
cout << "Enter txt to be encrypted: ";
cin >> enci;
string str = enci ;
   int a = str.length();
   findLetterPosition(str, a);
   //list<string> pl = { findLetterPosition(str, a);};


return 0;
}
