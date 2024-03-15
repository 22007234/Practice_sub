#include <iostream>
using namespace std;

int main() {

double merchandiseCost, employeesSalary, yearlyRent, electricityCost;
double desiredProfitPercentage = 0.10;
double saleDiscountPercentage = 0.15;

cout << "Enter the total cost of merchandise: ";
    cin >> merchandiseCost;
 
cout << "Enter the salary of employees (including Linda's own salary): ";
    cin >> employeesSalary;
   
cout << "Enter the yearly rent: ";
    cin >> yearlyRent;
    
 cout << "Enter the estimated electricity cost: ";
    cin >> electricityCost;

double totalExpenses = merchandiseCost + employeesSalary + yearlyRent + electricityCost;

   double targetRevenue = totalExpenses / (1 - desiredProfitPercentage);


  double sellingPriceAfterDiscount = targetRevenue / (1 - saleDiscountPercentage);

    double markup = sellingPriceAfterDiscount - merchandiseCost;

    cout << "The merchandise should be marked up by approximately $" << markup << endl;

    return 0;
}
