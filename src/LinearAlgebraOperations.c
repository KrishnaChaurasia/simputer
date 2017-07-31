
#include<stdio.h>
#include"../include/LinearAlgebraOperations.h"
#include"../include/ArithmeticOperations.h"

//----------------------
//Sudheer
double determinant(double inputmatrix[50][50], int size)
{
    double submatrix[50][50], sign=-1, output=0, w, q;
    int i,j,k,m=0;
    
    if(size<=0)        //not valied if size of matrix is less than 1
    return -1;
    
    else if(size==1)   //if size is 1
    return inputmatrix[0][0];

    else{              //if size is greater than 1
	for(i=0; i<size; i++){
	    for(j=0; j<sub(size,1); j++){
		for(k=0; k<sub(size,1); k++){
		    if(k==i)
			m=add(m,1);
		submatrix[j][k]=inputmatrix[j+1][m];    //submatrix by eliminating jth row and column
		m=add(m,1);
		}
	     m=0;
	     }
	sign = mul(sign,-1);
	q = determinant(submatrix,sub(size,1));             //determinent of submatrix
        w = mul(q,sign);
	w = mul(inputmatrix[0][i],w);                       //multipliying the det with corresponding ist row element
	output = add(output,w);                             //output is addition of all w's
        }
    return output;
    }
}

void inverse(double inputmatrix[50][50],int size)
{
    int m,k,i,j,ii,jj;
    double part[50][50],output[50][50],partdet,detofinput;
    detofinput=determinant(inputmatrix,size);//det of inputmatrix
    if(detofinput==0 || size<=0)//no inverse if det is 0
    printf(" -> No inverse exsits for this matrix\n");
    else//if det is non zero
    {
       for(m=0;m<size;m++)
	{
	for(k=0;k<size;k++)
	{
		ii=0;//used in finding cofactor matrix
		jj=0;//used in finding cofactor matrix
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(i!=m&&j!=k)
			{
			part[ii][jj]=inputmatrix[i][j];//part is cofactor matrix
			if(jj<sub(size,2))
			jj=add(jj,1);
			else
			{
			ii=add(ii,1);
			jj=0;
			}
			}
		}
	}
	partdet=determinant(part,sub(size,1));//finding det of cofactor matrix
	if((m+k)%2==1)
	partdet=mul(partdet,-1);
	partdet=div(partdet,detofinput);//division of submatrix det by original matrix
	output[m][k]=partdet;
	}
	}
        printf(" -> Inverse of square matrix is \n");//displaying the output matrix
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		  printf("\t %.2f\t",output[j][i]);//transpose of output is displayed
		printf("\n");
	}
    }
}
//----------------------
