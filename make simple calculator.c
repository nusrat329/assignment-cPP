#include <iostream>
using namespace std;
 int main () {
 char op;
 double num1, num2;
 cout <<"Enter operator(+,-,*,/): ";
 cin >>op;
 cout << "Enter two numbers: ";
 cin >> num1 >> num2;
 switch (op) {
 case '+':
 cout <<  "Result = " << num1 +num2 << end1;
   break;
    case '-':
 cout <<  "Result = " << num1 - num2 << end1;
   break;
  case '*':
 cout <<  "Result = " << num1 * num2 << end1;
   break;
    case '/':
    if(num2 != 0)
 cout <<  "Result = " << num1 / num2 << end1;
   else
   cout << "Error! Division by zero. " << end1;
     break;
    default:
    cout << "Invalid operator !" << end1;
 }

return 0;
 }
