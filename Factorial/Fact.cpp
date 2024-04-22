#include <iostream>

using namespace std;

class Fact
{
private:
    int num;
    int fact;
public:
    Fact()
    {
        num = 0;
        fact = 1;
    }
    Fact(int n)
    {
        num = n;
    }
    int getFact(int n)
    {
        for (int i = n; i > 1; i--)
        {
            fact *= i;
        }
        return fact;
    }
};

int main()
{
    Fact a;
    int number;
    cin >> number;
    cout << a.getFact(number);
}