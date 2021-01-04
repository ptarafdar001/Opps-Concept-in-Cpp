#include<iostream>
using namespace std;

class A{
	public:
		void funcA(){
			cout<<"Func A"<<endl;
		}
};


class C: public A{
	public:
		void funcC(){
			cout<<"Func c"<<endl;
		}
	
};

int main(){
	C c;
	c.funcA();
	c.fun();
}
