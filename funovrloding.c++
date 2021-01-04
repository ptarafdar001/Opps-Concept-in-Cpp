#include<iostream>
using namespace std;

class Poly{
	public:
		void fun(){
			cout<<"I am a function with no argument"<<endl;
		}
		void fun(int a){
			cout<<"I am a function with int argument"<<endl;
		}
		void fun(double a){
			cout<<"I am a function with double argument"<<endl;
		}
		
};

int main(){
	Poly p;
	p.fun();
	p.fun(4);
	p.fun(5.2);
};
