
#include <iostream>
using namespace std;

int main()
{
    int guess;
    while(true)
    {
        cout << "Enter a number: ";
        cin >> guess;
        
        if(guess > 0 && guess < 15)
        {
            cout << "Failure! Try again." << endl;
        }
        else if(guess > 15 && guess < 31)
        {
            cout << "Success! You guessed it." << endl;
            break;
        }
        else
        {
            cout << "Invalid input. Try again." << endl;
        }
    }
    return 0;
}