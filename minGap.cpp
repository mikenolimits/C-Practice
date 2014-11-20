//
//  minGap.cpp
//  C-Practice
//
//  Created by Michael Kantor on 11/19/14.
//  Copyright (c) 2014 Poke. All rights reserved.
//


#include "iostream"

using namespace std;

int multGap(int x[], int total){

	int product = 1;
	
	for (int i = 0; i < total - 1 ; i++){
			
			int currentCol = x[i];
			int nextCol    = x[i + 1];
			
			
			if(currentCol > nextCol){
				product = product * (currentCol - nextCol);
			}else{
				product = product * (nextCol - currentCol);
			}
			
     	}
	return product;
}


int minGap(int x[], int end){
	
	int distance = x[1] -  x[0];
	
	if(distance < 0){
		distance = -distance;
	}
	
	for (int y = 0; y < end; y++){
		
		int currentCol    = x[y];
		int previousCol   = x[y-1];
		

		if(currentCol > previousCol){
			if(currentCol - previousCol < distance){
				distance = currentCol - previousCol;
			}
		}else{
			if(previousCol - currentCol < distance){
				distance = previousCol - currentCol;
			}
		}
		
		
	}
	return distance;
   }

int sumGap(int x [], int total){
	
	int sum = 0;
	
	
	for ( int i = 0; i < total - 1 ; i++){
		
		int currentCol = x[i];
		int nextCol    = x[i + 1];
		
		
		if(currentCol > nextCol){
			sum += currentCol - nextCol;
		}else{
			sum += nextCol - currentCol;
		}
	
	}
	
	return sum;
	
}

int maxGap(int x[], int total){
	int max = 0;
	
	
	for ( int i = 0; i < total - 1 ; i++){
		
		int currentCol = x[i];
		int previousCol    = x[i - 1];
		
		
		if (currentCol - previousCol > max){
			max = currentCol - previousCol;
		}
		if(previousCol - currentCol > max){
			max = previousCol - currentCol;
		}
		
	}
	
	return max;
	
}

int main(){
	
	int x[5] = {3, 1, 4, 1, 5};
	std::cout<<"Min  Gap: "<<minGap(x,5)<<std::endl;
	std::cout<<"Sum  Gap: "<<sumGap(x,5)<<std::endl;
	std::cout<<"Max  Gap: "<<maxGap(x,5)<<std::endl;
	std::cout<<"Mult Gap: "<<multGap(x,5)<<std::endl;
	return 0;
	
}