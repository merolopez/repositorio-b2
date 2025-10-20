#include <iostream>
using namespace std;
// Ejercicio 303: Par o impar
int main() {{
    long long x;
    if(!(cin>>x)) return 0;
    cout << ((x%2==0) ? "PAR" : "IMPAR") << '\n';
    return 0;
}}
