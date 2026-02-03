/* Program 03: Add two numbers
 * Ver: 202602031859
 */
 
#include <iostream>

using namespace std;

int main() {
    int a = 56;
    int b = 200;
    
    cout << "Preset values:\n";
    cout << "a = " << a << "\nb = " << b << endl;
    cout << "a + b = " << (a + b) << endl;
    
    cout << "\nUser defined values:\n";
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "a + b = " << (a + b) << endl;
    
    return 0;
}