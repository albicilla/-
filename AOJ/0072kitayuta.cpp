#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
 
typedef pair<int,pair<int,int> > P;
 
vector<int> uni;
int find(int at){
    if(at==uni[at]) return at;
    else return uni[at]=find(uni[at]);
}
void unite(int a,int b){
    uni[find(a)]=find(b);
}
int main(){
    for(;;){
        int N,M;
        scanf("%d\n%d\n",&N,&M);
        if(N==0) break;
        uni=vector<int>(N);
        for(int i=0;i<N;i++) uni[i]=i;
        vector<P> ros;
        int a,b,dis;
        for(int i=0;i<M;i++){
            scanf("%d,%d,%d\n",&a,&b,&dis);
            dis=dis/100-1;
            ros.push_back(make_pair(dis,make_pair(a,b)));
        }
        sort(ros.begin(),ros.end());
        int ret=0;
        for(int i=0;i<M;i++){
            dis=ros[i].first,a=ros[i].second.first,b=ros[i].second.second;
            if(find(a)!=find(b)){
                unite(a,b);
                ret+=dis;
            }
        }
        printf("%d\n",ret);
    }
}