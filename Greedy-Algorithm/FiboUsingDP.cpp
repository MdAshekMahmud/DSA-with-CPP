#include <iostream>
#include <vector>
using namespace std;

// Function to calculate nth Fibonacci number using DP
long long fibonacci(int n)
{
    // Base cases
    if (n <= 1)
        return n;

    // Create a vector to store Fibonacci numbers
    vector<long long> dp(n + 1);

    // Base cases
    dp[0] = 0;
    dp[1] = 1;

    // Calculate fibonacci numbers bottom-up
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    for (auto el : dp)
    {
        cout << el << " ";
    }
    cout << endl;

    // Return the nth Fibonacci number
    return dp[n];
}

int main()
{
    int n;
    cout << "Enter the value of n to find nth Fibonacci number: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Please enter a non-negative integer." << endl;
    }
    else
    {
        cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
    }

    return 0;
}