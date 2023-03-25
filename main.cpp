#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(){
    int guess;
    srand(time(0));
    int number = rand() % 100 + 1;

    cout << "A random number has been generated guess it correctly to win! (Between 1  - 100): ";
    while(true) {
   if (!(cin >> guess)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Only use numbers! Try again." << endl;
            continue;
        }

    if (guess < number) {
        cout << "That number is too low! Try again." << endl;
        continue;
    } else if (guess > number) {
        cout << "That number is too high! Try again." << endl;
        continue;
    } else {
        cout << "Congrats! You guess the number correctly which was " << number << "!" << endl; 
        }
    }
    return 0;
}

