#include <iostream>
#include <ctime> 

using namespace std;
int main()
{
    // Get the system time: Why??
    srand(time(0));
    // Generate a random number between 1 and 10
    int randomNumber = rand() % 10 + 1; 
    // Modulus operator (%) returns the remainder of the division of two numbers.

    cout << "Random Number: " << randomNumber << endl;

    // What is the purpose of a for loop
    // A For loop is used to repeat a block of code a certain number of times.
    for (int i = 0; i < 3; i++)
    {
        //User Input
        int userNumber;
        cout << "Enter a number between 1 and 10: ";
        cin >> userNumber;
        if(userNumber == randomNumber)
        {
            cout << "You guessed the correct number!" << endl;
            break;
        }
        else
        {
            cout << "You guessed the wrong number!" << endl;
        }
        
    }
    cout << "The correct number was: " << randomNumber << endl;
    return 0;
}