#include <iostream>
#include <math.h>

using namespace std;

constexpr int fib(const int i)
{
    constexpr auto srt5 = sqrt(5);
    if (i == 0)
        return 0;
    if (i == 1)
        return 1;

    return static_cast<int>((pow(1 + srt5, i) - pow(1 - srt5, i)) / (pow(2, i) * srt5));
}
int main()
{
    cout << fib(2); 
    return 0;
}
