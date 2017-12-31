
#include <iostream>
#include <iomanip>
using namespace std;
// Main function
int main()
{
/* Declaring variables*/
void line();
double monthlyPayment;
double balance;
double interestRate;
int duration;
int month = 0;
/* These lines force currency format in output to 2 decimal pts*/
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
cout << "\nPROGRAM TO CALCULATE MONHLY PAYMENT OF A LOAN\n";
/* Process*/
cout << "\nEnter the current balance of your loan= Rs ";
cin >> balance;
cout << "\nEnter the interest rate (compounded monthly) : ";
cin >> interestRate;
cout << "\nEnter the desired duration in months : ";
cin >> duration;
interestRate = interestRate / 100;
monthlyPayment = balance*(1+interestRate)/duration;
balance = balance*(1+interestRate);
cout << "\nLoan amount to be paid is Rs " << balance << " for " << duration << " months\n\n";
line();
/* Output result*/
cout << "| Month | Monthly Payment(Rs)| Balance(Rs)          | \n";
line();
while (balance > 1 )
{
balance = balance - monthlyPayment;
month = month + 1;
cout <<"| "<< setw(4) << left << month <<"	| " << setw(18)<< monthlyPayment << " | " << setw(20) << balance <<" |" << endl;
}
line();
cout << "| You have paid off the loan at this point.	    |" << endl;
line();
/* terminate program*/
return 0;
}
/* Function to display dotted lines for table format*/
void line()
{
for(int i=1;i<54;i++)
cout<<"-";
cout<<"\n";
}

