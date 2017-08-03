#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
 
int main () {
 
int t;
cin >> t;
 
for (int i=0; i<t; i++) {
  int n;
  cin >> n;
int  matrix[500][500];
 int b,c,d ;
 int e=0;
 
 for ( b=0;b<n;b++) {
   for (c=0;c<n;c++){
     cin >>d;
     matrix[b][c] = d;
     if (d==0) {
       e=e+1;
     }else {}
 
 
   }
 }
 int x = ( n )* (n-1);
  if ( e == 0) {
   cout << n-1 << endl;
 }else {
   if (e == x) {
     cout << 0 << endl;
   } else {
     if ( e == n*n ) {
       cout << 0 << endl;
     } else {
 for (int i=1; i<n; i++) {
 
   if (e < (2*i )) {
      cout << n-i << endl;
      break;
 }else {
   e = e - (2*i) ;
 }
 }
 }
 }
 
}
 
}
return 0;
}
