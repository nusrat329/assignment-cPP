#include<iostream>
using namespace std;
class complex{
 float real ,imag;
 public:
 void input(){
 cout << "Enter real and imaginary part:";
 cin >> real>>imag;
 }
complex add(complex c) {
compex temp;
temp.real = real +c.real;
temp.imag = imag +c.imag;
return temp;
}
void display () {
cout << "Sum = " << real <<"+" << imag <<"i" <<end1;
}
};
int main() {
complex c1 ,c2, sum ;
cout <<"Enter first complex number :\n";
c1.input();
cout <<"Enter second complex number :\n";
c2.input();
  sum = c1.add(c2);
  sum.display();
  return 0;

}
