#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Ejercicio 142: Ordenamiento simple (burbuja) para N<=1000
int main() {{
    int N; if(!(cin>>N)) return 0;
    vector<long long> a(N);
    for(int i=0;i<N;i++) cin>>a[i];
    for(int i=0;i<N;i++) for(int j=0;j<N-1-i;j++) if(a[j]>a[j+1]) swap(a[j], a[j+1]);
    for(auto v: a) cout<<v<<' ';
    cout<<'\n';
    return 0;
}}
