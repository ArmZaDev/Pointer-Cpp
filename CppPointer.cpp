#include <iostream>
using namespace std;

void printNumber(int* numberPtr){
    cout << *numberPtr <<'\n';
}
void printLetter(char* charPtr){
    cout << *charPtr << '\n';
}
void print(void* ptr, char type){
    switch(type){
        case 'i': cout << *((int*)ptr) << '\n'; break;
        case 'c': cout << *((char*)ptr) << '\n'; break;
    }
}

int main()
{

    int number = 5;
    char letter = 'A';

    //printNumber(&number);
    //printLetter(&letter);

    print(&number, 'i');
    print(&letter, 'c');

    return 0;
}