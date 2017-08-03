#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
 
int main () {
 
int t ;
 cin >> t ;
for (int i=0; i<t; i++) {
   long long int m;
   cin >> m ;
 
     vector<int>x;
     vector<int>y;
     for (int j=0; j<m; j++)
     {
        int a;
         cin >> a;
         x.push_back(a);
     }
     for (int k=0; k<m; k++)
     {
 
       int b;
       cin >> b;
       y.push_back(b);
     }
 
  long long int p=0;
  long long int q=0;
  long long int r=0;
  long long int s=0;
int g,h;
  for( g=0; g<m; g++) {
    if (g%2 == 0) {
    p = p + x[g];
  }else {
    r=r+x[g];
  }
  }
for ( h=0; h<m; h++) {
  if (h%2 == 0){
    q =q + y[h];
  }else {
    s = s + y[h];
  }
 
}
int w = p+s;
int d = r+q;
 
    if (w<=d) {
      cout << w << endl;
    }else {
      cout << d << endl;
    }
 
 
}
 return 0;
 }
