// Task: C1 - circle calculator. PI is a named constant: const double PI.
// Save a second copy as C1_circle_define.cpp and use #define PI instead.
// Name: MUHAMMAD AZRI BIN AHMAD DALIMI  Matric: A26CS0211
#include <iostream>
using namespace std;
int main()
{
    // TODO 1: const double PI = 3.14159;
    const double PI = 3.14159;
    // TODO 2: declare radius, diameter, circumference, area (double)
    double radius, diameter, circumference, area;
    // TODO 3: prompt for and read the radius
    cout << "Enter the radius: ";
    cin >> radius;
    // TODO 4: diameter = 2 * radius;  circumference = 2 * PI * radius;  area = PI * radius * radius  (no pow yet)
    diameter = 2 * radius;  
    circumference = 2 * PI * radius;  
    area = PI * radius * radius;
    // TODO 5: print the three results, one per line, with labels, using cout only
    cout << "Diameter: " << diameter << "\n";
    cout << "Circumference: " << circumference << "\n";
    cout << "Area: " << area << "\n";
    return 0;
}
