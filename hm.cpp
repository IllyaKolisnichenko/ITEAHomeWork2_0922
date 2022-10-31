#include <iostream>
#include <locale>

void Sort(int*, int);

void Sort(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int y = i + 1; y < size; y++)
        {
            if (*(array + y) < *(array + i))
            {
                std::swap(*(array + i), *(array + y));
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "RUSSIAN");


    const int size= 10;
    int array[size] {};

    for (int i = 0; i < size; i++)
    {
        std::cout << "введите " << i + 1 << " число: ";
        std::cin >> *(array + i);
    }

    Sort(array, size);

    std::cout << "Результат";
    for (auto element : array)
    {
        std::cout << element << " ";
    }
}

