// 1. Write a program in C++ to find the first 10 natural numbers.

/*#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "\n" << i;
    }

    return 0;
}*/

// 5. Write a program in C++ to check whether a number is prime or not.

/*#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a number - ";
    cin >> n;
    if (n % 2 != 0)
    {
        cout << "Prime";
    }
    else if (n % 2 == 0)
    {
        cout << "Not Prime";
    }

    return 0;
}*/

// Write a program in C++ to find a prime number within a range.

#include <iostream>
using namespace std;
int main()
{

    for (int i = 1; i <= 10; i++)
    {
        if (i % 1 == 0 && i % i == 0)
        {
            cout << i << "\n";
        }
    }

    return 0;
}