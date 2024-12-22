/*#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num1, num2;

    cout << "Enter 2 numbers ";
    cin >> num1;
    cin >> num2;
    cout << "Sum - " << num1 + num2;
    return 0;
}*/

// 3. Size of Fundamental Data Types

/*#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<sizeof(char);
    cout<<"\n"<<sizeof(int);
    cout<<"\n"<<sizeof(float);
    cout<<"\n"<<sizeof(bool);
    cout<<"\n"<<sizeof(long);
    cout<<"\n"<<sizeof(double);
    return 0;
}*/

// 5. Limits of Integer Data Types

/*#include <iostream>
#include <climits>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<INT_MAX;
    return 0;
}*/

// 13. Swap Two Numbers

/*#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a =2, b= 4;
    int c;
    c=b;
    b=a;
    a=c;
    cout<<a<<"\n"<<b;
    return 0;
}*/

// 14. Volume of a Sphere

/*#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int r;
    cout << "Enter radius of circle - ";
    cin >> r;
    cout << (4 * 3.14 * r * r * r) / 3;
    return 0;
}*/

// 38. Multiplication Table for Input Number

/*#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter num - ";
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cout << "\n" << n << " x " << i <<" = "<< n * i;
    }
    cout << endl;

    return 0;
}*/

// 66. Sum from 1 to n

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, s=0;
    cout << "Enter number n - ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s = s + i;
    }
    cout << s;

    return 0;
}
