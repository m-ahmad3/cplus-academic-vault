#include <iostream>
using namespace std;

int hcf(int a, int b)
{
    if (b == 0) {
        return a;
    }

    return hcf(b, a % b);
}


int lcm(int a, int b)
{
    return (a / hcf(a, b)) * b;
}


int main()
{
    int i, j;
    cout << "Enter the Value of 'i': ";
    cin >> i;
    cout << "Enter the Value of 'j': ";
    cin >> j;

    cout << "LCM of " << i << " and "
        << j << " is " << lcm(i, j);

    return 0;
}