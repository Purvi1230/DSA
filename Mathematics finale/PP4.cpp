#include <iostream>
#include <vector>

using namespace std;

vector<int> sieveOfEratosthenes(int limit) {
    vector<bool> isPrime(limit + 1, true); // Initialize all numbers as prime
    vector<int> primes; // Vector to store prime numbers

    for (int p = 2; p * p <= limit; p++) {
        if (isPrime[p]) {
            // Mark all multiples of p as composite
            for (int i = p * p; i <= limit; i += p) {
                isPrime[i] = false;
            }
        }
    }

    // Collect prime numbers
    for (int p = 2; p <= limit; p++) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }

    return primes;
}

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    vector<int> primes = sieveOfEratosthenes(limit);

    cout << "Prime numbers up to " << limit << " are: ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
