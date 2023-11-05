#include <iostream>
using namespace std;

struct WeatherData
{
	double rainfall;
	double hightemp;
	double lowtemp;
	double avgtemp;
};
int main()
{
	const int MONTHS= 12;		
	WeatherData months[MONTHS];     
	int count = 0;
	double annualrainfall = 0.0, averagerainfall, averagetemperature;
	double sumtemp = 0;
	double High_Temp;
	double Low_Temp;

	for (int  count= 0; count < MONTHS; count++)
	{
		cout << "Month: " << (count + 1) << endl;
		cout << "Enter the total rainfall this month: ";
		cin >> months[count].rainfall;

		if (months[count].rainfall < 0)
		{
			cout << "Error, please enter a valid number: ";
			cin >> months[count].rainfall;
		}
		cout << "Enter the lowest temperature: ";
		cin >> months[count].lowtemp;
		Low_Temp = months[0].lowtemp;
		for (int i = 1;  i < MONTHS; i++)
		{
			if (months[i].lowtemp <= Low_Temp)
			{
				Low_Temp = months[i].lowtemp;
			}
			if (months[count].lowtemp < -100 || months[count].lowtemp > 140)
			{
				cout << "Error, please enter a temperature within the range between -100 and 140 degrees Fanhrenheit: ";
				cin >> months[count].lowtemp;
			}
		}
		cout << "Enter the highest temperature: ";
		cin >> months[count].hightemp;
		High_Temp = months[0].hightemp;
		for (int i = 1; i < MONTHS; i++)
		{
			if (months[i].hightemp >= High_Temp)
			{
				High_Temp = months[count].hightemp;
			}
			if (months[count].hightemp < -100 || months[count].hightemp > 140)
			{
				cout << "Error, please enter a temperature within the range between -100 and 140 degrees Fanhrenheit: ";
				cin >> months[count].hightemp;
			}
		}
		annualrainfall += months[count].rainfall;
		averagerainfall = annualrainfall / 12;
		sumtemp += months[count].lowtemp + months[count].hightemp;
		averagetemperature = (sumtemp / 2) / 12;
		cout << endl;
	}

	cout << "\n\n\t\tWeather Statistics"
	     << "\nThe total rainfall in the year is " << annualrainfall << " inches"
		 << "\nThe average monthly rainfall is " << averagerainfall << " inches"
	     << "\nThe average temperature is " << averagetemperature << " Fanrenheit"
	     << "\nHighest Temperature: " << months[count].hightemp 
         << "\nLowest Temperature: " << months[count].lowtemp << endl;

	system("pause");
	return 0;
}