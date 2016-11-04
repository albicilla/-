#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define REP(i,b) FOR(i,0,b)
#define INF 1e9
#define MAX_N 100000
#define MAX_M 100000

using ll = long long;

const ll mod = LLONG_MAX;

bool memo[101][51];
double ans[101][51];
int a,b;

double dfs(int p,int d){
  if(d<0)return 0;

  if(memo[p][d])return ans[p][d];
  double way1,way2;
  double np=p/100.0;

  way1=np/2.0+np/2.0*dfs(max(0,p-b),d-1);
  way2=(1.0-np)/3.0+(1.0-np)/3.0*dfs(min(100,p+b),d-1);
  memo[p][d]=true;
  return ans[p][d] =way1+way2;
}

int main(){
  cin>>a>>b;
  cout<<fixed<<setprecision(10)<<1.0 / 3.0 + 1.0 / 3.0 * dfs(a, 20)<<endl;
}
