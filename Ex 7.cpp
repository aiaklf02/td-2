#include<iostream>
using namespace std ;
int main()
{
int T[10];
int i , tmp ;
int echange;
cout<<"Entrez les elements du tableau:"<<endl;
	for(i=0 ; i<10 ; i++) {
		cout<<" "<<endl;
		cin>>T[i];
	}
do{
	echange=0;	
	for(i=0 ; i<10 ; i++){
		if(T[i]>T[i+1]){
			tmp= T[i];
			T[i]=T[i+1];
			T[i+1]=tmp;
			echange ++;
		}
	}
}while(echange>0);
cout<<"le tableau triee pr ordre croissant :"<<endl;
	for(i=0 ; i<10 ; i++){
		cout<<" "<<T[i]<<endl;
	  }    
return 0  ;
     
}
