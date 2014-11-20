#include <iostream>
using namespace std;
 
  void abc(int x){
   string letter;
   for(int y = 0; y <=  x; y++){
      if( (y % 2) != 0){
        letter = "A";
      }else{
        letter = "B";
      }
      for(int z = 0; z <= y; z++){
         cout<<letter;
     }
     cout<<endl;
    }  
 }


  int main() {

   int n;

   cout<<"Please pick a number between 1 and 21"<<endl;
   cin>>n;

  if( n < 1 || n > 21){
    cout<<"Terminating";
    return 0;
  } 
   abc(n);



  return 0;
  }
