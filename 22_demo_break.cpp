/* Program 22: Demonstrate break statement
 * Ver: 202602032202
 */
 
#include <iostream>

using namespace std;

int main() {
    cout << "START, ";
    
    for (unsigned short int i = 1; i <= 10; i ++){
        cout << i << ", ";
        
        if (i == 5){
            break;
        }
    }
    
    cout << "END" << endl;
    
    return 0;
}