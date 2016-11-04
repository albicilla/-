#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define REP(i,b) FOR(i,0,b)

using ll = long long;
const ll mod = 1000000007;

string d="1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071727374757677787980818283848586878889909192939495969798991";
int main(){
  int n;
  cin>>n;
  int s=d.size();
  vector<int> v;

  for(int i=0;i<s;i++){
    v.push_back(d[i]-'0');
  }
  int a=0;
  for(int i=s;i>=0;i--){
    v[i]=v[i]*n+a;
    a=(v[i])/10;
    v[i]%=10;
  }
  cout<<a;
  cout<<'.';
  for(auto e: v){
    cout<<e;
  }
  cout<<endl;
  return 0;
}
