#include <iostream>
using namespace std;
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int daysInAMonth(int month, int year) {
    if (month == 2) { // February
        return isLeapYear(year) ? 29 : 28; // 29 for leap year, 28 otherwise
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30; // April, June, September, November
    } else {
        return 31; // All other months
    }
}

int startDay(int year, int month) {
    if (month == 1 || month == 2) { 
        month += 12;
        year--;
    }
    int day = 1; 
    int K = year % 100;  // Year of the century eg: 24
    int J = year / 100;  // Zero-based century eg: 20 (2024)
    int startDay = (day + (13 * (month + 1)) / 5 + K + K / 4 + J / 4 + 5 * J) % 7;
    return (startDay + 5) % 7; 
}

int main() {
    int year, month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the month (1-12): ";
    cin >> month;

    int daysInMonth = daysInAMonth(month, year);
    int startingDay = startDay(year, month);

    cout << "=============================" << endl;
    cout << "   Year: " << year << "    Month: " << month << endl;
    cout << "=============================" << endl;
    cout << " SUN MON TUE WED THU FRI SAT " << endl;

    for (int i = 0; i < startingDay; i++) {
        cout << "    "; // spaces for each blank day
    }

    for (int day = 1; day <= daysInMonth; day++) {
        cout.width(4); // Set width to align numbers
        cout << day;
        if ((day + startingDay) % 7 == 0) {
            cout << endl;
        }
    }
    cout << endl;
    cout << "=============================" << endl;
    return 0;
}
