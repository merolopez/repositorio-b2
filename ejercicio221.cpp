#include <iostream>
#include <vector>
using namespace std;
// Ejercicio 221: Buscar elemento en arreglo (lineal)
int main() {{
    int N; if(!(cin>>N)) return 0;
    vector<long long> a(N);
    for(int i=0;i<N;i++) cin>>a[i];
    long long key; cin>>key;
    int pos=-1;
    for(int i=0;i<N;i++) if(a[i]==key) {{ pos=i; break; }}
    cout << pos << '\n';
    return 0;
}}
