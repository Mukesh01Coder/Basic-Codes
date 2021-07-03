#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
unsigned int countSetBits(unsigned int x){
      unsigned int count = 0;
      while(x){
           count += x&1;
           x >>= 1;//x=x>>1; 
      }
      return count;
}
int main(){
     int n; cin>>n;
     cout<<countSetBits(n)<<endl;
     return 0;
}