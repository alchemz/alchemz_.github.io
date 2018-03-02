#include <iostream>
using namespace std;

int main(){
	char op;
	float n1, n2;

	cout<<"Please enter operator either + or * :";
	cin>>op;

	cout<<"Enter two operands: ";
	cin>>n1>>n2;

	switch(op){
		case '+':
			cout<<n1+n2;
			break;
		case '*':
			cout<<n1*n2;
			break;
		default:
			cout<<"Error, operator entered is not allowed.";
			break;
	}
	return 0;
}