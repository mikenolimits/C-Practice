#include <iostream>
using namespace std;

  
  int rounder(int x){
 
     if(!(x < 10)){
        return 10* rounder(x/10);
     }
    
      return x;
  }

  

  int main(){


   int x;

    x = 1499;

   x = rounder(x);

   cout<<x;
  }
