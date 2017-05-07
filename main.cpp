#include <bits/stdc++.h>

#define MAX 55

using namespace std;

int fibonacci(int n) {
    long long sol[MAX];
    sol[0] = 0, sol[1] = 1;

    for (int i = 2; i <= n; i++)
        sol[i] = sol[i - 2] + sol[i - 1];

    return sol[n];
}

int n;

int main()
{
    cout << "Introduceti numarul: "; cin >> n;

    if (n == 1)
        cout << "Primul termen Fibonacci este: " << fibonacci(n);
    else
        cout << "Al " << n << "-lea termen Fibonacci este: " << fibonacci(n);
    return 0;
}
