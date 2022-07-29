#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    cout << &n << '\n';

    int* ptr = &n;

    cout << ptr << '\n';
    cout << *ptr << '\n';
    cout << "*****************\n";

    *ptr = 10;

    cout << *ptr << '\n';
    cout << n << '\n';

    int v;
    int* ptr1 = &v;
    *ptr1 = 7;
    cout << "V = " << v << '\n';

    system("pause>0");
    return 0;
}