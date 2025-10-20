#include <iostream>
#include <string>
using namespace std;
// Ejercicio 18: Verificar palindromo (cadena)
int main() {{
    string s; if(!(cin>>s)) return 0;
    bool ok=true;
    for(size_t i=0;i<s.size()/2;i++) if(s[i]!=s[s.size()-1-i]) {{ ok=false; break; }}
    cout << (ok? "SI":"NO") << '\n';
    return 0;
}}
