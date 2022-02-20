#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;

    cin >> a;
    cin >> b;

    // Before

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    // Your code for swap
    temp = a;
    a = b;
    b = temp;

    // After
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
}