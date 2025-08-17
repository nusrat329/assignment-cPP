#include <iostream>
using namespace std;
 int main (){
  int a , b,lcm ;
  cout <<"Enter two numbers: ";
  cin >> a >> b;

  int maxnum = (a>b) ? a : b;

    while(true){
     if (maxnum % a ==0 &&maxnum % b == 0) {
        lcm = maxnum;
        break;
     }
    maxnum++;
    }
    cout << "LCM = "<< lcm;
    return 0;
    }
