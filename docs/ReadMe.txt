Simputer version 1.1 README
****************************

Contents
*********

1 What is Simputer
2 How to run the program
3 What 'Simputer' contains

1)What is Simputer?
******************

  'Simputer' is a simple calculator which supports,
    i)Arithmetic Operations like add, sub, mul,div,power and logical bit-wise operations.
   ii)Scientific Operations like Sinx, Cosx, Permutation, Combination.
  iii)Random Variable Generation like bionomial and poisson random variable.
   iv)Linear Algebra operations like determinant, inverse.
    v)Ordering a list.

2)How to run the program?
***********************

*First open the terminal.
*Add the path of the folder containing the program to the terminal.
*Enter 'g++                 '
*Enter ./a.out
*Now you can use 'Simputer'.

3)What 'Simputer' contains?
*************************

**Simputer consists of five different modules:-
 1 -> Arithmetic Operations
 2 -> Scientific Operations
 3 -> Random Variable
 4 -> Linear Algebra
 5 -> Ordering
 Enter '6' to exit.
 
 1 -> Arithmetic Operations
 ***************************
  1 -> Add
  ***************
   Enter any two numbers for which you want addition.
  2 -> Substract
  ****************
   Enter any two numbers for which you want subtraction.
   (second number is subtracted from first number)
  3 -> Multiply
  ****************
   Enter any two numbers for which you want multiplication.
  4 -> Divide
  ***************
   Enter any two numbers for which you want division.
   (first number is divided by second number)
  5 -> Power
  ************
   Enter any two numbers(a,b) for which you a^b where '^' => power.
  6 -> AND
  ***********
   Enter any two binary numbers(a,b) for which you want a(.)b
   where '(.)' => bitwise and.
  7 -> OR
  ***********
   Enter any two binary numbers(a,b) for which you want a(+)b
   where '(+)' => bitwise or.
  8 -> XOR
  ***********
   Enter any two binary numbers(a,b) for which you want a(xor)b
   where '(xor)' => bitwise xor.
  Enter 9 for exit this module.

 2 -> Scientific Operations
 *******************************
  1 -> sin(x)
  ****************
   Enter the value of x for which you want sin(x).
  2 -> cos(x)
  *****************
   Enter the value of x for which you want cos(x).
  3 -> Permutation
  ******************
   Enter the values of n and r for which you want n(Permutation)r
   Both n and r should be positive integers and n >= r.
  4 -> Combination
  ******************
   Enter the values of n and r for which you want n(Combination)r
   Both n and r should be positive integers and n >= r.
  Enter 5 for exit this module.

 3 -> Random Variable
 ********************************
  1 -> Binomial Random Variable
  *********************
   Enter three numbers (k,n,p) where
   k is the required number of success,
   n is the number of trials and
   p is the probability of the occurrence of an event.
   Finally you can get P(X=k) using Binomial Random Variable.
  2 -> Poison Random Variable
  *********************
   Enter two numbers (k,y) where
   k is the required number of success,
   y is lambda value.
   Finally you can get P(X=k) using Poison Random Variable.

 4 -> Linear Algebra
 ********************************
  1 -> Determinant
  ******************
   Enter the value of n where,
   'n' is size of double dimension matrix of size n*n
   (Determinant doesn't exists for matrix of size m*n where m!=n)
   Now enter all the elements of double dimension matrix
   Finally you can get the determinant of the matrix.
  2 -> Inverse
  *****************
   Enter the value of n where,
   'n' is size of double dimension matrix of size n*n
   (Inverse doesn't exists for matrix of size m*n where m!=n)
   (Inverse doesn't exists for matrix whose determinant is zero)
   Now enter all the elements of double dimension matrix
   Finally you can get the Inverse of the matrix.

 5 -> Ordering
 **********************************
  Enter the value of n where,
  n is the size of the array to be sorted.
  Now enter all the elements of the array.
  Finally you will see ascending ordering of the array.
