#include <iostream>
using namespace std;





   bool isSeven(int x){

	if( x == 7){
         return true;
      }
     return false;
   }
    
  string removeLast(string s){
    return s.substr(0,s.length() - 1);
  }

 string secondWord(ifstream& f){
   x = string;

   f << x;
   f << x;

  return x; 
  }
  
  char firstChar(char x[]){

   return x[0];
  }


  void swagBig(int& a, int&b, int&c){

   int t = a;

   if(a < b && a <= c){
        a = c;
        b = t;
   }else if ( a < c ){
       a = c;
       z = t;
   }
    
 }

  int main() {
   int a = 2, b = 3, c = 4;
   ifstream f;
    string s = "HELLO"; char t[] = "HELLO";
    f.open("testFile.txt");
   // (a) Tests whether a number is seven, here No!
   if (!isSeven(c)) cout << "No!" << endl;
  // (b) Removes the last char from a string, here HELL
   cout << removeLast(s) << endl;
  // (c) Prints second word in the input file
     cout << secondWord(f) << endl;
   // (d) Print first character of a C-string, here H
   cout << firstChar(t) << endl;
   // (e) swap a with the biggest of a,b,c. Here prints 4,3,2
    swapBig(a, b, c);
   cout << a << b << c << endl;
   return 0;
   }



