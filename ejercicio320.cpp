#include <iostream>
using namespace std;
// Ejercicio 320: Uso de struct - estudiante con promedio
struct Estudiante {{ string nombre; double nota; }};
int main() {{
    Estudiante e; if(!(cin>>e.nombre>>e.nota)) return 0;
    cout << e.nombre << ' ' << (e.nota>=7? "APROBADO":"REPROBADO") << '\n';
    return 0;
}}
