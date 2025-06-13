using namespace std;
#include <iostream>

class Sort{
    protected:
        int arr[100];
        int n;
    public:
        Sort(int *arr, int n){
            this->n=n;
            for(int i=0; i<n; i++)
                this->arr[i]=arr[i];
        }
        int* sortArray(){
            for(int i=0; i<n; i++){
                for(int j=0; j<n-i-1; j++){
                    if(arr[j]>arr[j+1]){
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                }
            }
            return arr;
        }
};

class SelectionSort : public Sort{
    public:
        SelectionSort(int *arr, int n):Sort(arr, n){}//Thats how we call base class constructor from derived class
        int* sortArray(){
            for(int i=0; i<n; i++){
                int minIndex=i;
                for(int j=i+1; j<n; j++){
                    if(arr[j]<arr[minIndex]){
                        minIndex=j;
                    }
                }
                int temp=arr[i];
                arr[i]=arr[minIndex];
                arr[minIndex]=temp;
            }
            return arr;
        }
};

int main(){
    int arr[]={5, 3, 8, 1, 2};
    SelectionSort s(arr, 5);
    int* result=s.sortArray();
    for(int i=0; i<5; i++)
        cout<<result[i]<<" ";
    return 0;
}

// Output:
// 1 2 3 5 8
