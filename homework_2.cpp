#include <iostream>
#include <cstdlib>

void Swap(int* Values, int left, int right)
{
    if (left != right)
    {
        int temp = *(Values + left);
        *(Values + left) = *(Values + right);
        *(Values + right) = temp;
    }
}

int main(int argc, char** argv)
{
    const int size_of_array{10};
    int Values[size_of_array]{};
    for (int i = 0; i < argc-1; i++)
    {
        *(Values+i) = atoi(argv[i+1]);
    }

    bool swapped = true;
    while (swapped)
    {
        swapped = false;
        for (int i = 1; i < size_of_array; i++) {
            if (*(Values+i-1) > *(Values+i))
            {
                Swap(Values, i-1, i);
                swapped = true;
            }
        }
    }
    for (int i = 0; i < size_of_array; i++)
    {
        std::cout << i+1 << " element = " <<  Values[i] << std::endl;
    }
}







