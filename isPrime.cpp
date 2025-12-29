#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Solution {
  public:
    string isPrime(int n) {
        if (n <= 1) return "No";
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0) return "No";
        return "Yes";
    }
};

int main() {
    Solution s;
    int n;
    cin >> n;
    cout << s.isPrime(n);
    return 0;
}

