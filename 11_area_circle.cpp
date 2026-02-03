/* Program 11: Area of a circle
 * Ver: 202602032023
 */
 
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius = 0.0;
    
    cout << "Input circle radius: ";
    cin >> radius;
    
    cout << "Area = " << (M_PI * radius * radius) << "sq. units" << endl;
    
    return 0;
}