#include<iostream>
#include<math.h>
using namespace std;
#define m 2
class Line{
	public:
		int x,y,x1,y1;
		Line(int a,int b,int c,int d){
			x=a;
			y=b;x1=c;
			y1=d;
		}
		
};
class Tangent{
	public:
		float x;
		Tangent(){
		}
		bool isTangent(int x1,int y1,int x2,int y2){
			int a=y1-y2;
			int b=x1-x2;
			if(a==b*m){
				return true;
			}
			else{
				return false;
			}
		}
		/*bool isTangent(int slope,int intercept){
			if()
		}*/
		bool isTangent(Line l){
			int a=l.y-l.y1;
			int b=l.x-l.x1;
				if(a==m*b){
					return true;
				}
				else {
					return false;
				}
		}
};
int main(){
	Line l(4,8,2,4);
	Tangent t;
	cout<<"Tangent From Two Points : ";
	cout<<t.isTangent(6,7,3,5)<<endl;
	cout<<"Tangent From Line : ";
	cout<<t.isTangent(l);
}
