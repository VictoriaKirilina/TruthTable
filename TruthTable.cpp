#include<iostream>
using namespace std;

int main()

{

    setlocale (LC_ALL, "1251");

    bool a, b;

    cout << "Оператор: ||" << endl;

    a = true; b = true;
    cout << "true true " << ((a || b) ? "true" : "false") << endl;

    a = false; b = true; 
    cout << "false true " << ((a || b) ? "true" : "false") << endl;

    a = true; b = false;
    cout << "true false " << ((a || b) ? "true" : "false") << endl;

    a = false; b = false;
    cout << "false false " << ((a || b) ? "true" : "false") << endl;
 
    cout << "\nОператор: &&" << endl;

    a = true; b = true;
    cout << "true true " << ((a && b) ? "true" : "false") << endl;

    a = false; b = true;
    cout << "false true " << ((a && b) ? "true" : "false") << endl;

    a = false; b = false;
    cout << "false false " << ((a && b) ? "true" : "false") << endl;


return 0;

}