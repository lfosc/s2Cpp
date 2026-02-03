/* Program 02: Print Name and Age
 * Ver: 202602031756
 */
 
#include <iostream>

using namespace std;

int main() {
    string name;
    unsigned short int age = 0;
    
    cout << "Input name: ";
    cin >> name;
    //recommended: getline(cin, name); will allow for whitespace capture
    cout << "Input age: ";
    cin >> age;
    
    cout << "\nName = " << name << "\n";
    cout << "Age = " << age << endl;
    
    return 0;
}