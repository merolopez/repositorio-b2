#include <iostream>
using namespace std;
// Ejercicio 357: Contar digitos de un numero entero
int main() {{
    long long n; if(!(cin>>n)) return 0;
    if(n<0) n=-n;
    int cnt= (n==0) ? 1 : 0;
    while(n>0) {{ n/=10; cnt++; }}
    cout << cnt << '\n';
    return 0;
}}
