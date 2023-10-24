#include <iostream>
using namespace std;

class Complexe {
private:
    int reel;
    int imgn;

public:
    Complexe(int rl, int ig) {
        reel = rl;
        imgn = ig;
    }

    void display() {
    	
        cout << reel <<" "<<imgn<<"i" << endl;
        
    }

    Complexe addition(Complexe a) {
        return Complexe(reel + a.reel, imgn + a.imgn);
    }

    Complexe soustraction(Complexe a) {
        return Complexe(reel - a.reel, imgn - a.imgn);
    }

    Complexe multiplication(Complexe a) {
        return Complexe(reel * a.reel - imgn * a.imgn, reel * a.imgn + imgn * a.reel);
    }

    Complexe division(Complexe a) {
        int denominateur  = a.reel * a.reel + a.imgn * a.imgn;
        return Complexe((reel * a.reel + imgn * a.imgn) / denominateur, (imgn * a.reel - reel * a.imgn) / denominateur);
    }

    bool egalite(Complexe a) {
        return (reel == a.reel) && (imgn == a.imgn);
    }
};

int main() {
    int reel1, imgn1, reel2, imgn2;
    cout << "Entrer la partie reelle du premier nombre complexe : "<<endl;
    cin >> reel1 ;
    cout << "Entrer la partie imaginaire du premier nombre complexe:"<<endl;
    cin >> imgn1;
    cout << "Entrer la partie reelle  du deuxième nombre complexe : "<<endl;
    cin >> reel2;
    cout << "Entrer la partie imaginaire du deuxième nombre complexe : "<<endl;
    cin >> imgn2;

    Complexe a1(reel1, imgn1);
    Complexe a2(reel2, imgn2);

    cout << "1- Addition" << endl;
    cout << "2- Soustraction" << endl;
    cout << "3- Multiplication" << endl;
    cout << "4- Division" << endl;
    cout << "5- Egalite" << endl;

    int choice;
    cout << "Entrez votre choix : "<<endl;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Addition : ";
            (a1.addition(a2)).display();
            break;
        case 2:
            cout << "Soustraction : ";
            (a1.soustraction(a2)).display();
            break;
        case 3:
            cout << "Multiplication : ";
            (a1.multiplication(a2)).display();
            break;
        case 4:
            cout << "Division : ";
            (a1.division(a2)).display();
            break;
        case 5:
            cout << "Egalite : " << (a1.egalite(a2) ? "Vrai" : "Faux") << endl;
            break;
        default:
            cout << "choix invalide" << endl;
    }

    return 0;
}

