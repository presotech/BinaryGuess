#include <iostream>

using namespace std;

int randint(int min, int max);

int main()
{
    srand(time(nullptr));

    int guess;
    int limit = 10;
    int secret = randint(1,100);

    bool win = false;

    for (int i = 1; i <= limit; i++)
    {
        cout << "Guess: ";
        cin >> guess;

        if (guess > secret)
        {
            cout << "Too high!" << endl;
        }

        else if (guess < secret)
        {
            cout << "Too low!" << endl;
        }

        else
        {
            win = true;
            cout << "You win! Guesses used: " << i << endl;
            break;
        }
    }

    if (!win)
    {
        cout << "You lose!" << endl;
    }
}

int randint(int min, int max)
{
    return min + rand() % (max - min + 1);
}
