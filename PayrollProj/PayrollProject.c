#include <stdio.h>
#include <string.h>

static void payrollFunction();

int main() 
{
	// Calls the the function for the payroll
	payrollFunction();

	return 0;

}

static void payrollFunction() 
{

	// Prompt user for hourly wage
	printf("What is your hourly wage?: ");
	double wage = 0.0;
	// Read user input for wage
	scanf_s("%lf", &wage);

	// Prompt user for hours worked
	printf("How many hours did you work during this pay period?: ");
	double hours = 0.0;
	// Read user input for hours
	scanf_s("%lf", &hours);

	// Calculate gross pay
	double grossPay = wage * hours;

	printf("You made $%.2lf during this pay period.\n", grossPay);

	// Prompt user for tax percentage
	printf("What percent of your gross pay goes to taxes? (ex. 45):");
	double taxPercent = 0.0;
	// Read user input for tax percentage
	scanf_s("%lf", &taxPercent);


	// Calculate taxes paid
	double taxesPaid = grossPay * (taxPercent / 100);

	// Print how much taxes were paid
	printf("You paid $%.2lf in taxes this pay period.\n", taxesPaid);

	// Calculate take-home pay
	double takehomePay = grossPay - taxesPaid;

	// Print how much money the taxpayer took home
	printf("You took home $%.2lf as a result of this pay period.", takehomePay);

	printf("\n");

}