#include <iostream>
#include <cstdio>
using namespace std;


int main(){
	double x1,y1,x2,y2,xq,yq;
	double m,x,y,c;
	while(~scanf("%lf,%lf,%lf,%lf,%lf,%lf",&x1,&y1,&x2,&y2,&xq,&yq)){
		if(x2==x1){
			xq*=-1;
			printf("%.6f %.6f\n",xq,yq);
		}else{
			m=(y2-y1)/(x2-x1);
			c=y2-m*x2;
			x=(2*m*yq-xq*(m*m-1)-2*m*c)/(m*m+1);
			y=(2*m*xq+yq*(m*m-1)+2*c)/(m*m+1);
			printf("%.6f %.6f\n",x,y);
		}
	}
	return 0;
}