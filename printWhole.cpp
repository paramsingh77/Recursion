#include <iostream>
using namespace std;

void print(int n)
{

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    cout << n << endl;
    print(n - 1);
    cout << n << endl;
}

int numberOfways(int n)
{
    if (n == 1)
    {
        return n;
    }
    int ans = (n - 1) + ((n - 1) * (n - 2));
    return ans;
}

int power(int a, int b)
{
    if (b == 0)
        return 1;
    int ans = power(a, b - 1);
    return a * ans;
}

int powerr(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return b;
    int temp = powerr(a, b / 2);
    if (b % 2 == 0)
    {
        return temp * temp;
    }
    else
    {
        return a * temp * temp;
    }
}

int main()
{
    int ans = powerr(2, 4);
    cout << ans << endl;
    return 0;
}

Menlo, Monaco, 'Courier New', monospace 