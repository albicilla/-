#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define REP(i,b) FOR(i,0,b)
#define INF 1e9
#define MAX_h 50
#define MAX_w 50

using ll = long long;

const ll mod = LLONG_MAX;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int ddx[4]={2,0,-2,0};
int ddy[4]={0,2,0,-2};
char field[51][51];
bool board[51][51];
int h,w;

void mapo(){
  cout<<endl;
  cout<<"--test--"<<endl;
  REP(i,h){
    REP(j,w){
      if(board[i][j])
      cout<<"1";
      else
      cout<<"0";
    }
    cout<<endl;
  }
}

bool can_ladder(int x,int y,int nx,int ny){
  if(abs((field[x][y]-'0')-(field[nx][ny]-'0'))<=1){
    return true;
  }else{
    return false;
  }
}



bool can_ladder2(int x,int y,int nx,int ny,int nnx,int nny){
  if(abs((field[x][y]-'0')-(field[nnx][nny]-'0'))<1 && (field[x][y]-'0')>(field[nx][ny]-'0')){
    return true;
  }else{
    return false;
  }
}

void dfs(int x,int y){
  board[x][y]=true;
  //mapo();
  REP(i,4){
    int nx=x+dx[i];
    int ny=y+dy[i];
    if(nx>=0&&nx<h&&ny>=0&&ny<w && can_ladder(x,y,nx,ny) && !board[nx][ny]){
      dfs(nx,ny);
    }
    int nnx=x+ddx[i];
    int nny=y+ddy[i];
    if(nnx>=0&&nnx<h&&nny>=0&&nny<w && can_ladder2(x,y,nx,ny,nnx,nny) && !board[nnx][nny]){
      dfs(nnx,nny);
    }
  }
  return;
}
int main(){
  cin>>h>>w;
  int sx,sy,gx,gy;
  cin>>sx>>sy>>gx>>gy;
  sx--;sy--;gx--;gy--;
  REP(i,h){
    REP(j,w){
      cin>>field[i][j];
      board[i][j]=false;
    }
  }
  dfs(sx,sy);
  if(board[gx][gy]==true){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
  return 0;
}
