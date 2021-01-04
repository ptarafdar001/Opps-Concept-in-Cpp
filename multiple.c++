#include<iostream>
using namespace std;

class A{
	public:
		void funcA(){
			cout<<"Func A"<<endl;
		}
};

class B{
	public:
		void funcB(){
			cout<<"Func B"<<endl;
		}
	private:
		void fun(){
			cout<<"Fun protected"<<endl;
		}
		
};

class C: public A, public B{
	public:
		void funcC(){
			cout<<"Func c"<<endl;
		}
	
};

int main(){
	C c;
	c.funcA();
	c.funcB();
	c.fun();
}
