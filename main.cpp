#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b, max;
    cin >> a >> b;
    max=0;
    if(a>b)
        cout << "max=a" << '\n';
    else if(a==b)
        cout << "max=0" << '\n';
    else
        cout << "max=b" << '\n';
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';
    return 0;
}
