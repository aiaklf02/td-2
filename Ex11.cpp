#include <iostream>
#include <cmath>
using namespace std;

class vecteur3d {
private:
    float x, y, z;

public:
    vecteur3d(float x = 0.0, float y = 0.0, float z = 0.0) : x(x), y(y), z(z) {}

    void display() {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
    vecteur3d somme(vecteur3d u) {
        return vecteur3d(x + u.x, y + u.y, z + u.z);
    }

    float produit(vecteur3d u) {
        return (x * u.x + y * u.y + z * u.z);
    }

    bool coincide(vecteur3d u) {
        return (x == u.x) && (y == u.y) && (z == u.z);
    }

    float norme() {
        return sqrt(x * x + y * y + z * z);
    }

   
};

int main() {
    
    float x1, y1, z1, x2, y2, z2;


    cout<<"Entrez les composantes de u1 (x,y,z):"<<endl;
    cin>>x1>>y1>>z1;
    cout<<"Entrez les composantes de u2 (x,y,z):"<<endl;
    cin>>x2>>y2>>z2;
    vecteur3d u1(x1,y1,z1);
    vecteur3d u2(x2,y2,z2);
    vecteur3d u3 = u1.somme(u2);
    cout << "Somme de u1 et u2 : "<<endl;
    u3.display();
    float produit = u1.produit(u2);
    cout << "Produit scalaire de u1 et u2 : " << produit << endl;
    if (u1.coincide(u2)==1 )
      cout<<"u1 et u2 ont des memes composantes. "<<endl;
    if (u1.coincide(u2)==0 )
      cout<<"u1 et u2 n'ont pas des  memes composantes. "<<endl;

    float norme_u1 = u1.norme();
    float norme_u2 = u2.norme();
    cout << "Norme de u1 : " << norme_u1 << endl;
    cout << "Norme de u2 : " << norme_u2 << endl;

    
    return 0;
}

