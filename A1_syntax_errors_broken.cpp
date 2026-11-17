/* Task: add two prices and show the total and the average. */
// Name: MUHAMMAD AZRI BIN AHMAD DALIMI  Matric: A26CS0211
#include <iostream>
using namespace std;
int main()
{
    int priceA, priceB, total;
    priceA = 3;
    priceB = 4;
    total = priceA + priceB;
    double average = total / 2.0;
    cout << "The total is RM " << total << endl;
    cout << "The average is RM " << average << endl;
    
    return 0;
}
