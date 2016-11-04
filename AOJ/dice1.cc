#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

class dice{
	public:
		int top;
		int bottom;
		int right;
		int left;
		int front;
		int back;
		void South();
		void North();
		void East();
		void West();
};

void dice::South(){
	int temp = back;
	back=top;
	top = front;
	front = bottom;
	bottom = temp;
}

void dice::North(){
	int temp = front;
	front =top;
	top = back;
	back = bottom;
	bottom = temp;
}
void dice::West(){
	int temp = left;
	left = top;
	top = right;
	right = bottom;
	bottom = temp;
}

void dice::East(){
	int temp = right;
	right = top;
	top = left;
	left = bottom;
	bottom = temp;
}


int main(){
	dice d;
	cin>>d.top>>d.back>>d.right>>d.left>>d.front>>d.bottom;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='S')d.South();
		if(s[i]=='N')d.North();
		if(s[i]=='E')d.East();
		if(s[i]=='W')d.West();
	}
	cout<<d.top<<endl;
	return 0;
}