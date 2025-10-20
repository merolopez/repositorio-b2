#include <iostream>
#include <vector>
using namespace std;
// Ejercicio 149: Rotar arreglo a la derecha k posiciones (entrada: N, k, luego N elementos)
int main() {{
    int N,k; if(!(cin>>N>>k)) return 0;
    vector<long long> a(N);
    for(int i=0;i<N;i++) cin>>a[i];
    k = ((k%N)+N)%N;
    for(int i=0;i<N;i++) cout << a[(i - k + N)%N] << (i+1==N? '\\n' : ' ');
    return 0;
}}
