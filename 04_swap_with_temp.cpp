/* Program 04: Swap with temporary variable
 * Ver: 202602031905
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
    
    //extra block used to limit scope of temporary variable
     {
        int temp = a;
        a = b;
        b = temp;
     }
     
     cout << "\nSwapped values:\n";
     cout << "a = " << a << "\nb = " << b << endl;
    
    
    return 0;
}