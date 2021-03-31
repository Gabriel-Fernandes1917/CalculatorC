#include <iostream>
#include <stdlib.h>

using namespace std;

float input1, output, input2;
int choice;

float soma(float, float){
	
	cout << "you choiced the + option" << endl;
	cout << "write the first value" << endl;
	cin >> input1;
	cout << "write the second value" << endl;
	cin >> input2;
	
	output = input1 + input2;
	
	cout << input1 << " + " << input2 << " = " << output;
	
	
	
	return 0;
}

float sub(float, float){
	
	cout << "you choiced the - option" << endl;
	cout << "write the first value" << endl;
	cin >> input1;
	cout << "write the second value" << endl;
	cin >> input2;
	
	output = input1 - input2;
	
	cout << input1 << " - " << input2 << " = " << output;
	
	
	
	return 0;
	
	
	
}

float div(float, float){
	
	cout << "you choiced the / option" << endl;
	cout << "write the first value" << endl;
	cin >> input1;
	cout << "write the second value" << endl;
	cin >> input2;
	
	output = input1 / input2;
	
	cout << input1 << " / " << input2 << " = " << output;
	
	
	
	return 0;
	
	
}

float multi(float, float){
	
	cout << "you choiced the * option" << endl;
	cout << "write the first value" << endl;
	cin >> input1;
	cout << "write the second value" << endl;
	cin >> input2;
	
	output = input1 * input2;
	
	cout << input1 << " x " << input2 << " = " << output;
	
	
	
	return 0;
	
	
	
}


int main(int argc, char** argv)
{
	
	cout << "***********************" << endl;
	cout << "Welcome a calC++" << endl;
	cout << "***********************" << endl;
	
	//instructions 
	
	cout << "write 1 for +, 2 for -, 3 for *, 4 for /" << endl;
	cin >> choice;
	if(choice == 1){
		
		soma(input1, input2);
		
	}else if(choice == 2)
	{
		
		sub(input1, input2);
		
	}else if(choice == 3)
	{
		
		multi(input1, input2);
		
	}else if(choice == 4)
	{
		
		div(input1, input2);
		
	}else
	{
		cout << "Error" << endl;
	}
	
	
	
	return 0;
}
