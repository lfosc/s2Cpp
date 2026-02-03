/* Program 21: Number guessing game
 * Ver: 202602032130
 */
 
#include <iostream>
#include <random>

using namespace std;

int main() {
    cout << "Number Guessing Game\n";
    cout << "Checks if your guess matches a randomly generated " 
        << "number between 0 and 9.\n" << endl;
        
    // initialize random number generation engine
    // seed random number engine
    random_device rd;
    // choose a Mersenne Twister generator
    mt19937 random_gen(rd());
    // define range in which random numbers should be generated
    //uniform_int_distribution creates a filter object, which we named distr
    uniform_int_distribution<int> distr(0, 9);
    
    bool continue_game = true;
    
    do {
        // obtain a random digit
        unsigned short int random_digit = distr(random_gen);
        
        // choose a default value out of random generator range
        unsigned short int guess = 11; 
        
        cout << "Input your guess: ";
        cin >> guess;
        
        if (guess == random_digit) {
            cout << "Congratulations, you won!\n" << endl;
        }
        else {
            cout << "Oh no, you lost.\n";
            cout << "Generated number = " << random_digit << "\n" << endl;
        }
        
        
        {
            char user_choice = 0;
            cout << "Enter q to quit or any other character to continue: ";
            cin >> user_choice;
        
            if (user_choice == 'Q' || user_choice == 'q') {
                continue_game = false;
            }
        }
        
    } while (continue_game);
    
    return 0;
}