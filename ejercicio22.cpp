#include <iostream>
using namespace std;
// Ejercicio 22: Calcular factorial iterativo (0..20)
int main() {{
    unsigned int n; if(!(cin>>n)) return 0;
    unsigned long long f=1;
    for(unsigned int i=2;i<=n;i++) f*=i;
    cout<<f<<'\n';
    return 0;
}}
