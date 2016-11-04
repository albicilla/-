#include<stdio.h>
#include<algorithm>
using namespace std;
pair<int,pair<int,int> > edge[10000];
int UF[100];
int FIND(int a){
    if(UF[a]<0)return a;
    return UF[a]=FIND(UF[a]);
}
void UNION(int a,int b){
    a=FIND(a);
    b=FIND(b);
    if(a==b)return;
    UF[a]+=UF[b];
    UF[b]=a;
}
int main(){
    int a;
    while(scanf("%d",&a),a){
        int b;
        scanf("%d",&b);
        int now=0;
        for(int i=0;i<a;i++)UF[i]=-1;
        for(int i=0;i<b;i++){
            int c,d,e;
            scanf("%d,%d,%d",&c,&d,&e);
            edge[now++]=make_pair(e/100-1,make_pair(c,d));
        }
        std::sort(edge,edge+now);
        int ret=0;
        for(int i=0;i<now;i++){
            if(FIND(edge[i].second.first)!=FIND(edge[i].second.second)){
                UNION(edge[i].second.first,edge[i].second.second);
                ret+=edge[i].first;
            }
        }
        printf("%d\n",ret);
    }
}