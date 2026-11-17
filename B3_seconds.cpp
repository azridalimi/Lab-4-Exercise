// Task: B3 - convert a number of seconds into hours, minutes and seconds using / and %.
// Name: MUHAMMAD AZRI BIN AHMAD DALIMI  Matric: A26CS0211
#include <iostream>
using namespace std;

int main()
{
    // TODO 1: declare totalSeconds, hours, minutes, seconds (all int)
    int totalSeconds, hours, minutes, seconds;

    // TODO 2: prompt for and read totalSeconds
    cout<<"Enter total Seconds : ";
    cin>>totalSeconds;

    // TODO 3: hours   = how many whole 3600s fit in totalSeconds       (use /)
    hours = totalSeconds / 3600;

    // TODO 4: minutes = how many whole 60s fit in what is left         (use % then /)
    minutes = (totalSeconds % 3600) / 60;

    // TODO 5: seconds = what is left after removing whole minutes      (use %)
    seconds =  totalSeconds % 60 ;
  
    // TODO 6: print e.g.  3725 seconds = 1 h 2 min 5 s
    cout<<totalSeconds<<" seconds = "<<hours<<"h"<<minutes<<"min"<<seconds<<"s";
    return 0;
}
