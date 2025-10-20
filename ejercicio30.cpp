#include <iostream>
using namespace std;
// Ejercicio 30: Mayor de tres numeros
int main() {{
    long long a,b,c;
    if(!(cin>>a>>b>>c)) return 0;
    long long m = max(a,max(b,c));
    cout << m << '\n';
    return 0;
}}
