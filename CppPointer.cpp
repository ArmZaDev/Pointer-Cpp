#include <iostream>
using namespace std;

int main()
{

    int luckyNUmbers[5];
    /*
    cout << luckyNUmbers <<'\n';
    cout << &luckyNUmbers[0] << '\n';
    cout << luckyNUmbers[2] << '\n';
    cout << *(luckyNUmbers + 2) << '\n';
    */
   //0 - 4 
   for (int i = 0; i < 5; i++){
    cout << "Number: ";
    cin >> luckyNUmbers[i];
   }

   for (int i = 0; i < 5; i++){
    cout << *(luckyNUmbers + i) << ' ';
   }

    return 0;
}