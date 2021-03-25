// The Tips.cpp is the Tips class function implementation file.

#include "Tips.h"

// This constructor handles tax rate passed to it
Tips::Tips(double rate)
{	taxRate = rate; }

// This is default constructor to handle the default tax rate
Tips::Tips()
{	taxRate = .085; }

// This function returns tip amount based on total bill and tip rate passed to it
double Tips::computeTip(double totalBill, double tipRate) const
{	double taxAmount = totalBill * (taxRate / 100);
    double mealCost = totalBill - taxAmount;
    return (mealCost * (tipRate / 100));
}