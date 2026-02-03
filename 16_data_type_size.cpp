/* Program 16: Sizes of common data types
 * Ver: 202602032055
 */
 
#include <iostream>

using namespace std;

int main() {
    cout << "sizeof(short int) = " << sizeof(short int) << " bytes\n";
    cout << "sizeof(int) = " << sizeof(int) << " bytes\n";
    cout << "sizeof(long int) = " << sizeof(long int) << " bytes\n";
    cout << "\nsizeof(float) = " << sizeof(float) << " bytes\n";
    cout << "sizeof(double) = " << sizeof(double) << " bytes\n";
    cout << "\nsizeof(char) = " << sizeof(char) << " bytes\n";
    cout << "\nsizeof(bool) = " << sizeof(bool) << " bytes" << endl;
    
    return 0;
}