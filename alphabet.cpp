#include <iostream>
using namespace std;
 
  void abc(int x){
   string letter;
   for(int y; y <=  x; y++){
  cout<<"Doing more stuff";
   
      if( (y / 2) == 0){
        letter = "A";
      }else{
        letter = "B";
      }
   cout<<letter;
      for(int z; z <=  y; z++){
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

   cout<<"Doing Stuff";    
   abc(n);



  return 0;
  }
