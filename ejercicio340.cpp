#include <iostream>
using namespace std;
// Ejercicio 340: Comprobar numero primo (simple)
int main() {{
    long long n; if(!(cin>>n)) return 0;
    if(n<=1) {{ cout<<"NO\n"; return 0; }}
    for(long long d=2; d*d<=n; d++) if(n%d==0) {{ cout<<"NO\n"; return 0; }}
    cout<<"SI\n"; return 0;
}}
