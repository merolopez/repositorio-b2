#include <iostream>
#include <vector>
using namespace std;
// Ejercicio 314: Suma de pares en arreglo
int main() {{
    int N; if(!(cin>>N)) return 0;
    long long x, s=0;
    for(int i=0;i<N;i++) {{ cin>>x; if(x%2==0) s+=x; }}
    cout << s << '\n';
    return 0;
}}
