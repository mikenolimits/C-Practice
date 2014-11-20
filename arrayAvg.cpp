//
//  main.cpp
//  C-Practice
//
//  Created by Michael Kantor on 11/19/14.
//  Copyright (c) 2014 Poke. All rights reserved.
//


#include "minGap.h"

void subtractMin(double x[][2], int rows, int cols){
	
	int min = x[0][0];
	
	for(int r = 0; r < rows; r++){
		
		for(int c = 0; c < cols; c++){
			
			int current = x[c][r];
			
			if(current < min){
				
				min = current;
			}
			
			for(int row2 = 0; row2 < rows; r++){
				
				for(int cols2 = 0; cols2 < cols; cols++){
					
					x[row2][cols2] -= min;
					
				}
			}
			
			
		}
		
	}
	
	
}

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

	
	int column;
	int row;
	cout<<"Enter a row";
	
	cin>>row;
	cout<<"Enter a column";
	
	cin>>column;
	
	
	double x[3][2] = {{1,3}, {1,3}, {1,3}} ; // average is 2 here
	addMin(x,3,2);
	cout<<"addMin: "<<x[row][column]<<endl;

	
	double y[3][2] = {{1,3}, {1,3}, {1,3}} ;
	subtractAverage(y, 3, 2);
	cout<<"subtractMin: "<<y[row][column]<<endl;

 return 0;
}


