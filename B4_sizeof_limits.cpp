// Task: B4 - sizeof and limits of the basic types, plus wrap-around (overflow) demonstrations.
// Limits come from <climits> (CHAR_MIN, SHRT_MAX, INT_MAX, LONG_MAX ...) and <cfloat> (FLT_MAX, DBL_MAX).
// Name: MUHAMMAD AZRI BIN AHMAD DALIMI  Matric: A26CS0211
#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;

int main()
{
    cout << "char   : " << sizeof(char) << " byte(s), range " << CHAR_MIN << " to " << CHAR_MAX << endl;
    cout << "short  : " << sizeof(short) << " byte(s), range " << SHRT_MIN << " to " << SHRT_MAX << endl;
    // TODO 1: add one line each for int, long, float, double (use -FLT_MAX and FLT_MAX for float)
    cout << "int   : " << sizeof(int) << " byte(s), range " << INT_MIN << " to " << INT_MAX << endl;
    cout << "long  : " << sizeof(long) << " byte(s), range " << LONG_MIN << " to " << LONG_MAX << endl;
    cout << "float  : " << sizeof(float) << " byte(s), range " << FLT_MIN << " to " << FLT_MAX << endl;
    cout << "double  : " << sizeof(double) << " byte(s), range " << DBL_MIN << " to " << DBL_MAX << endl;

    // TODO 2: add a line for bool: its size, and the values false and true
    cout << "bool  : " << sizeof(bool) << " byte(s), range " << false << " to " << true << endl;
    // TODO 3: print the literals 075, 0x75A and 1234L. Predict the three numbers first.
    cout << "075: " << 075 << endl;      
    cout << "0x75A: " << 0x75A << endl;   
    cout << "1234L: " << 1234L << endl;   
    // TODO 4: unsigned char level = 254; then add 1 to it three times, printing
    unsigned char level = 254;
    level += 1;
    cout << "254 + 1 = " << static_cast<int>(level) <<endl;
    level += 1;
    cout << "255 + 1 = " << static_cast<int>(level) <<endl;
    level += 1;
    cout << "0 + 1 = " << static_cast<int>(level) <<endl;
    //         static_cast<int>(level) after each addition. Then set level = 0, subtract 1, print.
    level = 0;
    level -= 1;
    cout << "0 - 1   = " << static_cast<int>(level) << endl;

    // TODO 5: short small = 32767; add 1; print small.
    short small = 32767;
    small += 1;
    cout << "32767 + 1 = " << small ;
    return 0;
}
