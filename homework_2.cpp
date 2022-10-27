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

    int Values[10]{};
    for (int i = 0; i < argc-1; i++)
    {
        *(Values+i) = atoi(argv[i+1]);
    }

    bool swapped = true;
    while (swapped != false)
    {
        swapped = false;
        for (int i = 1; i < 10; i++) {
            if (*(Values+i-1) > *(Values+i))
            {
                Swap(Values, i-1, i);
                swapped = true;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << i+1 << " element = " <<  Values[i] << std::endl;
    }
}







