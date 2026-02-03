/* Program 17: Check if positive, negative, or zero
 * Ver: 202602032102
 */
 
#include <iostream>

using namespace std;

int main() {
    double num = 0;
    
    cout << "Input a number: ";
    cin >> num;
    
    if (num  == 0.0){
        cout << "The number is zero." << endl;
    }
    else if (num > 0){
        cout << num << " is a positive number." << endl;
    }
    else {
        cout << num << " is a negative number." << endl;
    }
    
    return 0;
}