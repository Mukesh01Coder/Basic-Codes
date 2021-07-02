#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
int main(){
     ios::sync_with_stdio(false);
     cin.tie(NULL); cout.tie(NULL);
     ll t; cin>>t;
     while(t--){
      ll num; cin>>num;
      ll fact=num;
      while(num>1){
             
          fact *= (num-1) ;

           num--;
          }   
          cout<<fact<<endl;
     }
     return 0;
}