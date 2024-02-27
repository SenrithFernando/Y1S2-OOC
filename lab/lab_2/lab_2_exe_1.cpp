#include <iostream>
#include <iomanip>
using namespace std;
int searchKey(int search);
int findMax(char suggest);

int numbers[10];
//= { 10,54,75,84,48,76,68,24,16,35 }

int main()
{
    int r;
    float arra;
    char sug;

    for (int i; i < 10; i++)
    {
        std::cout << "Enter  value  " << i << " :";
        std::cin >> arra;

        numbers[i] = arra;
    }

    std::cout << "Enter search value : ";
    std::cin >> r;

    std::cout << "value : ";
    std::cout << searchKey(r) << endl;

    std::cout << "Want max value  (y/n) :";
    std::cin >> sug;

    std::cout << "Max value : ";
    std::cout << findMax(sug) << endl;
}

int searchKey(int search)
{

    if (search == -1)
    {
        std::cout << "Value Not fount";
        return -1;
    }
    else
    {
        for (int i; i < 10; i++)
        {
            if (numbers[i] == search)
            {
                return i;
            }
            else
            {
                std::cout << "Value Not fount";
                return -1;
            }
        }
        // return numbers[search - 1];
    }
    return -1;
}

int findMax(char suggest)
{
    int x = 0;
    if (suggest == 'y' || suggest == 'Y')
    {
        for (int i = 0; i <= 10; i++)
        {
            if (x < numbers[i])
            {
                x = numbers[i];
            }
            else
            {
                x = x;
            }
        }
    }
    else
    {
        return 0;
    }

    return x;
}
