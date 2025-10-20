#include <iostream>
#include <string>
using namespace std;
// Ejercicio 188: Contar vocales en una palabra (minusculas y mayusculas)
int main() {{
    string s; if(!(cin>>s)) return 0;
    int cnt=0;
    for(char c: s) {{ char d=tolower(c); if(d=='a'||d=='e'||d=='i'||d=='o'||d=='u') cnt++; }}
    cout << cnt << '\n';
    return 0;
}}
