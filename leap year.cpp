#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "\nEnter a Year: ";
    cin >> Number;
    return Number;
}

bool leapyear(int Number)
{
    return (Number % 400 == 0 || (Number % 4 == 0 && Number % 100 != 0));
}

int NumberOfDaysInAYear(int Number)
{
    return leapyear(Number) ? 366 : 365;
}

int NumberOfHoursInAYear(int Number)
{
    return NumberOfDaysInAYear(Number) * 24;
}

int NumberOfMinutesInAYear(int Number)
{
    return NumberOfHoursInAYear(Number) * 60;
}

int NumberOfSecondsInAYear(int Number)
{
    return NumberOfMinutesInAYear(Number) * 60;
}

int main()
{
    int Number = ReadNumber();

    cout << "\nNumber of Days in Year [" << Number << "] is "
        << NumberOfDaysInAYear(Number);
    cout << "\nNumber of Hours in Year [" << Number << "] is "
        << NumberOfHoursInAYear(Number);
    cout << "\nNumber of Minutes in Year [" << Number << "] is "
        << NumberOfMinutesInAYear(Number);
    cout << "\nNumber of Seconds in Year [" << Number << "] is "
        << NumberOfSecondsInAYear(Number) << "\n";

    system("pause>0");
    return 0;
}