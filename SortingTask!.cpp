#include <iostream>
#include <vector>

int addition(int, int, std::vector<int>&);

int main()
{
    std::vector<int> a = { -2,1,-3,4,-1,2,1,-5,4 };
    int sum = 0;
    int maxSum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i+1; j < a.size(); j++)
        {
            sum = addition(i, j, a);
        }
        std::cout << sum;
        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }
    std::cout << "Result: " << maxSum;
}

int addition(int i, int j, std::vector<int>& a)
{
    int sum = 0;
    for (; i <= j; i++)
    {
        sum += a[i];
    }
    return sum;
}
