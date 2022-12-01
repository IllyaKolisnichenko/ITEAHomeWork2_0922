#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    cout << "Enter a positive integers: ";
    int size = 10;
    int* array = new int[size];

    for (int index = 0; index < size; index++) {
        cin >> *(array + index);
    }
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
    cout << endl;

    for (int index = 0; index < size; index++)
        cout << *(array + index) << ' ';

    delete[] array;

    return 0;

}