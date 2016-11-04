#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define REP(i,b) FOR(i,0,b)
#define INF 1e9

using ll = long long;

const ll mod = LLONG_MAX;
int main(){
  string s;
  cin>>s;
  if(s=="ham"){
    cout<<"ham"<<endl;
    return 0;
  }
  string ans=s+"ham";
  cout<<ans<<endl;
}
