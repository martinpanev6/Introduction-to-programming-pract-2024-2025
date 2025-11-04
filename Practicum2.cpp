// Practicum2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //task 1
	int year;
	cout << "Enter the year: \n";
	cin >> year;

	if ((year % 4 == 0) && (year % 100 != 0 || year % 400 == 0)) {
		cout << year << " is leap year.\n";
	}
	else {
		cout << year << " is not a leap year.";
	}

	//task 2
	char symbol;
	cout << "Enter the symbol: \n";
	cin >> symbol;

	if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z')) {
		if (symbol == 'A' || symbol == 'a' || symbol == 'E' || symbol == 'e' || symbol == 'I' || symbol == 'i' || symbol == 'O' || symbol == 'o' || symbol == 'U' || symbol == 'u') {
			cout << symbol << " is a vowel.";
		}
		else {
			cout << symbol << " is a consonant.";
		}
	}
	else {
		cout << symbol << " is not from the latin alphabet.";
	}

	//task 3
	int firstNumber, secondNumber, max;


	cout << "Enter two numbers: \n";
	cin >> firstNumber >> secondNumber;

	(firstNumber > secondNumber) ? max = firstNumber : max = secondNumber;

	cout << "The bigger number is: " << max;

	//task 4
	int result, grade;

	cout << "Enter the percentage from the exam: ";
	cin >> result;


	if (result >= 0 && result < 40) {
		grade = 2;
	}
	else if (result < 60) {
		grade = 3;
	}
	else if (result < 70) {
		grade = 4;
	}
	else if (result < 80) {
		grade = 5;
	}
	else if(result <= 100){
		grade = 6;
	}
	else {
		cout << "The input is invalid.";
		return 1;
	}

	cout << "The grade is: " << grade;

	//task 5
	int firstSide, secondSide, thirdSide;

	cout << "Enter the lengths of the three sides of the triangle: \n";
	cin >> firstSide >> secondSide >> thirdSide;

	if ((firstSide + secondSide) > thirdSide && (secondSide + thirdSide) > firstSide && (firstSide + thirdSide) > secondSide) {
		cout << "The triangle is valid.";
	}
	else {
		cout << "The triangle is not valid.";
	}

	//task 6
	int a, b, c, discriminant, x1, x2;

	cout << "Enter the coefficients of the equation: \n";
	cin >> a >> b >> c;

	discriminant = b * b - 4 * a * c;

	if (discriminant > 0) {
		x1 = (-b + sqrt(discriminant)) / 2 * a;
		x2 = (-b - sqrt(discriminant)) / 2 * a;
		cout << "The solutions of the equation are x1 = " << x1 << " and x2 = " << x2 << "\n";
	}
	else if (discriminant == 0) {
		x1 = -b / 2 * a;
		x2 = x1;
		cout << "The equation has one double solution x = " << x1;
	}
	else {
		cout << "The equation has no real solutions.";
	}

	//task 7
	char symbol;
	cout << "Enter a letter: \n";
	cin >> symbol;

	if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z')) {
		switch (symbol) {
		case 'A': symbol = 'a'; break;
		case 'B': symbol = 'b'; break;
		case 'C': symbol = 'c'; break;
		case 'D': symbol = 'd'; break;
		case 'E': symbol = 'e'; break;
		case 'F': symbol = 'f'; break;
		case 'G': symbol = 'g'; break;
		case 'H': symbol = 'h'; break;
		case 'I': symbol = 'i'; break;
		case 'J': symbol = 'j'; break;
		case 'K': symbol = 'k'; break;
		case 'L': symbol = 'l'; break;
		case 'O': symbol = 'o'; break;
		case 'M': symbol = 'm'; break;
		case 'N': symbol = 'n'; break;
		case 'P': symbol = 'p'; break;
		case 'Q': symbol = 'q'; break;
		case 'R': symbol = 'r'; break;
		case 'S': symbol = 's'; break;
		case 'T': symbol = 't'; break;
		case 'U': symbol = 'u'; break;
		case 'V': symbol = 'v'; break;
		case 'Z': symbol = 'z'; break;
		case 'W': symbol = 'w'; break;
		case 'Y': symbol = 'y'; break;
		case 'a': symbol = 'A'; break;
		case 'b': symbol = 'B'; break;
		case 'c': symbol = 'C'; break;
		case 'd': symbol = 'D'; break;
		case 'e': symbol = 'E'; break;
		case 'f': symbol = 'F'; break;
		case 'g': symbol = 'G'; break;
		case 'h': symbol = 'H'; break;
		case 'i': symbol = 'I'; break;
		case 'j': symbol = 'J'; break;
		case 'k': symbol = 'K'; break;
		case 'l': symbol = 'L'; break;
		case 'o': symbol = 'O'; break;
		case 'm': symbol = 'M'; break;
		case 'n': symbol = 'N'; break;
		case 'p': symbol = 'P'; break;
		case 'q': symbol = 'Q'; break;
		case 'r': symbol = 'R'; break;
		case 's': symbol = 'S'; break;
		case 't': symbol = 'T'; break;
		case 'u': symbol = 'U'; break;
		case 'v': symbol = 'V'; break;
		case 'z': symbol = 'Z'; break;
		case 'w': symbol = 'W'; break;
		case 'y': symbol = 'Y'; break;
		}
	}
	else {
		cout << symbol << " is not a letter.";
		return 1;
	}
	cout << "The letter is: " << symbol;

	//task 8
	int num;

	cout << "Enter a number: \n";
	cin >> num;

	switch (num) {
	case 1: cout << "The number in Roman numbers is I.";
		break;
	case 2: cout << "The number in Roman numbers is II.";
		break;
	case 3: cout << "The number in Roman numbers is III.";
		break;
	case 4: cout << "The number in Roman numbers is IV.";
		break;
	case 5: cout << "The number in Roman numbers is V.";
		break;
	case 6: cout << "The number in Roman numbers is VI.";
		break;
	case 7: cout << "The number in Roman numbers is VII.";
		break;
	case 8: cout << "The number in Roman numbers is VIII.";
		break;
	case 9: cout << "The number in Roman numbers is IX.";
		break;
	}

	//task 9
	int firstNumber, secondNumber, thirdnumber;

	cout << "Enter three numbers: \n";
	cin >> firstNumber >> secondNumber >> thirdnumber;

	if (firstNumber > secondNumber && firstNumber > thirdnumber) {
		if (secondNumber > thirdnumber) {
			cout << thirdnumber << " " << secondNumber << " " << firstNumber;
		}
		else {
			cout << secondNumber << " " << thirdnumber << " " << firstNumber;
		}
	}
	else if (secondNumber > firstNumber && secondNumber > thirdnumber) {
		if (firstNumber > thirdnumber) {
			cout << thirdnumber << " " << firstNumber << " " << secondNumber;
		}
		else {
			cout << firstNumber << " " << thirdnumber << " " << secondNumber;
		}
	}
	else if (thirdnumber > firstNumber && thirdnumber > secondNumber) {
		if (firstNumber > secondNumber) {
			cout << secondNumber << " " << firstNumber << " " << thirdnumber;
		}
		else {
			cout << firstNumber << " " << secondNumber << " " << thirdnumber;
		}
	}
	
	//task 10
	int firstNumber, secondNumber;
	char oper;

	cout << "Enter two numbers: \n";
	cin >> firstNumber >> secondNumber;
	cout << "Enter operator: \n";
	cin >> oper;

	if (oper == '+') {
		cout << "The sum of the two numbers is " << firstNumber + secondNumber << endl;
	}
	else if (oper == '-') {
		cout << "The difference between the two numbers is " << firstNumber - secondNumber << endl;
	}
	else if (oper == '*') {
		cout << "The product of the two numbers is " << firstNumber * secondNumber << endl;
	}
	else if (oper == '/') {
		if (secondNumber == 0) {
			cout << "You can not divide by 0!";
		}
		else {
			cout << "The quotient of the two numbers is " << firstNumber / secondNumber << endl;
		}
	}

	//task 11
	int firstNumber, secondNumber, thirdnumber;

	cout << "Enter three numbers: \n";
	cin >> firstNumber >> secondNumber >> thirdnumber;

	if (firstNumber > secondNumber && firstNumber > thirdnumber) {
		if (secondNumber > thirdnumber) {
			cout << firstNumber << secondNumber << thirdnumber;
		}
		else {
			cout << firstNumber << thirdnumber << secondNumber;
		}
	}
	else if (secondNumber > firstNumber && secondNumber > thirdnumber) {
		if (firstNumber > thirdnumber) {
			cout << secondNumber << firstNumber << thirdnumber;
		}
		else {
			cout << secondNumber << thirdnumber << firstNumber;
		}
	}
	else if (thirdnumber > firstNumber && thirdnumber > secondNumber) {
		if (firstNumber > secondNumber) {
			cout << thirdnumber << firstNumber << secondNumber;
		}
		else {
			cout << thirdnumber << secondNumber << firstNumber;
		}
	}
	
	//task 12
	int day, month;

	cout << "Enter a day and a month: \n";
	cin >> day >> month;

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		if (day == 31) {
			day = 1;
			month++;
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		if (day == 30) {
			day = 1;
			month++;
		}
	}
	else {
		if (day == 28) {
			day = 1;
			month++;
		}
	}
	cout << "The following day is: " << day << "." << month;

	//task 13
	int starterNum, firstNewNum, secondNewnum, firstDigit, secondDigit, thirdDigit, fourthDigit;

	cout << "Enter a 4-digit number: \n";
	cin >> starterNum;

	fourthDigit = starterNum % 10;
	starterNum /= 10;
	thirdDigit = starterNum % 10;
	starterNum /= 10;
	secondDigit = starterNum % 10;
	starterNum /= 10;
	firstDigit = starterNum % 10;

	firstNewNum = firstDigit * 10 + fourthDigit;
	secondNewnum = secondDigit * 10 + thirdDigit;

	if (firstNewNum > secondNewnum) {
		cout << firstNewNum << " > " << secondNewnum << " - bigger." << endl;
	}
	else if (firstNewNum == secondNewnum) {
		cout << firstNewNum << " = " << secondNewnum << " - equal." << endl;
	}
	else {
		cout << firstNewNum << " < " << secondNewnum << " - smaller." << endl;
	}

	//task 14
	int price, portsCount, ram;
	bool ssd, buyingLaptop;
	
	cout << "Enter price of the laptop, counts of the usb ports, ram in gb and availability of ssd.\n";
	cin >> price >> portsCount >> ram >> ssd;

	if ((price >= 1000 && price <= 1500) && (portsCount >= 3) && (ssd >= 8) && ssd) {
		buyingLaptop = true;
	}
	else {
		buyingLaptop = false;
	}

	cout << buyingLaptop ? "Tisho is ready to buy the laptop." : "Tisho is giving 800 lv. most for the laptop.";

	//task 15
	int tomatoes, peppers, carrots, olives, potatoes, dressing;
	bool friendForHelp;

	cout << "Enter how many of each products he has and if a friend will come: \n";
	cin >> tomatoes >> peppers >> carrots >> olives >> potatoes >> dressing >> friendForHelp;

	if (tomatoes >= 1 && peppers >= 2 && carrots >= 4 && olives >= 3 && potatoes >= 3 && dressing >= 150) {
		if (tomatoes >= 2 && peppers >= 3 && carrots >= 5 && olives >= 6 && potatoes >= 10 && dressing >= 200 && friendForHelp) {
			if (tomatoes >= 5 && peppers >= 6 && carrots >= 12 && olives >= 7 && potatoes >= 12 && dressing >= 300) {
				cout << "He has products for student stew.";
				return 1;
			}
			cout << "He has products for student soup.";
			return 1;
		}
		cout << "He has products for student salad.";
		return 1;
	}

	cout << "He doesn't have enough products for anything.";
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
