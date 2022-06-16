#include <iostream>

int jamp(int n, int k)
{   
    int num = 0;
    if (n == 0)
        return 1;
    for (int i = 1; i <= k; i++)
    {
        if (i <= n)
            num += jamp(n - i, k);
    }
    return num;
}
int main()
{
    int n = 0;
    int k;
    std::cout << "Enter the number of steps : ";
    std::cin >> n;
    std::cout << "Enter the maximum jump length : ";
    std::cin >> k;
    if (k <= 0)
        k = 3;
    std::cout << jamp(n,k);
}
