#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
 
int main () {
int t;
cin >> t ;
for (int i=0; i<t; i++) {
 int a;
 cin >> a;
 vector<int>v;
 for(int j=0; j<a; j++) {
 int b;
   cin >> b;
   v.push_back(b);
 }
 sort(v.begin(),v.end());
 
 for (int k=0; k<a-1; k++) {
   if (v[k+1] - v[k] == 1) {
 
   } else {
     if (k!=0) {
     if (v[k] - v[k-1] == 1) {
       cout << v[k+1] << endl;
       break;
     } else {
     cout << v[k] << endl;
     break;
   }
 }else {
   cout << v[k] << endl;
 }
   }
 }
 
}
return 0;
}
