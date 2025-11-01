#include <iostream>
using namespace std;
int main() {
    int n = 7, i;
    bool prime = true;
    for(i=2; i<=n/2; i++)
        if(n%i==0) prime = false;
    if(prime) cout << "Prime";
    else 
cout << "Not Prime";
return 0;
}