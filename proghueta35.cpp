#include <iostream>

template <typename T>
T Max(T a, T b)
{
    return a > b ? a : b;
}

template <typename T>
T Max(T a, T b, T c)
{
    return Max(Max(a, b), c);
}

template <typename T>
T Max(T a, T b, T c, T d)
{
    return Max(Max(a, b), Max(c, d));
}

int main()
{
    std::cout << Max(3, 5) << std::endl;            // Output: 5
    std::cout << Max(3.14, 2.71) << std::endl;      // Output: 3.14
    std::cout << Max('a', 'b', 'c') << std::endl;   // Output: c
    std::cout << Max(1, 2, 3, 4) << std::endl;      // Output: 4

    return 0;
}
