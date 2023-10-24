#include<iostream>
using namespace std ;
int main()
{
	int T[10];
	int i , max , min ;
	cout<<"Remplissez le tableau par des entiers: "<<endl;
	for (i=0; i<10 ; i++){
		cout<<" "<<endl;
		cin>>T[i];
	}
	max= T[0];
	for(i=0; i<10 ; i++){
		if(max<T[i])
     max= T[i];
	}
	cout<<"le plus grand entier du tableau est :"<<max<<endl;
	min= T[0];
	for(i=0; i<10 ; i++){
		if(min>T[i])
     min= T[i];
	}
    cout<<"le plus petit entier du tableau est :"<<min<<endl;
	 		
	return 0 ;
}

