#include <iostream>
using namespace std;

int main()
{

	//task 1
	char firstline[] = "Oh what";
	char secondline[] = "a happy day!";
	char thirdLine[] = "Oh yes,";
	char lastLine[] = "what a happy day!";

	cout << firstline << endl;
	cout << secondline << endl;
	cout << thirdLine << endl;
	cout << lastLine;

	//task 2
	double a = 5.4;
	double b = 7.9;
	double p = 2 * a + 2 * b;
	double s = a * b;
	cout << "The perimeter of the rectangle is " << p << "." << endl;
	cout << "The square of the rectangle is " << s << ".";

	//task 3
	double moneyLv;
	char firstMsg[] = "Enter the money in Lv.";
	char euMoneyMsg[] = "Your money in euro is: ";
	char usdMoneyMsg[] = "Your money in usd is: ";
	cout << firstMsg << endl;
	cin >> moneyLv;
	cout << euMoneyMsg << moneyLv * 0.51 << "." << endl;
	cout << usdMoneyMsg << moneyLv * 0.60 << ".";

	//task 4
	double firstSide, secondSide;
	char firstMsg[] = "Please enter the length of the first side:";
	char secondMsg[] = "Please enter the length of the second side:";
	cout << firstMsg;
	cin >> firstSide;
	cout << secondMsg;
	cin >> secondSide;
	double perimeter = 2 * firstSide + 2 * secondSide;
	double face = firstSide * secondSide;
	cout << "The perimeter of the rectangle is: " << perimeter << endl;
	cout << "the face of the rectangle is: " << face << endl;

	//task 5
	int firstDigit, secondDigit, thirdDigit;
	cout << "Please, enter three numbers: ";
	cin >> firstDigit;
	cin >> secondDigit;
	cin >> thirdDigit;

	cout << firstDigit << " < " << secondDigit << " < " << thirdDigit << " " << boolalpha <<
		(firstDigit < secondDigit && secondDigit < thirdDigit);

	//task 6
	int dividend, divisor, quotient, remainder;
	cout << "Please enter the divident: ";
	cin >> dividend;
	cout << "Please enter the divisor: ";
	cin >> divisor;
	quotient = dividend / divisor;
	remainder = dividend % divisor;
	cout << "The quotient of the division is: " << quotient << "." << endl;
	cout << "The remainder of the division is: " << remainder << ".";

	//task 7
	int apples, pears, bananas;
	cout << "Enter the number of the apples: ";
	cin >> apples;
	cout << "Enter the numbers of the pears: ";
	cin >> pears;
	cout << "Enter the numbers of the bananas: ";
	cin >> bananas;
	cout << "Pesho, don’t forget to buy " << apples << " apples, " << pears << " pears and " << bananas << " bananas!";

	//task 8
	double pi = 3.14159265;
	double r, d;
	cout << "Enter the length of the radius: ";
	cin >> r;
	d = 2 * pi * r;
	cout << "The length of the circle is: " << d;

	//task 9
	int a, b, c, discriminant, x1, x2;
	cout << "Please enter the coefficients: ";
	cin >> a;
	cin >> b;
	cin >> c;
	discriminant = sqrt(b * b - 4 * a * c);
	x1 = (-b + discriminant) / 2 * a;
	x2 = (-b - discriminant) / 2 * a;
	cout << "The first solution of the equation is: " << x1 << endl;
	cout << "The second solution of the equation is: " << x2;

	//task 10
	int a, b, c;
	cout << "Enter the first number: " << endl;
	cin >> a;
	cout << "Enter the second number: " << endl;
	cin >> b;
	c = a;
	a = b;
	b = c;
	cout << "The replaced numbers are : " << a << " and " << b;


	//task 11
	int firstDigit, secondDigit;
	cout << "Enter first digit: ";
	cin >> firstDigit;
	cout << "Enter second digit: ";
	cin >> secondDigit;

	bool isBigger = firstDigit > secondDigit;

	cout << "The maximum of the two numbers is: " << firstDigit * isBigger + secondDigit * (!isBigger);


	//task 12
	int seconds, minutes, hours, days;
	cout << "Enter the seconds: ";
	cin >> seconds;

	minutes = seconds / 60;
	seconds = seconds % 60;
	hours = minutes / 60;
	minutes = minutes % 60;
	days = hours / 24;
	hours = hours % 24;

	cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds.";

	//task 13
	int firstDigit, secondDigit;
	cout << "Enter first digit: ";
	cin >> firstDigit;
	cout << "Enter second digit: ";
	cin >> secondDigit;

	cout << firstDigit << " < " << secondDigit << " " << firstDigit << " > " << secondDigit << " " <<
		boolalpha << (firstDigit < secondDigit || firstDigit > secondDigit);

	//task 14
	unsigned long long int cardNum;
	cout << "Enter the card number: ";
	cin >> cardNum;
	cout << "The card number is: XXXXXXXXXXXX" << cardNum % 10000 << endl;

}