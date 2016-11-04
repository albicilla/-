#include <iostream>
#include <cmath>
#include <complex>
#include <vector>
#include <cstdio>
using namespace std;

typedef complex<double> P;
typedef vector<P> G;

double dot(const P& a, const P& b){
	return real(conj(a)*b);
}
double cross(const P& a,const P& b){
	return imag(conj(a)*b);
}
double areaG(const G& g){
	double A = 0;
	for(int i=0;i<g.size();i++){
		A += cross(g[i],g[(i+1)%g.size()]);
	}
	return abs(A/2.0);
}
int main(){
	G g;
	double x,y;
	char c;
	while(cin>>x>>c>>y){
		g.push_back(P(x,y));
	}
	printf("%.8f\n",areaG(g));
	return 0;
}