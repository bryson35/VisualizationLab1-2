#include <iostream>
using namespace std;

int main(){
    //Declare and assign values to variables
    int myInt = 15;
    int *myPointer = &myInt;
    
    //print memory location of myInt and value of myPointer
    cout << "---Memory Location---"<< endl;
    cout << "myInt: " << &myInt << endl;
    cout << "myPointer: " << myPointer << endl;
    
    //Print value of myInt and value pointed to by myPointer
    cout << "---Value---" << endl;
    cout << "myInt: " << myInt << endl;
    cout << "myPointer: " << *myPointer << endl;
    
    //Change the values and pront to console
    myInt = 10;
    cout << "---New Value Memory Location---" << endl;
    cout << "myInt: " << &myInt << endl;
    cout << "myPointer: " << myPointer << endl;
    
    cout << "---New Value---" << endl;
    cout << "myInt: " << myInt << endl;
    cout << "myPointer: " << *myPointer << endl;
    
    
    
    return 0;
    
}
