/* Program 10: Temporal conversions
 * Ver: 202602032006
 */
 
#include <iostream>

using namespace std;

int main() {
    int days = 0;
    
    cout << "Input number of days: ";
    cin >> days;
    
    cout << "\n" << days << " days is equivalent to ";
    cout << (days / 365) << " years, ";
    cout << ((days % 365) / 7) << " weeks, and ";
    cout << ((days % 365) % 7) << " days." << endl;
    
    return 0;
}