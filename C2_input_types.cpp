// Task: C2 - read an int, a double, a char, a C-string and a string, then print them back (Ch3, slide 43).
// Type fewer than 20 characters for the C-string: arrays and their limits come in Week 9.
// Name: MUHAMMAD AZRI BIN AHMAD DALIMI  Matric: A26CS0211
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // TODO 1: declare  int count;  double decimal;  char single;  char word[21];  string name;
    int count;  
    double decimal;  
    char single;  
    char word[21];  
    string name;
    // TODO 2: prompt for and read each one, in that order
    cout << "Enter an integer count: ";
    cin >> count;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    cout << "Enter a single character: ";
    cin >> single;

    cout << "Enter a word : ";
    cin >> word;

    cout << "Enter your full name: ";
    cin >> name;
    // TODO 3: print all five values back, one per line, with labels
    cout << "Count: " << count << "\n";
    cout << "Decimal: " << decimal << "\n";
    cout << "Single: " << single << "\n";
    cout << "Word: " << word << "\n";
    cout << "Name: " << name << "\n";
    return 0;
}
