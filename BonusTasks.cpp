#include <iostream>
using namespace std;

int main()
{
	//Bonus task 1
	int yearsCount;
	double startSum, annualPercent, finalSum;

	cout << "Enter the starter sum: ";
	cin >> startSum;
	cout << "Enter the annual percentage of the interest: ";
	cin >> annualPercent;
	cout << "Enter the count of the years: ";
	cin >> yearsCount;

	finalSum = startSum * (1 + annualPercent / 100 * yearsCount);
	cout << "The final sum is " << finalSum << ".";

	//Bonus task 2
	double temperature, humidityPercent, dewPoint;

	cout << "Enter the temperature in C: ";
	cin >> temperature;
	cout << "Enter the percent of the humidity: ";
	cin >> humidityPercent;

	dewPoint = temperature - ((100 - humidityPercent) / 5);

	cout << "The dew point is: " << dewPoint << ".00 C";

	//Bonus task 3
	double acceleration, distance, time;

	cout << "Enter the acceleration: ";
	cin >> acceleration;
	cout << "Enter the distance: ";
	cin >> distance;

	time = sqrt(2 * distance / acceleration);

	cout << "the time in seconds is: " << time;

	//Bonus task 4
	double iceInKg, warmth, j, kj;

	cout << "Enter the ice in kilograms: ";
	cin >> iceInKg;

	warmth = 334000;
	j = iceInKg * warmth;
	kj = j / 1000;

	cout << "The energy in jauls is: " << j << endl;
	cout << "The energy in kilojauls is: " << kj;

	//Bonus task 5
	double sumWithoutTax, sumWithTax, course, sumInEu;

	cout << "Enter the sum in euro: ";
	cin >> sumInEu;
	cout << "Enter the course: ";
	cin >> course;

	sumWithoutTax = sumInEu * course;
	sumWithTax = 98.00 / 100.00 * sumWithoutTax;

	cout << "The final sum without tax is: " << sumWithoutTax << endl;
	cout << "The final sum with the tax is: " << sumWithTax;

	//Bonus task 7
	double voltage, resistance, electricity, power;

	cout << "Enter the voltage: ";
	cin >> voltage;
	cout << "Enter the resistance: ";
	cin >> resistance;

	electricity = voltage / resistance;
	power = voltage * electricity;

	cout << "The electricity is: " << electricity << " A, " << "and the power is: " << power << " W";

	//Bonus task 8 
	int length, width, height, volume, weightKg, weightN;

	cout << "Enter the length, the width and the volume of the block: ";
	cin >> length >> width >> height;

	volume = length * width * height;
	weightKg = 2400 * volume;
	weightN = weightKg * 9.81;

	cout << "The weight in kilograms is: " << weightKg << endl;
	cout << "The weight in noutons is: " << weightN;

	//Bonus task 9
	double distanceKm, time, speedKm, speedM;

	cout << "Enter the distance in kilometers: ";
	cin >> distanceKm;
	cout << "Enter the time: ";
	cin >> time;

	speedKm = distanceKm / time;
	speedM = (distanceKm * 1000) / (time * 3600);

	cout << "Average speed is " << speedKm << "km/h and " << speedM << "m/s.";

	//Bonus task 10
	double productPrice, expenses, profit, profitability;
	int selledProductsCount;

	cout << "Enter the price of one product: ";
	cin >> productPrice;
	cout << "Enter the number of the selled products: ";
	cin >> selledProductsCount;
	cout << "Enter the expenses for production: ";
	cin >> expenses;

	profit = productPrice * selledProductsCount - expenses;
	profitability = (profit / expenses) * 100;

	cout << "The profit is: " << profit << "\n" << "The profitability is: " << profitability << "%";

	//Bonus harder task
	double fridgePowerW, washingMachinePowerW, tvPowerW, computerPowerW, ligthningPowerW;
	double fridgeHours, washingMachineHours, tvHours, computerHours, ligthningHours;
	double fridgeEnergyPerDay, washingMachineEnergyPerDay, tvEnergyPerDay, computerEnergyPerDay, ligthningEnergyPerDay;
	double consumptionPerMonth, avrgConsumptionPerDay;

	cout << "Enter the power in W and the working hours per day of the fridge: ";
	cin >> fridgePowerW >> fridgeHours;
	cout << "Enter the power in W and the working hours per day of the washing machine: ";
	cin >> washingMachinePowerW >> washingMachineHours;
	cout << "Enter the power in W and the working hours per day of the TV: ";
	cin >> tvPowerW >> tvHours;
	cout << "Enter the power in W and the working hours per day of the computer: ";
	cin >> computerPowerW >> computerHours;
	cout << "Enter the power in W and the working hours per day of the ligthning: ";
	cin >> ligthningPowerW >> ligthningHours;

	fridgeEnergyPerDay = (fridgePowerW * fridgeHours) / 1000;
	washingMachineEnergyPerDay = (washingMachinePowerW * washingMachineHours) / 1000;
	tvEnergyPerDay = (tvPowerW * tvHours) / 1000;
	computerEnergyPerDay = (computerPowerW * computerHours) / 1000;
	ligthningEnergyPerDay = (ligthningPowerW * ligthningHours) / 1000;

	cout << "The energy used from the fridge per month is: " << fridgeEnergyPerDay * 30 << "\n";
	cout << "The energy used from the washing machine per month is: " << washingMachineEnergyPerDay * 30 << "\n";
	cout << "The energy used from the TV per month is: " << tvEnergyPerDay * 30 << "\n";
	cout << "The energy used from the computer per month is: " << computerEnergyPerDay * 30 << "\n";
	cout << "The energy used from the lightning per month is: " << ligthningEnergyPerDay * 30 << "\n";

	consumptionPerMonth = ((fridgeEnergyPerDay + washingMachineEnergyPerDay + tvEnergyPerDay + computerEnergyPerDay + ligthningEnergyPerDay) * 30);
	avrgConsumptionPerDay = consumptionPerMonth / 30;

	cout << "The general consumption per month is: " << consumptionPerMonth << "\n";
	cout << "The general fee per month is: " << consumptionPerMonth * 0.25 << "\n";
	cout << "The average consumption per day is: " << avrgConsumptionPerDay << "\n";

	cout << "The percentage participation of the fridge is: " << ((fridgeEnergyPerDay * 30) / consumptionPerMonth) * 100 << "% \n";
	cout << "The percentage participation of the washing machine is: " << ((washingMachineEnergyPerDay * 30) / consumptionPerMonth) * 100 << "% \n";
	cout << "The percentage participation of the TV is: " << ((tvEnergyPerDay * 30) / consumptionPerMonth) * 100 << "% \n";
	cout << "The percentage participation of the computer is: " << ((computerEnergyPerDay * 30) / consumptionPerMonth) * 100 << "% \n";
	cout << "The percentage participation of the lightning is: " << ((ligthningEnergyPerDay * 30) / consumptionPerMonth) * 100 << "% \n";

}