
#include <iostream>
using namespace std;

class Complex {
public:
	int real, imag;

public:
	Complex(int r = 0, int i = 0)
	{
		real = r;
		imag = i;
	}

	Complex operator+(Complex const& obj)
	{
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
		Complex operator-(Complex const& obj)
	{
		Complex res;
		res.real = real - obj.real;
		res.imag = imag - obj.imag;
		return res;
	}
	void print() { cout << real <<" + "<< imag << "i" << '\n'; }
};

int main()
{
	Complex c1,c2;
	cout<<"Enter the Real and Imaginary For First Number : ";
	cin>>c1.real;
	cin>>c1.imag;
	cout<<"Enter the Real and Imaginary For Second Number : ";
	cin>>c2.real;
	cin>>c2.imag;
	
	Complex c3;
	c3 = c1 + c2;
	cout<<"First Complex Number is : ";
	c3.print();
	c3 = c1-c2;
	cout<<"First Complex Number is : ";
	c3.print();
}

