// File: Data_Types.cpp
using namespace std;
#include <iostream>

extern int ext1;//👈Declaration of a variable or function simply declares that the variable or function exists somewhere in the program, but the memory is not allocated for them. 


int ext2;//👈Coming to the definition, when we define a variable or function, in addition to everything that a declaration does, it also allocates memory for that variable or function. 

int  main(){
    //integer
    int a = 10;
    cout << "Integer: " << a<<"," <<sizeof(a) <<endl;//size of integer is 4 bytes

    //unsigned integer
    unsigned int b = 20;
    cout << "Unsigned Integer: " << b<<"," <<sizeof(b) <<endl; //size of unsigned integer is 4 bytes
    unsigned int c = -30;
    cout << "Unsigned Integer: " << c<<"," <<sizeof(c) <<endl;

    //signed integer
    signed int x = 30;
    cout << "Signed Integer: " << x<<"," <<sizeof(x) <<endl;//size of signed integer is 4 bytes
    signed int y = -30;
    cout << "Signed Integer: " << y<<"," <<sizeof(y) <<endl;

    //short integer
    short int p = 30;
    cout << "Short Integer: " << p<<"," <<sizeof(p) <<endl;//size of short integer is 2 bytes

    //unsigned short integer
    unsigned short int q = 40;
    cout << "Unsigned Short Integer: " << q<<"," <<sizeof(q) <<endl;//size of unsigned short integer is 2 bytes

    //long integer
    long int e = 50;
    cout << "Long Integer: " << e<<"," <<sizeof(e) <<endl;//size of long integer is 4 bytes

    //unsigned long integer
    unsigned long int f = 60;
    cout << "Unsigned Long Integer: " << f<<"," <<sizeof(f) <<endl;//size of unsigned long integer is 4 bytes

    //long long integer
    long long int g = 70;
    cout << "Long Long Integer: " << g<<"," <<sizeof(g) <<endl;//size of long long integer is 8 bytes

    //unsigned long long integer
    unsigned long long int h = 80;//size of unsigned long long integer is 8 bytes
    cout << "Unsigned Long Long Integer: " << h<<"," <<sizeof(h) <<endl;

    // void data type
    void *i;
    i = (void *) &a;
    cout << "Void Data Type: " <<i<<"," <<sizeof(i) <<endl;//size of void data type is 1 byte

    //character
    char j = 'A';
    cout << "Character: " << j<<"," <<sizeof(j) <<endl;//size of character is 1 byte

    //wide character
    wchar_t k = L'A';
    cout << "Wide Character: " << k<<"," <<sizeof(k) <<endl;//size of wide character is 2 or 4 bytes.
    // Wide char is comparable to the char data type, however, wide char takes up twice as much space and can therefore accommodate significantly larger values. The 256 possible values for char correspond to the ASCII table's entries. Contrarily, wide char can accept up to 65536 values, which are UNICODE values.

    //boolean
    bool l = true;
    cout << "Boolean: " << l<<"," <<sizeof(l) <<endl;//size of boolean is 1 byte

    //float
    float m = 10.5;
    cout << "Float: " << m<<"," <<sizeof(m) <<endl;//size of float is 4 bytes

    //double
    double n = 20.5;
    cout << "Double: " << n<<"," <<sizeof(n) <<endl;//size of double is 8 bytes


    return 0;
}