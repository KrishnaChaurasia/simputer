#include"../include/ArithmeticOperations.h"

//-----------------------
//Mohit

int logicxor(int a, int b)	// Takes the LOGIC XOR of two given inputs.
{
a = a^b;
return a;
}

int logicor(int a, int b)	// Takes the LOGIC OR of two given inputs.
{
a = a|b;
return a;
}

int logicand(int a, int b)	// Takes the LOGIC AND of two given inputs.
{
a = a&b;
return a;
}

int factorial(int a)		// Finds the factorial of a given number. n!=n*(n-1)*(n-2)*........*1
{
    if(a<0) return -1;
    if(a==0) return 1;

    int temp=1;
    for(int i=1; i<=a; i++)
	temp = temp*i;
return temp;
}

double add(double a, double b)		// Add the two numbers that are passed to the function.
{
return a+b;    
}

double sub(double a, double b)		// Substracts the two numbers that are passed to the function.
{
return a-b;    
}

double mul(double a, double b)		// Multiplies the two numbers that are passed to the function.
{
return a*b;    
}

double div(double a, double b)		// Divides the first number by the second number, that are passed to the function.
{
return a/b;    
}

double power(double a, double b)	// Finds the first number raised to the second number, that are passed to the function.
{
    double temp=1, i=1;
    for(i=1; i<=b; i++){
	temp = temp*a;
    }
return temp;
}
//------------------------
