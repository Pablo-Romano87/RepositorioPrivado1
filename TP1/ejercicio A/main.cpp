#include <iostream>

using namespace std;

int main()
{
    float  Velkmh, velms;
    cout << "Ingrese un valor de velocidad en Km/h: " << endl;
    cin >> Velkmh;
    velms = (Velkmh/(3.6));
    cout << "la velocidad ingresada equivale a: "<< velms << " m/s"<< endl;

    return 0;

}
