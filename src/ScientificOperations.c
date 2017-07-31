
#include"../include/ScientificOperations.h"
#include"../include/ArithmeticOperations.h"

//----------------------
//Sandeep
int permutation(int a,int b)
{
    if(a<b){
	return (-1);  //error 
    }
    else if(a<0 || b<0){
	return(-1);  //error
    } 
    else{
   	double result1 = factorial(a);    //factorial of first number
	double result2 = factorial(a-b);  //factorial of(firstnum-secondnum)
   	double finalresult = div(result1,result2);    //division of both results
    return (finalresult);
    }
}

int combination(int a,int b)
{
    double result1=permutation(a,b);    //permutation of both nos
    if(result1==-1) return -1;
 
    double result2=factorial(b);        //factorial of second number
    double finalresult=div(result1,result2);    //division of both results
return (finalresult);
}
//----------------------

//-----------------------
//Krishna
double sin(double x){
  //Taylor series approximation for sin x, sin x = x - x^3/3! + x^5/5! - x^7/7! + x^9/9! - .... 
  
  double answer = 0;      //to store the answer
  int i;                  //loop variables
  for(i=1;i<10;i++){
    if(i%4 == 1){
      answer = add(answer,div(mul(1,power(x,i)),factorial(i)));
    }
    else if(i%4 == 3){
      answer = add(answer,div(mul(1,power(x,i)),factorial(i)));
    }
  }
  return answer;
}

double cos(double x){
  //Taylor series approximation for cos x, cos x = 1 - x^2/2! + x^4/4! - x^6/6! + x^8/8! - ....
  double answer = 0;       //to store the result
  int i;		   //loop variable
  for(i=0;i<10;i++){
    if(i%4 == 0){
      answer = add(answer, div(mul(1, power(x,i)), factorial(i)));
    }
    else if(i%2 == 0){
      answer = add(answer, div(mul(-1, power(x,i)), factorial(i)));
    }
  }
  return answer;
}
//----------------------

