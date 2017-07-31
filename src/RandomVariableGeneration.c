
#include"../include/RandomVariableGeneration.h"
#include"../include/ScientificOperations.h"
#include"../include/ArithmeticOperations.h"

//----------------------
//Sandeep
double prvar(int a ,int b)    // first value is lambda value  
{                             // second is poisson random variable value
    
    // formula for poison random variable (e^(-lamda)*(lamda)^i)/i!  
  
    if(b<0) return -1;

    int i,j;
    double result1 = power(a, b);
    int result2 = factorial(b);
    double result3=0;

    for(i=0;i<12;i++){
	result3 = add(result3, div(power((mul(-1,a)),i),factorial(i)));
    }
    double finalresult = div(mul(result3,result1),result2);
return(finalresult);
}

//-----------------------
//Krishna
double binomialrv(int k, int n, double p)
{
  //k is the required number of success, n is the number of trials and p is the probability of the occurence of an event then 
  //Binomial rv: P(X = k)= nCk * p^k *(1-p)^(n-k)
  
  float result;               // to store the result
  if(k < 0 || n < 0 || k > n || p < 0 || p > 1){
    return -1;
  }
  
  result = mul(mul(combination(n,k), power(p,k)), power(sub(1,p),sub(n,k)));
  
  return result;
}
//-----------------------
