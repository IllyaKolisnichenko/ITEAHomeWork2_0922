#include <iostream>
using namespace std;

void Sort(int* array, int size)
{
    int x;
    for (int i = 1; i < size; i++)
    {
        for (int j = size - 1; j >= i; j--)
        {
            if (*(array + j) < *(array + j - 1))
            {

                x = *(array + j - 1);

                *(array + j - 1) = *(array + j);

                *(array + j) = x;
            }
        }
    }
}

int main()
{
    int size = 10;
    int array[size];

    for (int i = 0; i < size; i++)
    {

        cout << "Number of element: " << i + 1 << "   ";
        cout << "Enter element: ";
        cin >> *(array + i);
    }

    Sort(array, size);
    cout << endl;
    cout << "Result after bubble sort: " << endl;
    for (int i = 0; i < size; i++)
    {

        cout << *(array + i) << endl;
    }
}
