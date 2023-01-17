

class Solution {
    const long mod = 1e9 + 7;
public:
    int numPrimeArrangements(int n) {
        int prime=0;
        
        for (int i = 2; i <= n; ++i) {
            if (isPrime(i)) {
                prime += 1;
            }
        }
        long a = perm(prime, prime);
        long b = perm(n-prime, n-prime);
        
        return (int)(a * b % mod);
    }

    bool isPrime(int n) {
        for (int i = 2; i <= n/2; ++i) {
            if (n % i == 0) {
                return false;
            }
        }       
        return true;
    }

    long fact(int n) {
        if (n == 0) {
            return 1;
        }
        long counter = n;
        
        while (--n) {
            if (counter > mod) {
                counter %= mod;
            }
            counter *= n;
        }
        return counter;
    }
    
    int perm(int n, int r) {
        return fact(n) / fact(n-r);
    }
};