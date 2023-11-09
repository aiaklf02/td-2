#include<iostream>
using namespace std ;

int multiple2  (int nbr){
	if(nbr %2 == 0 ){
		cout<<"il est pair  ."<<endl;
     return 0;	
	}

    else
      return 1;	
}
int multiple3 (int nbr){
	if (nbr %3 == 0 ){
	cout <<"il est multiple de 3 ."<<endl;
    return 0 ;
}
    else 
      return 1 ;
}
int main ()
{
	int entier;
	cout<<"Donnez un entier :"<<endl;
	cin>>entier;
	
	if (multiple2(entier)==0 && multiple3(entier)==0 )
    cout<<"il est divisble par 6."<<endl;
	return 0;	
}
