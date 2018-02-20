#include<iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex(int a=0, int b=0) : real(a),imag(b) {}

    Complex operator * (Complex const &obj) {
         Complex res;
         res.real = real * obj.real -imag * obj.imag;
         res.imag = real * obj.imag + imag * obj.real;
         return res;
    }
    void print() {
        cout<<"161210019-Sushma_deegoju"<<endl;
        cout << real << " + i" << imag << endl; }
};

int main()
{
    Complex c1(20, 5), c2(10, 4);
    Complex c3 = c1 * c2; // An example call to "operator+"
    c3.print();
}
