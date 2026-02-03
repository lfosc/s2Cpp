/* Program 13: Extract last two digits
 * Ver: 202602032033
 */
 
#include <iostream>

using namespace std;

int main() {
    int num = 0;
    
    cout << "Input a 4 digit number: ";
    cin >> num;
    
    cout << "\nLast two digits = " << (num % 100) << endl;
    
    return 0;
}