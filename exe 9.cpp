#include<iostream>
#include<string>
using namespace std ;
class Animal {
protected:
	string nom;
	int age ;
public:
	void set_value (string nm, int ag){
		nom=nm;
		age=ag;
		
	}
		
};
class Zebra:Animal{
	void info(){
		cout<<" le nom de zebra:"<<nom<<endl;
		cout<<"l'age de zebra:"<<age<<endl;
		cout<<" le lieu d'origine est l'Afrique"<<endl
	}
};
class Dolphin:Animal{
	void info(){
		cout<<" le nom du dolphin"<<nom<<endl;
		cout<<" l'age du dolphin:"<<age<<endl;
		cout<<"le lieu d'origine est l'ocean."<<endl;
	}
};
int main()
{
	Zebra zebra;
	Dolphin dolphin;
	zebra.set_value('Zebroy',2);
	dolphin.set_value('Dolphina',4);
	cout<<" les informations du Zebre:"<<endl;
	zebra.info();
	cout<<" les informations du dolphin:"<<endl;
	dolphin.info();
	return 0;
}
}
