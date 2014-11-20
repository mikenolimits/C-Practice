#include <iostream>
using namespace std;



  void addMin(double x[][2], int rows, int cols){
   
    int min = x[0][0];

    for(int r = 0; r < rows; r++){

     for(int c = 0; c < cols; c++){
   
       int current = x[r][c];
              
        if (current < min){
             min  = current;
         }
         
         for(int rtwo; rtwo < cols; rtwo++){
           for(int ctwo; ctwo < rows; ctwo++){
            
              x[ctwo][rtwo] +=  min;
	  }
        }
     }

    }

  } 
   
  void subtractAverage(double x[][2], int rows, int cols){
     
    double sum = 0;
    for(int r = 0; r < rows; r++){
       for(int c = 0; c < cols; c++){
           double avg = sum / ( cols * rows);
	  for (int r = 0; r < rows; r++)
               for (int c = 0; c < cols; c++) x[r][c] -= avg;
        }
     }

  } 

  int main() {
   double x[3][2] = {{1,3}, {1,3}, {1,3}} ; // average is 2 here
    subtractAverage(x, 3, 2);
   cout << x[0][0] <<  " " << x[0][1] << endl; // prints: -1 1
    addMin(x,3,2); 
    

    int column;
    int row;    
    cout<<"Enter a row";
    
    cin>>row;
    cout<<"Enter a column";

    cin>>column;
    cout<<x[row][column];
 return 0;
  }



