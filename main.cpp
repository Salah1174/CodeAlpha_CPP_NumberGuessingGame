#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int num, guess;
    srand(time(0));
    num = rand() % 100;
    do
    {
        cout << "\n Enter your guess : ";
        cin >> guess;
        if (guess > num)
            cout << "Too High\n";
        else if (guess < num)
            cout << "Too Low\n";
        else
        {
            cout << "Number is : " << num;
            break;
        }
    } while (guess != num);
}