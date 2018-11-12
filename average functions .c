#include <stdio.h>



float arrayAverage(int array [],int lengthOfArray){
   int sum, i;
   float avg;
	
	
	// printf("Length of el array el gayelo %.i", lengthOfArray);   
	 sum = 0;
	 avg=0.0;
	 
   for(i = 0; i < lengthOfArray; i++) {
      sum = sum + array[i];
   }
   avg =(float) sum /lengthOfArray;
  // printf("Average of array values is %.2f", avg);   
	return avg;
}

//Function that calculates the sum of Column Averages 
// the rows represent the word length *have to be fixed it's set to 5 here*
/*
params : 
arrayLength= number of columns of the 2d array
[][]array = a 2d array where each column represents ---
*/

float sumOfColumnAverages(int array [][3],int numberOfCols)
{
    
     float sumOfAverages=0;
for (int col = 0; col < numberOfCols; col++)
{
     float averageForCol=arrayAverage(array[col],3);
     printf("average for col %f\n", col, averageForCol);
     sumOfAverages+=averageForCol;
}
     //printf("averages of columns %f\n", sumOfAverages);
     return sumOfAverages;
}  

int main()
{
    int array[] ={5,5,5,5,5,55,512312,22};
    ///// THIS LINE IS VERY FUCKING IMPORTANT/////
 int lengthOfArray =sizeof array / sizeof *array;
 //////////////////////////////////////////////////////
 float result= arrayAverage(array,lengthOfArray);
 //printf("average of the array is  %f\n", result); 
    int myArray[][3]={{1,22,3},{1,2,330},{100,2,3}};
    
    int lengthOfMatrix =sizeof myArray / sizeof *myArray;
    // printf("average of the array is  %i\n", lengthOfMatrix); 
float res=sumOfColumnAverages(myArray,lengthOfMatrix);
     printf("summation of the average of each columns is  %f\n", res); 

    return 0;
}