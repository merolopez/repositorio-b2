#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// Ejercicio 62: Invertir palabra
int main() {{
    string s; if(!(cin>>s)) return 0;
    reverse(s.begin(), s.end());
    cout << s << '\n';
    return 0;
}}
