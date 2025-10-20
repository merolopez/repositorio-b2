#include <iostream>
using namespace std;
// Ejercicio 441: Funcion: calcular MCD (Euclides)
long long gcd(long long a, long long b) {{ return b==0? a : gcd(b, a%b); }}
int main() {{
    long long a,b; if(!(cin>>a>>b)) return 0;
    cout << gcd(abs(a), abs(b)) << '\n';
    return 0;
}}
