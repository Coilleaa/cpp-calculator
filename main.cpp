#include <iostream>
#include <cmath>

using namespace std;

int GCD(int num1, int num2){    //tính gcd
	num1 = abs(num1);
	num2 = abs(num2);
	
	while (num2!=0){
		int remainder = num1%num2;
		num1 = num2;
		num2 = remainder;
	}
	return num1;
}
int LCM(int num1, int num2){  //tính lcm
	if (num1 == 0 || num2 == 0){
		return 0;
	}
	return abs(num1 / GCD(num1, num2) * num2);
}
void runGCD(){   //chạy gcd
	int num1;
	int num2;
	while (true){
		cout << "Enter first number: ";
		cin >> num1;
		cout << "Enter second number: ";
		cin >> num2;
		
		if (cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid input, try again.\n";
			continue;
		}
		
		if (num1==0 && num2==0){
			cout << "Undefined answer, try again.\n";
			continue;
		}
		else{
			break;
		}
	}
	cout << "Answer: " << GCD(num1, num2) << "\n";
}
void runLCM(){  //chạy lcm
	int num1;
	int num2;
	while (true){
		cout << "Enter first number: ";
		cin >> num1;
		cout << "Enter second number: ";
		cin >> num2;
		
		if (cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid input, try again.\n";
			continue;
		}
		
		if (num1==0 && num2==0){
			cout << "Undefined answer, try again.\n";
			continue;
		}
		else{
			break;
		}
	}
	cout << "Answer: " << LCM(num1, num2) << "\n";
}
void basicmath(){  //hàm phép toán cơ bản
	cout << "-------------------------------------\n";
	cout << "Choose which math expression you want to do:\n";
	cout << "1. Add\n";
	cout << "2. Minus\n";
	cout << "3. Multiply\n";
	cout << "4. Divide\n";
	cout << "5. Exit\n";
	cout << "-------------------------------------\n";
	cout << "Choice: ";
	double choice;
	while (true){
		cin >> choice;
		
		if (cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid value, try again.\nChoice: ";
			continue;
		}
		if (choice != int(choice)){
			cout << "Invalid value, try again.\nChoice: ";
			continue;
		}
		if (choice < 1 || choice > 5){
			cout << "Invalid value, try again.\nChoice: ";
			continue;
		}
		else {
			break;
		}
	}
	
	if (choice == 5){
		return;
	}
	
	
	double num1;
	double num2;
	
	while (true){
		cout << "Enter first number: ";
		cin >> num1;
		cout << "Enter second number: ";
		cin >> num2;
		
		if (cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid input(s), enter again.\n";
			continue;
		}
		else{
			break;
		}
	}
	
	switch (int(choice)){
		case 1:	{
			double sum = num1+num2;
			cout << "Answer: " << sum << "\n";
			break;
		}
		case 2: {
			double diff = num1-num2;
			cout << "Answer: " << diff << "\n";
			break;
		}
		case 3: {
			double mult = num1*num2;
			cout << "Answer: " << mult << "\n";
			break;
		}
		case 4: {
			double div;
			if (num2 == 0){
				int error;
				while (true){
					cout << "Number cannot be divided by 0\n";
					cout << "Press 0 to exit\n";
					cin >> error;
					if (error == 0){
						break;
					}
					else {
						cout << "Invalid option, try again.\n";
						continue;
					}
				}
			}
			else {
				div = 1.0 * num1/num2;
				cout << "Answer: " << div << "\n";
			}
			break;
		}
	}
}

void advanced(){  //hàm phép toán cấp cao hơn
	cout << "-------------------------------------\n";
	cout << "Choose which math expression you want to do:\n";
	cout << "1. Modulo\n";
	cout << "2. Absolute value\n";
	cout << "3. Find GCD\n";
	cout << "4. Find LCM\n";
	cout << "5. Factorial\n";
	cout << "6. Exit\n";
	cout << "-------------------------------------\n";
		
	double choice;
	cout << "Choice: ";
	while (true){
		cin >> choice;
		
		if (cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid value, try again.\nChoice: ";
			continue;
		}
		if (choice != int(choice)){
			cout << "Invalid value, try again.\nChoice: ";
			continue;
		}
		if (choice < 1 || choice > 6){
			cout << "Invalid value, try again.\nChoice: ";
			continue;
		}
		else {
			break;
		}
	}
	
	if (choice == 6){
		return;
	}
	
	switch (int(choice)){
		case 1: {
			cout << "-------------------------------------\n";
			cout << "This program allow you to get the remainder when you divide a number with another one.\n";
			cout << "Only integer allowed.\n";
			double num1;
			double num2;
			double mod;
			
			while (true){
				cout << "Enter first number: ";
				cin >> num1;
				cout << "Enter second number: ";
				cin >> num2;
			
				if (cin.fail()){
					cin.clear();
					cin.ignore(1000, '\n');
					cout << "Invalid value, try again.\n";
					continue;
				}
				if ((num1 != int(num1)) || (num2 != int(num2))){
					cout << "Invalid value, try again.\n";
					continue;
				}
				else{
					break;
				}
			}
				
			mod = int(num1)%int(num2);
		
			cout << "Answer: " << mod << endl;
			
			break;
		}
		
		case 2: {
			cout << "-------------------------------------\n";
			cout << "This program allow you to get the absolute value of a number.\n";
			double num;
			double absolute;
			
			while (true){
				cout << "Enter a number: ";
				cin >> num;
				
				if (cin.fail()){
					cin.clear();
					cin.ignore(1000, '\n');
					cout << "Invalid type of input, try again.\n";
					continue;
				}
				else {
					break;
				}
			}
			
			
			
			absolute = abs(num);
			cout << "Answer: " << absolute << "\n";
			break;
		}
		case 3:
			runGCD();
			break;
		case 4:
			runLCM();
			break;
		case 5:{
			cout << "-------------------------------------\n";
			cout << "This program allow you to find the factorial of a number.\n";
			cout << "Only positive integer allowed\n";
			double num;
			
			while (true){
				cout << "Enter a number: ";
				cin >> num;
				
				if (cin.fail()){
					cin.clear();
					cin.ignore(1000, '\n');
					cout << "Invalid value, try again.\n";
					continue;
				}
				if (num != int(num)){
					cout << "Invalid value, try again.\n";
					continue;
				}
				if (num < 0) {
					cout << "Invalid value, try again.\n";
					continue;
				}
				else{
					break;
				}
			}
			long long counter = 1;
			for (int i=1; i<=num; i++){
				counter*=i;
			}
			cout << "Answer: " << counter << endl;
		}		 
			
	}
}
void power(){  //hàm tính mũ
	cout << "-------------------------------------\n";
	cout << "This program allow you to find the result of x^y.\n";

	double num1;
	double num2;
	double result;
	int again;
	
	while (true){
		cout << "Enter the first number: ";
		cin >> num1;
		cout << "Enter the second number: ";
		cin >> num2;
		
		if (cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid value(s), try again.\n";
			continue;
		}
		if (num1>0){
			result = pow(num1, num2);
			break;
		}
		if (num1 == 0 && num2 > 0){
			result = 0;
			break;
		}
		if (num1 == 0 && num2 <= 0){
			cout << "Error, do you want to try again? (0: No, 1: Yes)\n";
			if (again == 0){
				return;
			}
			else if (again == 1){
				cout << "-------------------------------------\n";
				continue;
			}
		}
		if (num1 < 0 && (num2 == int(num2))){
			result = pow(num1, num2);
		}
		if (num1 < 0 && (num2 != int(num2))){
			cout << "Error, do you want to try again? (0: No, 1: Yes)\n";
			cin >> again;
			if (again == 0){
				return;
			}
			else if (again == 1){
				cout << "-------------------------------------\n";
				continue;
			}
		}
	}
	cout << "Answer: " << result << "\n";
}
void root(){  //hàm tính căn
	cout << "-------------------------------------\n";
	cout << "Choose which math expression you want to do:\n";
	cout << "1. Square root\n";
	cout << "2. Cube root\n";
	cout << "3. Exit\n";
	cout << "-------------------------------------\n";
	
	double choice;
	cout << "Choice: ";
	while (true){
		cin >> choice;
		
		if (cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid value, try again.\nChoice: ";
			continue;
		}
		if (choice != int(choice)){
			cout << "Invalid value, try again.\nChoice: ";
			continue;
		}
		if (choice < 1 || choice > 3){
			cout << "Invalid value, try again.\nChoice: ";
			continue;
		}
		else {
			break;
		}
	}
	if (choice == 3){
		return;
	}
	double num;
	double root;
	while (true){
		cout << "Enter a number: ";
		cin >> num;
		
		if (cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid type of input, try again.\n";
			continue;
		}
		if (choice == 1 && num <0){
			cout << "Cannot solve, try again.\n";
		}
		else {
			break;
		}
	}
	switch (int(choice)){
		case 1: {
			double sqnum = sqrt(num);
			cout << "Answer: " << sqnum << "\n";
			break;
		}
		case 2: {
			double cbnum = cbrt(num);
			cout << "Answer: " << cbnum << "\n";
			break;
		}
	}
		
}
void quadratic(){  //hàm tính hàm bậc 2
	cout << "-----------------------------------------------\n";
	cout << "This program allow you to calculate the root of quadratic function (ax^2+bx+c=0)\n";
	
	int a, b, c;
	while (true){
		cout << "Enter a: ";
		cin >> a;
		cout << "Enter b: ";
		cin >> b;
		cout << "Enter c: ";
		cin >> c;
		
		if (cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid value(s), try again.\n";
			continue;
		}
		else {
			break;
		}
	}
	
	int calculation;

	if (a==0){
		if (b==0){
			if (c==0){
				cout << "Answer: Infinite solution\n";
			}
			else {
				cout << "Answer: No solution\n";
			}
		}
		else {
			calculation = -c/b;
			cout << "Answer: " << calculation << "\n";
		}
	}
	else{
		double delta = b*b-4*a*c;
		if (delta <0){
			cout << "Answer: No solution\n";
		}
		else if (delta == 0){
			calculation = -b/(2*a);
			cout << "Answer: " << calculation << "\n";
		}
		else {
			double n1, n2;
			n1 = (-b+sqrt(delta))/(2*a);
			n2 = (-b-sqrt(delta))/(2*a);
			cout << "Answer: \n";
			cout << "x1 = " << n1 << "\n";
			cout << "x2 = " << n2 << "\n";
		}
	}
}
void trigo(){  //hàm tính lượng giác
	const double PI = acos(-1.0);
	cout << "-------------------------------------\n";
	cout << "Choose which math expression you want to do:\n";
	cout << "1. Sin(x)\n";
	cout << "2. Cos(x)\n";
	cout << "3. Tan(x)\n";
	cout << "4. Cot(x)\n";
	cout << "5. Exit\n";
	cout << "-------------------------------------\n";
	double choice;
	cout << "Choice: ";
	
	while (true){
		cin >> choice;
		
		if (cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid value, try again.\nChoice: ";
			continue;
		}
		if (choice != int(choice)){
			cout << "Invalid value, try again.\nChoice: ";
			continue;
		}
		if (choice < 1 || choice > 5){
			cout << "Invalid value, try again.\nChoice: ";
			continue;
		}
		else {
			break;
		}
	}
	if (choice == 5){
		return;
	}
	
	switch (int(choice)){
		case 1: {
			cout << "-------------------------------------\n";
			cout << "This program allow you to calculate the function sin(x).\n";
			cout << "Can be any number\n";
			double num;
			double mode;
			double result;
			while (true){
				cout << "Choose mode (1. Degree, 2. Radian): \n";
				cin >> mode;
				
				if (mode != 1 && mode != 2){
					cout << "Invalid value, try again.\n";
					continue;
				}
				else {
					break;
				}
			}
			while (true){
				cout << "Enter a number: ";
				cin >> num;
				
				if (cin.fail()){
					cin.clear();
					cin.ignore(1000, '\n');
					cout << "Invalid data type, try again.\n";
					continue;
				}
				else{
					break;
				}
			}
			if (mode == 1){
				result = sin(num*(PI/180));
				
			}
			else if (mode == 2){
				result = sin(num);
			}
			if (abs(result) < 1e-10){
				result = 0;
			}
			cout << "Answer: " << result << "\n";
			break;
		}
		case 2: {
			cout << "-------------------------------------\n";
			cout << "This program allow you to calculate the function sin(x).\n";
			cout << "Can be any number" << endl;
			double num;
			double mode;
			double result;
			while (true){
				cout << "Choose mode (1. Degree, 2. Radian): \n";
				cin >> mode;
				
				if (mode != 1 && mode != 2){
					cout << "Invalid value, try again.\n";
					continue;
				}
				else {
					break;
				}
			}
			while (true){
				cout << "Enter a number: ";
				cin >> num;
				
				if (cin.fail()){
					cin.clear();
					cin.ignore(1000, '\n');
					cout << "Invalid data type, try again.\n";
					continue;
				}
				else{
					break;
				}
			}
			
			if (mode == 1){
			result = cos(num*(PI/180));	
			}
			else if (mode == 2){
				result = cos(num);
			}
			if (abs(result) < 1e-10){
				result = 0;
			}
			cout << "Answer: " << result << "\n";
			break;
		}
		case 3:{
			cout << "-------------------------------------\n";
			cout << "This program allow you to calculate the function tan(x).\n";
			double num;
			double mode;
			int again;
			while (true){
				cout << "Choose mode (1. Degree, 2. Radian): \n";
				cin >> mode;
				
				if (mode != 1 && mode != 2){
					cout << "Invalid value, try again.\n";
					continue;
				}
				else {
					break;
				}
			}
			
			while (true){
				cout << "Enter a number: ";
				cin >> num;
				
				if (cin.fail()){
					cin.clear();
					cin.ignore(1000, '\n');
					cout << "Invalid data type, try again.";
					continue;
				}
				
				bool undefined = false;
				double result;
				if (mode == 1) {
        			if (abs(fmod(num, 180.0)) == 90.0 || abs(fmod(num, 180.0)) == -90.0){
        				undefined = true;
					}
					else {
						result = tan(num * (PI / 180.0));
					}
				}
				else{
					if (abs(cos(num)) < 1e-15){
						undefined = true;
					}
					else {
						result = tan(num);
					}
				}
				
				if (undefined){
					int again;
					cout << "Answer: Undefined (Infinity)\n";
	            	cout << "Do you want to try another number or end the program? (0. No, 1. Yes):\n";
	            	cin >> again;
	            	
	            	if (cin.fail()){
	            		cin.clear();
	            		cin.ignore(1000, '\n');
	            		cout << "Invalid value, try again.\n";
	            		continue;
					}
					if (again != 0 && again != 1){
						cout << "Invalid value, try again.\n";
	            		continue;
					}
	            	if (again == 0){
	            		return;
					}
					else {
						cout << "-------------------------------------\n";
						continue;
					}
				}
				if (abs(result) < 1e-10){
					result = 0;
				}
				cout << "Answer: " << result << "\n";
				break;
			}
			break;
		}
		case 4: {
			cout << "-------------------------------------\n";
			cout << "This program allow you to calculate the function cot(x).\n";
			double num;
			double mode;
			int again;
			while (true){
				cout << "Choose mode (1. Degree, 2. Radian): \n";
				cin >> mode;
				
				if (mode != 1 && mode != 2){
					cout << "Invalid value, try again.\n";
					continue;
				}
				else {
					break;
				}
			}
			
			while (true){
				cout << "Enter a number: ";
				cin >> num;
				
				if (cin.fail()){
					cin.clear();
					cin.ignore(1000, '\n');
					cout << "Invalid data type, try again.\n";
					continue;
				}
				
				bool undefined = false;
				double result;
				if (mode == 1) {
        			if (abs(fmod(num, 180.0)) == 0){
        				undefined = true;
					}
					else {
						result =( cos(num * (PI / 180.0)) ) / ( sin(num * (PI / 180.0)) );
					}
				}
				else{
					if (abs(sin(num)) < 1e-15){
						undefined = true;
					}
					else {
						result = (cos(num)) / (sin(num));
					}
				}
				
				if (undefined){
					int again;
					cout << "Answer: Undefined (Infinity)\n";
	            	cout << "Do you want to try another number or end the program? (0. No, 1. Yes):\n";
	            	cin >> again;
	            	
	            	if (cin.fail()){
	            		cin.clear();
	            		cin.ignore(1000, '\n');
	            		cout << "Invalid value, try again.\n";
	            		continue;
					}
					if (again != 0 && again != 1){
						cout << "Invalid value, try again.\n";
	            		continue;
					}
	            	if (again == 0){
	            		return;
					}
					else {
						cout << "-------------------------------------\n";
						continue;
					}
				}
				if (abs(result) < 1e-10){
					result = 0;
				}
				cout << "Answer: " << result << "\n";
				break;
			}	
			break;
		}
	}	
}
void log(){  //hàm tính loga
	cout << "-------------------------------------\n";
	cout << "Choose which math expression you want to do:\n";
	cout << "1. Log a(x)\n";
	cout << "2. Log10(x)\n";
	cout << "3. Ln(x)\n";
	cout << "4. Exit\n";
	cout << "-------------------------------------\n";
	double choice;
	cout << "Choice: ";
	
	while (true){
		cin >> choice;
		
		if (cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid value, try again.\nChoice: ";
			continue;
		}
		if (choice != int(choice)){
			cout << "Invalid value, try again.\nChoice: ";
			continue;
		}
		if (choice < 1 || choice > 4){
			cout << "Invalid value, try again.\nChoice: ";
			continue;
		}
		else {
			break;
		}
	}
	if (choice == 4){
		return;
	}
	
	switch (int(choice)){
		case 1: {
			cout << "-------------------------------------\n";
			cout << "This program allow you to find the answer of the function log a(x)\n";
			cout << "Condition: x>0, a>0, a!=1\n";
			
			double num1;
			double num2;
			double result;
			int again;
			while (true){
				cout << "Enter 'a' number: ";
				cin >> num1;
				cout << "Enter 'x' number: ";
				cin >> num2;
				
				if ((num2 <= 0) || (num1<=0) || (num1==1)){
					cout << "Invalid value, do you want to try another number or end the program? (0. No, 1. Yes):\n";
		           	cin >> again;
		            	
		           	if (cin.fail()){
	            		cin.clear();
	            		cin.ignore(1000, '\n');
	            		cout << "Invalid value, try again.\n";
	            		continue;
					}
					if (again != 0 && again != 1){
						cout << "Invalid value, try again.\n";
	            		continue;
					}
		           	if (again == 0){
		           		return;
					}
					else {
						cout << "-------------------------------------\n";
						continue;
					}
				}
				else{
					result = log(num2)/log(num1);
					break;
				}
			}
			cout << "Answer: " << result << "\n";
			break;
		}
		case 2: {
			cout << "-------------------------------------\n";
			cout << "This program allow you to find the answer of the function log10(x)\n";
			cout << "Condition: x>0\n";
			
			double num;
			double result;
			int again;
			while (true){
				cout << "Enter 'x' number: ";
				cin >> num;
				
				if (num <= 0){
					cout << "Invalid value, do you want to try another number or end the program? (0. No, 1. Yes):\n";
		           	cin >> again;
		            	
		           	if (cin.fail()){
	            		cin.clear();
	            		cin.ignore(1000, '\n');
	            		cout << "Invalid value, try again.\n";
	            		continue;
					}
					if (again != 0 && again != 1){
						cout << "Invalid value, try again.\n";
	            		continue;
					}
		           	if (again == 0){
		           		return;
					}
					else {
						cout << "-------------------------------------\n";
						continue;
					}
				}
				else{
					result = log(num)/log(10);
					break;
				}
			}
			cout << "Answer: " << result << "\n";
			break;
		}
		case 3: {
			cout << "-------------------------------------\n";
			cout << "This program allow you to find the answer of the function ln(x)\n";
			cout << "Condition: x>0\n";
			const double E = 2.718281828;
			double num;
			double result;
			int again;
			while (true){
				cout << "Enter 'x' number: ";
				cin >> num;
				
				if (num <= 0){
					cout << "Invalid value, do you want to try another number or end the program? (0. No, 1. Yes):\n";
		           	cin >> again;
		            	
		           	if (cin.fail()){
	            		cin.clear();
	            		cin.ignore(1000, '\n');
	            		cout << "Invalid value, try again.\n";
	            		continue;
					}
					if (again != 0 && again != 1){
						cout << "Invalid value, try again.\n";
	            		continue;
					}
		           	if (again == 0){
		           		return;
					}
					else {
						cout << "-------------------------------------\n";
						continue;
					}
				}
				else{
					result = log(num)/log(E);
					break;
				}
			}
			cout << "Answer: " << result << "\n";
			break;
		}	
	}
}
int main(){
	bool running = true;
	
	
	while (running){
		cout << "Welcome, this is a Calculator app that will help you in doing some maths. Please choose what you want to do: \n";
		cout << "1. Basic math calculation (add, minus, multiply, divide)\n";
		cout << "2. More advance calculation (modulo, absolute value, GCD, LCM, factorial)\n";
		cout << "3. Exponential calculation (a^b)\n";
		cout << "4. Root calculation (sqrt, cbrt)\n";
		cout << "5. Quadratic function (ax^2+bx+c=0)\n";
		cout << "6. Trigonometric function (sin, cos, tan, cot)\n";
		cout << "7. Logarithm (log, ln)\n";
		cout << "0. Exit\n";
		cout << "-------------------------------------\n";
	
		int choice;
		cout << "Choice: ";
		cin >> choice;
	
	// CHECK DIEU KIEN
		if (cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid choice, try again.\n";
			continue;
		}
		
		switch (choice){
			case 1:
				cout << "Basic math selected\n";
				basicmath();
				break;
			case 2:
				cout << "Advance calculation selected\n";
				advanced();
				break;
			case 3:
				cout << "Exponential calculation selected\n";
				power();
				break;
			case 4:
				cout << "Root calculation selected\n";
				root();
				break;
			case 5:
				cout << "Quadratic funcion selected\n";
				quadratic();
				break;
			case 6:
				cout << "Trigonometry selected\n";
				trigo();
				break;
			case 7:
				cout << "Logarithm selected\n";
				log();
				break;
			case 0:
				running = false;
				cout << "Goodbye\n";
				return 0;
			default:
				cout << "Invalid choice, try again.\n";
		}
		int retryoption;
		while (true){
			cout << "-----------------------------------------\n";
			cout << "Do you want to use the calculator again?\n";
			cout << "0. No\n";
			cout << "1. Yes\n";
			cout << "-----------------------------------------\n";
			cin >> retryoption;
			
			if (retryoption == 1) {
				cout << "-----------------------------------------\n";
				break;
			}
			else if (retryoption == 0){
				cout << "Goodbye!\n";
				return 0;
			}
			else if (retryoption !=1 && retryoption !=0){
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Invalid option, try again.\n";
				continue;
			}
		}
	} // CLOSE WHILE LOOP
	return 0;
}