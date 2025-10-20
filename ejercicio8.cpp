#include <iostream>
#include <algorithm>
using namespace std;
// Ejercicio 8: Ordenar tres numeros (asc)
int main() {{
    long long a,b,c; if(!(cin>>a>>b>>c)) return 0;
    long long v[3] = {{a,b,c}};
    sort(v, v+3);
    cout << v[0] << ' ' << v[1] << ' ' << v[2] << '\n';
    return 0;
}}
