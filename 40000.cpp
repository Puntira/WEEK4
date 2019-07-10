#include<iostream>
using namespace std;
int main ()
{
	cout << "--------------------------------------------------------------------------- : "<<endl;
	int number1 ;
	cout << "Enter your score : ";
	cin >> number1;
	cout << "Your score : " << number1 << endl;
	if ( number1<=100) {
		cout << "Grade A\n";
	}

	else if (number1 >=80&&number1<=89) {
		cout << "Grade B\n";
	}
	else if (number1 >=70&&number1<=79) {
		cout << "Grade C\n";
	}
	else if (number1>=60&&number1<=69) {
		cout << "Grade D\n";
	}
	else if (number1 >=0&&number1<=59) {
		cout << "Grade F\n";
	}
	else {
		cout << "error\n";
	}
	cout << "--------------------------------------------------------------------------- : "<<endl;
	return(0);
}

	
	