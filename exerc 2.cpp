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
	int A  ,B ;
	cout<<"Donnez un entier :"<<endl;
	cin>>entier;
	A = multiple2(entier);
	B = multiple3(entier);
    
	if (A==0 && B==0 )
    cout<<"il est divisble par 6."<<endl;
	return 0;	
}
