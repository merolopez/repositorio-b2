#include <iostream>
#include <vector>
using namespace std;
// Ejercicio 281: Sumar N numeros (entrada: N seguido de N enteros)
int main() {{
    int N; if(!(cin>>N)) return 0;
    long long s=0,x;
    for(int i=0;i<N;i++) {{ cin>>x; s+=x; }}
    cout << s << '\n';
    return 0;
}}
