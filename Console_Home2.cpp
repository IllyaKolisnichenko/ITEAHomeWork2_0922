#include <iostream>

void Sort(int*, int);

int main()
{
    const int K_SIZE = 10;
    int array[K_SIZE];

    for (int i=0; i < K_SIZE; i++)
    {
        std::cout << "Enter " << i + 1 << " number of array: ";
        std::cin >> *(array + i); 
    }

    Sort(array, K_SIZE);

    std::cout << "Result: ";
    for (auto element : array)
    {
        std::cout << element << " ";
    }
}

void Sort(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (*(array + j) < *(array + i))
            {
                std::swap(*(array + i), *(array + j));
            }
        }
    }
}