#include <iostream>
using namespace std;
// Ejercicio 410: Transparencia: Fibonacci recursivo (pequeños n)
long long fib(long long n) {{ return (n<=1)? n : fib(n-1)+fib(n-2); }}
int main() {{
    long long n; if(!(cin>>n)) return 0;
    cout << fib(n) << '\n';
    return 0;
}}
