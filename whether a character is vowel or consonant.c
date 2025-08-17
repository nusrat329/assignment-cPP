#include <iostream>
using namespace std;
int main() {
 char ch ;
 cout << "Enter a character : ";
 cin >> ch ;
  ch = tolower(ch);

  if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
  cout << ch << "is a vowel. " << end1 ;
  else   if(( ch == 'a' && ch =< 'z'))
  cout << ch << "is a consonant. " << end1 ;
   else
   cout << "Invalid input! Not an alphabet. " << end1;
   return 0;
   }
