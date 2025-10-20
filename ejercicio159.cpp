#include <iostream>
using namespace std;
// Ejercicio 159: Calcular potencia entera (a^b) (b >= 0)
int main() {{
    long long a; int b;
    if(!(cin>>a>>b)) return 0;
    long long res=1;
    for(int i=0;i<b;i++) res *= a;
    cout << res << '\n';
    return 0;
}}
