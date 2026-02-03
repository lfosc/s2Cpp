/* Program 08: Swap without temporary variable
 * Ver: 202602031953
 */
 
#include <iostream>

using namespace std;

int main() {
    int a, b;
    
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    
    cout << "\nSwapping a and b." << endl;
    
    //execute swap using bitwise XOR
    //this approach avoids the overflow issue
     a = a ^ b;
     b = a ^ b;
     a = a ^ b;
     
     cout << "\nSwapped values:\n";
     cout << "a = " << a << "\nb = " << b << endl;
    
    
    return 0;
}