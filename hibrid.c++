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
	private:
		void fun(){
			cout<<"private B"<<endl;
		}
		
};

class C{
	public:
		void funcC(){
			cout<<"Func C"<<endl;
		}
	
};

class D: public B, public C{
	
};

int main(){
	D d;
	d.funcA();
	d.funcB();
	//d.fun();
	d.funcC();
}
