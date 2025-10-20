#include <iostream>
#include <vector>
using namespace std;
// Ejercicio 261: Maximo y minimo en arreglo
int main() {{
    int N; if(!(cin>>N)) return 0;
    long long x;
    cin>>x;
    long long mx=x, mn=x;
    for(int i=1;i<N;i++) {{ cin>>x; mx = max(mx,x); mn = min(mn,x); }}
    cout << mx << ' ' << mn << '\n';
    return 0;
}}
