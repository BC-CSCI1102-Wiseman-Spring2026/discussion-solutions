#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int total_seconds;
    cout << "Enter the duration in seconds: "; 
    cin >> total_seconds;

    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;

    cout << "Final = " << setfill('0') << setw(2) << hours;
    cout << ":" << setw(2) << minutes;
    cout << ":" << setw(2) << seconds << endl;

    return 0;
}
