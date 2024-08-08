#include <bits/stdc++.h>
#include <chrono>

using namespace std;

int fibonacci_naive(int n)
{
}

int fibonacci_recursive(int n)
{
}

int fibonacci_dp(int n)
{
}

void solve(int number)
{
    auto start = chrono::high_resolution_clock::now();
    cout << fibonacci_recursive(number) << "\n";
    auto end = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(end-start);
    cout << "Time elapsed recursive: " << duration.count() << " microseconds" << endl;

    start = chrono::high_resolution_clock::now();
    cout << fibonacci_dp(number) << "\n";
    end = chrono::high_resolution_clock::now();

    duration = chrono::duration_cast<chrono::microseconds>(end-start);
    cout << "Time elapsed DP: " << duration.count() << " microseconds" << endl;

    start = chrono::high_resolution_clock::now();
    cout << fibonacci_naive(number) << "\n";
    end = chrono::high_resolution_clock::now();

    auto duration_ns = chrono::duration_cast<chrono::nanoseconds>(end-start);
    cout << "Time elapsed naive: " << duration_ns.count() << " nanoseconds" << endl;
}

int main(int argc, char** argv)
{
    solve(46);

    return 0;
}
