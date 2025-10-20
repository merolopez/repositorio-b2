#include <iostream>
#include <vector>
using namespace std;
// Ejercicio 344: Suma diagonal de matriz cuadrada (entrada: n seguido de n^2)
int main() {{
    int n; if(!(cin>>n)) return 0;
    long long sum=0;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) {{ long long x; cin>>x; if(i==j) sum+=x; }}
    cout<<sum<<'\n';
    return 0;
}}
