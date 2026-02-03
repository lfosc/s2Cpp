/* Program 12: Celsius to Fahrenheit
 * Ver: 202602032026
 */
 
#include <iostream>

using namespace std;

int main() {
    double temp_c = 0.0;
    
    cout << "Input temperature (degrees Celsius): ";
    cin >> temp_c;
    
    cout << "Temperature (Fahrenheit) = ";
    cout << ((temp_c * 1.8) + 32) << endl;
    
    return 0;
}