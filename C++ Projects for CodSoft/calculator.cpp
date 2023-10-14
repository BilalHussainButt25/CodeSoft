/*Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/


#include<iostream>
using namespace std;
int main(){
	float first,second,result;
	char op;
	cout<<"\tCalculator\n"<<endl;
	
	while(true){
	
	cout<<"\nEnter the first number: ";
	cin>>first;
	cout<<"Enter the second number: ";
	cin>>second; 
	cout<<"\nEnter the operator(+,-,*,/) or e to exit: ";
	cin>>op;
	
	if(op == 'e' || op == 'E'){
		cout<<"Exit Calculator"<<endl;
		break;
	}
	switch (op){
		case '+':
			cout<<first<<"+"<<second<<"="<<first+second<<endl;
			break;
		case '-':
			cout<<first<<"-"<<second<<"="<<first-second<<endl;
			break;
		case '*':
			cout<<first<<"*"<<second<<"="<<first*second<<endl;
			break;
		case '/':
			if(second!=0){
				cout<<first<<"/"<<second<<"="<<first/second<<endl;
			}
			else
			cout<<"\nError!! You can't Divide a number with Zero";	
			break;
		default:
			cout<<"\nEnter Valid Operator"<<endl;
		}
	}
	return 0;	
}

