#include <iostream>

using namespace std;

class Persona
{
private:
    int edad, tt;
    string nombre;
    bool genero;
public:
    Persona(int, int, string, bool);
    void aplicaRetiro();
};

Persona::Persona(int _edad, int _tt, string _nombre, bool _genero)
{
    edad = _edad;
    tt = _tt;
    nombre = _nombre;
    genero = _genero;
}

void Persona::aplicaRetiro()
{ 
        if (genero == true)
        {
            if (edad >= 60 && tt >= 25)
            {
                cout << "\nEl empleado: " << nombre << " si aplica para un retiro voluntario\n";
            } else
            {
                cout << "\nEl empleado: " << nombre << " no aplica para un retiro\n";
            }  
        } else if (genero == false)
            {
                if (edad >= 55 && tt >= 25)
                {
                    cout << "\nLa empleada: " << nombre << " si aplica para un retiro voluntario\n";
                } else
                {
                    cout << "\nLa empleada: " << nombre << " no aplica para un retiro\n";
                }            
            }
}


int main()
{
    int edad, tt;
    string nombre;
    bool genero;

    do
    {
        cout << "Genero (1 = hombre || 0 = mujer): ";
        cin >> genero;
        cout << "\nDigite su nombre: ";
        cin >> nombre;
        cout << "\nDigite su edad: ";
        cin >> edad;
        cout << "\nDigite cuantos anios lleva trabajando: ";
        cin >> tt;   
    } while (tt > edad); 

    Persona p1(edad,tt,nombre,genero);

    p1.aplicaRetiro();

    return 0;
}