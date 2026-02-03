/* Program 14: Check if odd or even
 * Ver: 202602032038
 */
 
#include <iostream>

using namespace std;

int main() {
    int num = 0;
    
    cout << "Input an integer: ";
    cin >> num;
    
    if (num  == 0){
        cout << "0 is neither odd nor even." << endl;
    }
    else if ((num % 2) == 0){
        cout << num << " is an even number." << endl;
    }
    else {
        cout << num << " is an odd number." << endl;
    }
    
    return 0;
}