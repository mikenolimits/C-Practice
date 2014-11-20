#include <iostream>
#include<fstream>
using namespace std;




 string test(ifstream& file){
  string x;

  file >> x;
  file >> x;
  file >> x;
  file >> x;


  return x;

} 

 int main(){
  
  ifstream file; 

  file.open("someFile.txt");

  cout<<test(file);

  }
