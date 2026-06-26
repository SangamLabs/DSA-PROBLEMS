class Solution {
public:
    int fib(int n) {
        if (n <= 1) {
        return n;
    }

    // Recursive case: sum of (n-1)th and (n-2)th Fibonacci numbers
    int last = fib(n - 1);   // (n-1)th Fibonacci
    int slast = fib(n - 2);  // (n-2)th Fibonacci

    return last + slast;
    }
};