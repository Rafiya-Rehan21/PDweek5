#include <iostream>
#include <cmath>
using namespace std;
int firmWork(int hours, int days, int workers);
main()
{
    int hours;
    int days;
    int workers;
    int result;
    cout << "Enter number of hours:";
    cin >> hours;
    cout << "Enter number of days:";
    cin >> days;
    cout << "Enter number of workers:";
    cin >> workers;
    result =firmWork(hours, days, workers);
}
int firmWork(int hours, int days, int workers)
{
    float remainingDays;
    float workingDays;
    float workingHours;
    float workerHours;
    int additionalHours;
    int result;    
    remainingDays = 0.1 * days;
    workingDays= days - remainingDays;
    workingHours= (10 * workingDays);
    workerHours= workingHours * workers;
    floor(workerHours);
    if (workerHours > hours)
    {
       additionalHours = workerHours - hours;
        cout << "YES !! " << additionalHours << " hours are left" << endl;
    }
    if (hours > workerHours)
    {
        additionalHours = hours - workerHours;
        cout << "Not enough time !" << additionalHours << " hours needed." <<  endl;
    }
    return result;
}
