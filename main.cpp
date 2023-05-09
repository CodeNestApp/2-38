#include <iostream>
#include <cmath>

using namespace std;

int power(int a, int e)
{
    int auxa=a;
    for (int i=2; i<=e; i++)
        a=a*auxa;
    return a;
}

int main()
{
    int a;
    cin >> a;
    int b=power(a,2)+power(a,4);

    cout << floor(3*b / (b+sqrt(b)) + sqrt(b));
    return 0;
}
