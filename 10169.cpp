/*The Problem

Given a fence with n posts and k colors, find out the number of ways of painting the fence such that at most 2 adjacent posts have the same color. Since answer can be large return it modulo 10^9 + 7.

 

The Input

Each line of input contains two integers n (0<n<=55) and k (0<k<=70). Input is terminated by  EOF.

 

The Output

For each line of input you have to find out the number of ways of painting the fence and show it in a seperate line.

 

Sample Input

2 4

3 6

 

Sample Output

16

6*/
#include <iostream>
using namespace std;

const int MOD = 1000000007;

int countWaysToPaintFence(int n, int k) {
    if (n == 0) return 0;
    if (n == 1) return k;
    
    // For the first post, there are k ways to paint it.
    long long sameColor = k;
    // For the second post, there are k ways to paint it different from the first one.
    long long diffColor = k * (k - 1);

    for (int i = 3; i <= n; i++) {
        long long total = (sameColor + diffColor) % MOD;
        sameColor = diffColor;
        diffColor = (total * (k - 1)) % MOD;
    }

    return (sameColor + diffColor) % MOD;
}

int main() {
    int n, k;
    while (cin >> n >> k) {
        int ways = countWaysToPaintFence(n, k);
        cout << ways << endl;
    }

    return 0;
}
