// C++ program to print all primes
// smaller than or equal to
// n using Sieve of Eratosthenes method
#include <bits/stdc++.h>
using namespace std;
#define endl '\n' 
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1]; // take a boolean type array;
    memset(prime, true, sizeof(prime));//set all value is true of array
 
    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple
            // of p and are less than p^2
            // are already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 for (int p = 2; p <= n; p++)
            cout << prime[p] << " ";
            cout<<endl;
    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
 
// Driver Code
int main()
{
    int n ; cin>>n;
    
    SieveOfEratosthenes(n);
    return 0;
}