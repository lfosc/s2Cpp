/* Program 09: Average of three integers
 * Ver: 202602031959
 */
 
#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;
    
    cout << "Input the first integer: ";
    cin >> num1;
    cout << "Input the second integer: ";
    cin >> num2;
    cout << "Input the third integer: ";
    cin >> num3;
    
    //num1 cast to double to avoid potential integer overflow
    double avg = ((double)num1 + num2 + num3) / 3.0;
    
    cout << "\nAverage = " << avg << endl;
    
    return 0;
}