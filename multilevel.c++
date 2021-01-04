#include<iostream>
using namespace std;

class A{
	public:
		void funcA(){
			cout<<"Func A"<<endl;
		}
};

class B: public A{
	public:
		void funcB(){
			cout<<"Func B"<<endl;
		}
		
};

class C: public B{
	public:
		void funcC(){
			cout<<"Func c"<<endl;
		}
	
};

int main(){
	C c;
	c.funcA();
	c.funcB();
}
