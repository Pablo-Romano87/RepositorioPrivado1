#include <iostream>

using namespace std;

int main()
{
     float  Xi, Yi, m1, m2,b1,b2;
    cout << "Ingrese un valor de pendiente y ordenada al origen de la recta 1:" << endl;
    cin >> m1;
    cin >> b1;
    cout << "Ingrese otro valor de pendiente y ordenada al origen de la recta 2:" << endl;
    cin >> m2;
    cin >> b2;

    if (m1!=m2)
    {
        Xi= ((b2-b1)/(m1-m2));
        Yi= ((m1*Xi)+b1);
        cout << "las Rectas se intersectan en el Punto: ( "<<Xi<<" ; "<< Yi<< " )"<< endl;
    }
        else if (b1==b2)
        {
        cout << "Las coordenadas corresponden a la misma recta: ( "<<m1<<"x + "<< b1<< " )." << endl;
        }
            else {cout<< "Las rectas son paralelas y no existe intersección" << endl;}
    return 0;
}
