/* Program 23: Demonstrate continue statement
 * Ver: 202602032207
 */
 
#include <iostream>

using namespace std;

int main() {
    cout << "START, ";
    
    for (unsigned short int i = 1; i <= 10; i ++){
        if ((i % 2) == 0) {
            continue;
        }
        
        cout << i << ", ";
    }
    
    cout << "END" << endl;
    
    return 0;
}