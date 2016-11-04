#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <map>
using namespace std;
 
class UnionFind {
private:
  int n;
  int *par, *rank;
public:
  UnionFind(int _n) : n(_n) {
    par = new int[n];
    rank = new int[n];
    for(int i = 0; i < n; ++i) {
      par[i] = i;
      rank[i] = 0;
    }
  }
 
  int find(int x) {
    return par[x] == x ? x : par[x] = find(par[x]);
  }
 
  bool same(int x, int y) {
    return find(x) == find(y);
  }
 
  void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if(rank[x] < rank[y]) {
      par[x] = y;
    } else {
      par[y] = x;
      if(rank[x] == rank[y]) ++rank[x];
    }
  }
};
 
const int MAXN = 101;
int N, M;
 
int main() {
  while(cin >> N && N) {
    cin >> M;
    vector<pair<int,pair<int,int> > > v;
    while(M--) {
      string s;
      cin >> s;
      replace(s.begin(), s.end(), ',', ' ');
      stringstream ss(s);
      int a, b, c;
      ss >> a >> b >> c;
      v.push_back(make_pair(c/100-1, make_pair(a,b)));
    }
    sort(v.begin(), v.end());
    UnionFind uf(N);
    int res = 0;
    for(int i = 0; i < v.size(); ++i) {
      if(!uf.same(v[i].second.first, v[i].second.second)) {
        uf.unite(v[i].second.first, v[i].second.second);
        res += v[i].first;
      }
    }
    cout << res << endl;
  }
  return 0;
}