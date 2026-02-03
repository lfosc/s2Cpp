/* Program 18: Menu driven calculator
 * Ver: 202602032111
 */
 
#include <iostream>

using namespace std;

int main() {
    double a = 0.0, b = 0.0;
    char opr = 0;
    
    cout << "Input operands:\n";
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input operator (+-*/): ";
    cin >> opr;
    
    cout << "\n"; //newline for formatting.

    switch(opr){
        case '+':
            cout << "a + b = " << (a + b) << endl;
            break;
            
        case '-':
            cout << "a - b = " << (a - b) << endl;
            break;
            
        case '*':
            cout << "a * b = " << (a * b) << endl;
            break;
            
        case '/':
            if (b == 0.0){
                cout << "ERROR: Cannot divide by zero." << endl;
                return (-1);
            }
            
            cout << "a / b = " << (a / b) << endl;
            break;
            
        default:
            cout << "ERROR: Invalid operator." << endl;
            return (-1);
    }
    
    return 0;
}