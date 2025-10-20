#include <iostream>
#include <vector>
using namespace std;
// Ejercicio 350: Suma filas de una matriz (m x n). Entrada: m n seguido de m*n
int main() {{
    int m,n; if(!(cin>>m>>n)) return 0;
    for(int i=0;i<m;i++) {{ long long sum=0; for(int j=0;j<n;j++) {{ long long x; cin>>x; sum+=x; }} cout<<sum<<'\\n'; }}
    return 0;
}}
