// // using copy constuctor

// #include <iostream>
// using namespace std;

// class Addition
// {
// public:
//     int a;
//     int b;
// };
// class Sum
// {
// public:
//     show(int a1, int b1)
//     {
//         a = a1;
//         b = b1;
//     }
//     show(const show &s1) void show(Addition &a)
//     {
//         cout << "Enter the value of a & b:";
//         cin >> a, b;
//         sum = a + b;
//         cout << sum;
//     }
// };
// int main()
// {
//     Addition a;
//     Sum s;
//     s.show();

//     return 0;
// }

#include <iostream>

class SumCalculator
{
private:
    int sum;

public:
    // Constructor to initialize sum
    SumCalculator() : sum(0) {}

    // Function to add two values and update sum
    void addValues(int val1, int val2)
    {
        sum = val1 + val2;
    }

    // Function to add a third value to the current sum
    void addThirdValue(int val3)
    {
        sum += val3;
    }

    // Function to display the current sum
    void displaySum()
    {
        std::cout << "Current Sum: " << sum << std::endl;
    }
};

int main()
{
    SumCalculator calculator;
    calculator.addValues(10, 20);
    calculator.displaySum(); // Output: Current Sum: 30

    calculator.addThirdValue(5);
    calculator.displaySum(); // Output: Current Sum: 35

    return 0;
}