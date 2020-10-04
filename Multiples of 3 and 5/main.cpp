#include <iostream>

using namespace std;

int calculate(const int &);

int main()
{
    cout << "till wich number ?";
    int number;
    cin >> number;
    cout << calculate(number);
    cin.get();
}

int calculate(const int &number)
{
    int i, sum;
    sum = 0;
    for (i = 0; i < number; i += 5)
    {
        sum += i;
    }
    for (i = 0; i < number; i += 3)
    {
        if (i % 5 == 0)
        {
            continue;
        }
        sum += i;
    }
    return sum;
}