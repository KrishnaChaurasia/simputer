//-----------------------------
//Mohit

#include"../include/Simputer.h"

int main()
{
int op, op1;
double num1, num2, num3;

cout<< "\n\n\t\t Welcome to Simputer \n\n";
cout<< " 1 -> Arithmetic Operations, 2 -> Scientific Operations, 3 -> Random Variable, \n 4 -> Linear Algebra, 5 -> Ordering, 6 -> Exit \n\n";
cin>>op;

while(op!=6){
switch(op){
	case 1: // For Arithmetic Operations
		do{			
		cout<< "\n 1 -> Add, 2 -> Substract, 3 -> Multiply, 4 -> Divide, 5 -> Power, 6 -> AND, 			\n 7 -> OR, 8 -> XOR, 9 -> Exit\n\n";
		cin>> op1;

		switch(op1){
			case 1:
				cout <<" -> Enter the two numbers: ";
				cin>> num1>> num2;
				cout<<" -> Ans : " << add(num1, num2) <<endl <<endl;
			break;
			
			case 2:
				cout <<" -> Enter the two numbers: ";
				cin>> num1>> num2;
				cout<<" -> Ans : " << sub(num1, num2) <<endl <<endl;
			break;	

	
			case 3:
				cout <<" -> Enter the two numbers: ";
				cin>> num1>> num2;
				cout<<" -> Ans : " << mul(num1, num2) <<endl <<endl;
			break;


			case 4:
				cout <<" -> Enter the two numbers: ";
				cin>> num1>> num2;
				cout<<" -> Ans : " << div(num1, num2) <<endl <<endl;
			break;


			case 5:
				cout <<" -> Enter x then y (x^y): ";
				cin>> num1>> num2;
				cout<<" -> Ans : " << power(num1, num2) <<endl <<endl;
			break;

			case 6:
				cout <<" -> Enter the two numbers: ";
				cin>> num1>> num2;
				cout<<" -> Ans : " << logicand(num1, num2) <<endl <<endl;
			break;

			case 7:
				cout <<" -> Enter the two numbers: ";
				cin>> num1>> num2;
				cout<<" -> Ans : " << logicor(num1, num2) <<endl <<endl;
			break;

			case 8:
				cout <<" -> Enter the two numbers: ";
				cin>> num1>> num2;
				cout<<" -> Ans : " << logicxor(num1, num2) <<endl <<endl;
			break;
			
			case 9:
			break;			

			default: cout<< " -> Invalid input \n\n";
			break;		
			
		}	
		}while(op1!=9);
	break;
	
	case 2: // For Scientific Operations
		cout<< "\n 1 -> sin(x), 2 -> cos(x), 3 -> Permutation, 4 -> Combination, 5 -> Exit\n\n";
		cin>> op1;
		while(op1!=5){
		switch(op1){
			case 1:
				cout <<" -> Enter x: ";
				cin>> num1;
				cout<<" -> Ans : " << sin(num1) <<endl <<endl;
			break;
			
			case 2:
				cout <<" -> Enter x: ";
				cin>> num1;
				cout<<" -> Ans : " << cos(num1) <<endl <<endl;
			break;

			case 3:
				
				cout <<" -> Enter (n,r): ";
				cin>> num1>> num2;
				cout<<" -> Ans : " << permutation(num1, num2) <<endl <<endl;
			break;
	
	
			case 4:	
				cout <<" -> Enter (n,r): ";
				cin>> num1>> num2;
				cout<<" -> Ans : " << combination(num1, num2) <<endl <<endl;
			break;

			
			case 5:
			break;

			default: cout<< " -> Invalid input \n\n";
			break;
		}
		cout<< "\n 1 -> sin(x), 2 -> cos(x), 3 -> Permutation, 4 -> Combination, 5 -> Exit\n\n";
		cin>> op1;
		}
	break;

	
	case 3:	// For Random Variable Generation
		cout<< "\n 1 -> Binomial Random Variable, 2 -> Poison Random Variable, 3 -> Exit\n\n";
		cin>> op1;
		while(op1!=3){
		switch(op1){
			case 1:
				cout <<" -> Enter k,n,p: ";
				cin>> num1>> num2>> num3;
				cout<<" -> Ans : " << binomialrv(num1, num2, num3) <<endl <<endl;
			break;
			
			case 2:
				cout <<" -> Enter lamba followed by PRV value: ";
				cin>> num1>> num2;
				cout<<" -> Ans : " << prvar(num1, num2) <<endl <<endl;
			break;

			case 3:
			break;

			default: cout<< " -> Invalid input \n\n";
			break;
		}
		cout<< "\n 1 -> Binomial Random Variable, 2 -> Poison Random Variable, 3 -> Exit\n\n";
		cin>> op1;
		}
		//cout<<"OK"<<endl;
	break;

	
	case 4: // For Linear Algebra Operations
		int i,j;
                double arr[50][50];
                cout<< "\n 1 -> Determinant of a matrix, 2 -> Inverse of a matrix, 3 -> Exit\n\n";
		cin>> op1;

		while(op1!=3){
		switch(op1){
			case 1:
				cout <<" -> Enter size of matrix: ";
				cin>> num1;
                                cout<<" -> Enter the elements of the matrix: ";
                                for(i=0; i<num1; i++)
                                   for(j=0; j<num1; j++)
                                      cin>>arr[i][j];
				cout<<" -> Ans : " << determinant(arr,num1) <<endl <<endl;
			break;

			case 2:
				cout <<" -> Enter size of matrix: ";
				cin>> num1;
                                cout<<" -> Enter the elements of the matrix: ";
                                for(i=0; i<num1; i++)
                                   for(j=0; j<num1; j++)
                                      cin>>arr[i][j];
				inverse(arr,num1);
			break;

			case 3:
			break;

			default: cout<< " -> Invalid input \n\n";
			break;
		}
		cout<< "\n 1-> Determinant of a matrix, 2 -> Inverse of a matrix, 3 -> Exit\n\n";
		cin>> op1;
		}
	break;

	case 5: // For Ordering the numbers
		int size;
		cout<< " -> Enter the no of inputs : ";
		cin>> size;

		int inputs[1000];
		cout<< " -> Enter the no's : ";
		for(int i=0; i<size; i++) cin>> inputs[i];
		
		count_sort(inputs, size);	

		cout<<"\n -> The Ordering of the array is: " ;
  		for(int i=0; i<1000; i++){
		    if(inputs[i]){
      			for(int j=0; j<inputs[i]; j++)
				cout<<i <<" ";
    		    }
  		}
		cout<< endl <<endl;
	break;
	
	case 6:
	break;
		
	
	default: cout<< " -> Invalid input \n\n";
	break;
	
	
}	
cout<< " 1 -> Arithmetic Operations, 2 -> Scientific Operations, 3 -> Random Variable, \n 4 -> Linear Algebra, 5 -> Ordering, 6 -> Exit \n\n"<<endl;
cin>> op;
}
cout<< "\n -> Program ended\n\n";
return 0;
}
//-----------------------------

