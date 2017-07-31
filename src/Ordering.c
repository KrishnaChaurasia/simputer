#include"../include/Ordering.h"
#include"../include/ArithmeticOperations.h"

//----------------------
//Shivam

void count_sort(int arr[], int size){    //arr - to store the array elements, size of the array
  
  int count[1000] = {0};                 //to store the count of the array elements
  int i,j;                               //loop variables
  if(size<0){
    return;
  }
  for(i=0; i<size; i++){    
    count[arr[i]] += 1;
  }
  for(i=0; i<1000; i++)
    arr[i]=count[i];
}

//----------------------
