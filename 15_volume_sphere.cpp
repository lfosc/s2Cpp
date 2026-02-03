/* Program 15: Calculate volume of a sphere
 * Ver: 202602032049
 */
 
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius = 0.0;
    
    cout << "Input sphere radius: ";
    cin >> radius;
    
    radius = abs(radius);
    
    cout << "\nVolume of sphere = ";
    cout << ((4.0 / 3.0) * M_PI * (radius * radius* radius)) 
        << " units cubed" << endl;
    
    return 0;
}