#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b, max, min;
    cin >> a >> b;
    max=0;
    min=0;
    if(a>b)
    {
        max=a;
        min=b;
    }
    else if(a==b)
        cout << "a=b" <<'\n';
    else
    {
        max=b;
        min=a;
    }
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';
         cout << "min=" << min << '\n'
              << "max=" << max << '\n';
    return 0;
}
