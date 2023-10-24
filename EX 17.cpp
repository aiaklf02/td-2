#include <iostream>
#include <string>

using namespace std;

int main() {
    string formatdatehour;
    
    
    cout << "Entrez la date et l'heure au format JJMMAAAAHHNN : ";
    cin >> formatdatehour;
    if(formatdatehour.length()!=12){
    
        cout << "Erreur, vous avez passer le nombre de caracteres du format." << endl;
	}

     else{
    string jour = formatdatehour.substr(0, 2);
    string mois = formatdatehour.substr(2, 2);
    string annee = formatdatehour.substr(4, 4);
    string heure = formatdatehour.substr(8, 2);
    string minute = formatdatehour.substr(10, 2);

    
    cout << "Jour : " << jour << endl;
    cout << "Mois : " << mois << endl;
    cout << "Annee : " << annee << endl;
    cout << "Heure : " << heure << endl;
    cout << "Minute : " << minute << endl;
}

return 0;
}

