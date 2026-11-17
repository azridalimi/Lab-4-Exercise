// Task: B2 - employee income tax: Tax = 0.25 * (monthly income * 11 - number of kids * 450).
// Name: MUHAMMAD AZRI BIN AHMAD DALIMI  Matric: A26CS0211
#include <iostream>
#include <string>
using namespace std;


int main()
{
    // TODO 1: define three named constants: TAX_RATE (0.25), MONTHS (11), RELIEF_PER_KID (450)
    //         e.g.  const double TAX_RATE = 0.25;
    const double TAX_RATE = 0.25;
    const int MONTHS = 11;
    const int RELIEF_PER_KID = 450;
    
    // TODO 2: declare name (string), monthlyIncome (double), numKids (int), tax (double)
    string name;
    double monthlyIncome, tax;
    int numKids;

    // TODO 3: prompt for and read each value (one prompt before each cin)
    cout<<"Enter your name (one word) : ";
    cin>>name;
    cout<<"Enter monthly income (RM) : ";
    cin>>monthlyIncome;
    cout<<"Enter number of kids : ";
    cin>>numKids;

    // TODO 4: calculate tax using the constants - no bare numbers in the formula
    tax = 0.25 * (monthlyIncome * 11 - numKids * 450);

    // TODO 5: print "Employee: <name>" and "Tax: RM <tax>"
    cout<<"Employee : "<<name<<"\n";
    cout<<"Tax : "<<tax;

    return 0;
}
