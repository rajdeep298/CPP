#include<iostream>
#include<cstdlib>
using namespace std;


struct Demo {
    int data;
    static void operator delete(void* ptr) { // for non-array delete
        cout << "Custom delete operator called." << endl;
        ::operator delete(ptr); // Free the allocated memory
        // Note: Using the global delete operator to actually free memory. Used instead of delete ptr; to avoid recursion.
    }

    static void operator delete[](void* ptr) { // for array delete
        cout << "Custom delete[] operator called." << endl;
        ::operator delete[](ptr); // Free the allocated memory
    }
};


int main(){

    
    //Case-1 : Deleting a single object
    int *p = new int; //dynamic memory allocation
    delete p; //deleting the allocated memory

    
    //Case-2 : Deleting an array of objects
    int *arr = new int[5]; //dynamic memory allocation of array
    delete[] arr; //deleting the allocated memory for array

    
    //Case-3 : Deleting a null pointer
    int *ptr = nullptr; //null pointer
    delete ptr; //deleting a null pointer

    
    //Case-4 : Deleting a pointer multiple times (undefined behavior)
    int *q = new int;
    delete q; //first deletion
    // delete q; //second deletion (commented out to avoid undefined behavior)

    
    //Case-5 : Deleting a pointer not allocated with new (compile-time error)
    int a;
    int *r = &a;
    // delete r; //deleting pointer not allocated with new (commented out to avoid Compile-time error)

    
    //Case-6 : Deleting a void pointer (undefined behavior)
    void *vptr = new int; //void pointer pointing to dynamically allocated int
    // delete vptr; //deleting void pointer after allocating memory

    
    //Case-7 : Deleting memory dynamically created using malloc (undefined behavior)
    int *memptr = (int *)malloc(sizeof(int) * 5); //
    free(memptr); //correct way to free memory allocated with malloc
    
    
    //Case-8 :  Trying to delete a reference (compile-time error)
    int b = 10;
    int &ref = b;
    // delete &ref; //trying to delete a reference (commented out to avoid compile-time error)


    //Case-9 : Deleting a non-pointer type (compile-time error)
    int c = 20;
    // delete c; //trying to delete a non-pointer type (commented out to avoid compile-time error)


    //Case-10 : Custom delete operator for user-defined types
    Demo *d = new Demo();
    delete d; //invokes custom delete operator

    Demo *dArr = new Demo[3];
    delete[] dArr; //invokes custom delete[] operator

    return 0;
}