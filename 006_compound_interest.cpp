/* Program 06: Calculate compound interest
 * Ver: 202602031944
 */
 
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double rate, intrst, prncpl, duration;
    
    cout << "Input Principal Amount: ";
    cin >> prncpl;
    cout << "Input Rate of Interest: ";
    cin >> rate;
    cout << "Input Duration (years): ";
    cin >> duration;
    
    intrst = (prncpl * pow((1 + (rate/100)), duration)) - prncpl;
    
    cout << "Interest calculated = " << intrst << endl;
    
    return 0;
}