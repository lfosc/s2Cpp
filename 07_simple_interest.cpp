/* Program 07: Calculate simple interest
 * Ver: 202602031949
 */
 
#include <iostream>

using namespace std;

int main() {
    float rate, intrst, prncpl, duration;
    
    cout << "Input Principal Amount: ";
    cin >> prncpl;
    cout << "Input Rate of Interest: ";
    cin >> rate;
    cout << "Input Duration (years): ";
    cin >> duration;
    
    intrst = prncpl * (rate/100) * duration;
    
    cout << "Interest calculated = " << intrst << endl;
    
    return 0;
}