#include <iostream>
#include <cstdlib> // for malloc, calloc, realloc, free
#include <cstring> // for strcpy, strcat
using namespace std;

int main(){


    //Case-1 : Using free operator with malloc allocated memory
    int *memptr = (int *)malloc(sizeof(int) * 5); //
    
    for(int i=0; i<5; i++){
        memptr[i] = i+1;
    }

    for (int i=0; i<5; i++){
        cout << memptr[i] << " ";
    }
    cout << endl;
    free(memptr); //correct way to free memory allocated with malloc

    for (int i=0; i<5; i++){
        cout << "Garbage Value after free: " << memptr[0] << endl;
    }
    // delete memptr; //undefined behavior: using delete on malloc allocated memory

    
    
    //Case-2 : Using free operator with calloc allocated memory
    int *calptr = (int *)calloc(1, sizeof(int)); //
    *calptr = 42;
    cout << "Value allocated by calloc: " << *calptr << endl;
    cout << "Address allocated by calloc: " << calptr << endl;

    free(calptr); //correct way to free memory allocated with calloc

    cout << "Value after free: " << *calptr << endl; //undefined behavior: accessing freed memory
    cout << "Address after free: " << calptr << endl;

    // delete calptr; //undefined behavior: using delete on calloc allocated memory



    // Case-3 : Using free operator with realloc allocated memory
    char *reptr = (char *)malloc(10 * sizeof(char));
    strcpy(reptr, "Hello");

    cout << "Value allocated by realloc: " << reptr << endl;

    reptr = (char *)realloc(reptr, 20 * sizeof(char));
    strcat(reptr, " World");

    cout << "Value after realloc: " << reptr << endl;

    free(reptr); //correct way to free memory allocated with realloc

    return 0;
}