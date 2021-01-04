#include<iostream>
using namespace std;

class Complex{
	private:
		int real, imag;
	public:
		Complex(int r, int i){
			real = r;
			imag = i;
		}
		
	Complex operator + (Complex const &obj){
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		
		return res;
	}
	
	void display(){
		cout<<real<<"+ i"<<imag<<endl;
	}
};

int main(){
	Complex c1(12,3);
	Complex c2(4,3);
	Complex c3 = c1 + c2;
	c3.display();

}
