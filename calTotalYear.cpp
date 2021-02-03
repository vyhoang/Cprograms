// Calculate and display monthly and yearly cost

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double rent, util, phone, internet;
	double monthlyTotal, yearlyTotal;
	
	cout <<"Enter monthly cost for rent: \n";
	cin >> rent;
	cout <<"Enter monthly cost for utilities: \n";
	cin >> util;
	cout <<"Enter monthly cost for phone: \n";
	cin >> phone;
	cout <<"Enter monthly cost for internet: \n";
	cin >> internet;
	
	monthlyTotal = rent + util + phone + internet;
	yearlyTotal = monthlyTotal * 12;
	
	cout << fixed << setprecision(3);
	cout << "Monthly Cost: " << "$" << setw(8) << monthlyTotal << endl;
	cout << "Yearly Cost: " << "$" << setw(9) << yearlyTotal << endl;
	
	return 0;
	
	
}
