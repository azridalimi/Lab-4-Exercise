// Task: B1 - read the length and width of a rectangle, then print its area and perimeter.
// Name: MUHAMMAD AZRI BIN AHMAD DALIMI  Matric: A26CS0211
#include <iostream>
using namespace std;

int main()
{
    // TODO 1: declare four double variables: length, width, area, perimeter
    double length, width, area, perimeter;
    // TODO 2: print a prompt, then read length and width with ONE cin statement
    cout<<"Enter length : \n";
    cout<<"Enter width : \n";
    cin>>length>>width;
    // TODO 3: calculate area and perimeter
    area = length*width;
    perimeter = ( 2 * length )+( 2 * width );
    // TODO 4: print "Area = ..." and "Perimeter = ..." on separate lines
    cout<<"Area : "<<area<<"\n";
    cout<<"Perimeter : "<<perimeter;
    return 0;
}
