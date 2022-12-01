#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    cout << "Enter a positive integers: ";
    int size = 10;
    int *array = new int[size];

    for (int index = 0; index < size; index++) {
        cin >> *(array + index);
    }
    sort(array, array + size);

    for (int index = 0; index < size; index++)
        std::cout << *(array + index) << ' ';

    delete[] array;

    return 0;
    
    }