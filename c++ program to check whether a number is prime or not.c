#include <iostream>
using namespace std;
int main() {
     int num , i;
     bool is Prime = true;
     cout<<"Enter a number :";
     cin>> num;
     if(num <= 1){
      is Prime = false;
     } else {
     for(i=2;i*i <= num ; i++) {
     if (num % i== 0) {
     is Prime = false;
     break;
     }
     }
     }
     if (is Prime)
     cout<<num << "is a prime number . " <<end1;
     else
     cout <<num <<sum <<" is not a prime number ." <<end1 ;
     return 0 ;
     }
