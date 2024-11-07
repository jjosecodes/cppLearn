#include <iostream>

using namespace std;




int main (){
    // integer 
    int a = 10;
    // declaration of a pointer variable
    int *p;
    // "referencing" pointer p to address of a
    p = &a;  
    
    // value of a
    cout << a << endl;
    // dereferencing pointer p to get the value of a 
    cout << *p << endl;
    // print the pointer itself , which is ADDRESS of a 
    cout << p << endl;

    return 0;

}
