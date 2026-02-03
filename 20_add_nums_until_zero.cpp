/* Program 20: Add numbers till zero
 * Ver: 202602032119
 */
 
#include <iostream>

using namespace std;

int main() {
    cout << "This program adds numbers until a zero input is detected." << endl;
    
    double sum = 0.0;
    while (true){
        cout << "Input a number: ";
        
        double num = 0.0;
        cin >> num;
        
        if (num == 0.0) {
            break;
        }
        
        sum += num;
        cout << "Sum thus far = " << sum << "\n" << endl;
    }
    
    cout << "OVERALL SUM = " << sum << endl;
    
    return 0;
}