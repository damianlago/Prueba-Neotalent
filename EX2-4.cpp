#include <iostream>

using namespace std;

int* findModa(int arr[], int n) {

    int* moda = &arr[0];
    int count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n; j++) {
            if ( arr[i] == arr[j] && i != j ) count1++;
        }
        
        if (count1 > count2) {
            count2 = count1;
            moda = &arr[i];
        }
        count1 = 0;
    }
    return moda;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int* moda = findModa(arr, n);

    cout << "La moda es: " << *moda << endl;
   
    return 0;
}

//EX 4
