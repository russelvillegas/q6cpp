#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int nAttendees, seatsPerTable, tablesRequired, totalSeats, unusedSeats;
    double exactTables;

    cout << "How many attendees? ";
    cin >> nAttendees;
    cout << "Seats per table: ";
    cin >> seatsPerTable;

    exactTables = static_cast<double>(nAttendees) / seatsPerTable;
    tablesRequired = (int)ceil(exactTables);
    totalSeats = tablesRequired * seatsPerTable;
    unusedSeats = totalSeats - nAttendees;

    cout << fixed << setprecision(2);
    cout << "Exact Tables: " << exactTables << endl;
    cout << "Tables Required: " << tablesRequired << endl;
    cout << "Total Seats: " << totalSeats << endl;
    cout << "Unused Seats: " << unusedSeats << endl;

    return 0;
}
