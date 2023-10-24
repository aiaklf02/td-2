#include<iostream>
#include<cstdlib>
using namespace std ;
int main ()
{
	int taille ;
	int i ;

	
	cout<<"Entrez la taille du tableau:"<<endl;
	cin>>taille;
    int*ptr=(int*) malloc (taille*sizeof(int));
	if(ptr==NULL)
	    cout<<"Pas d'allocation."<<endl;
	else 
	{
		cout<<"Remplissez le tableau:"<<endl;
		for(i=0 ; i< taille ; i++){
			cout<<"  "<<endl;
			cin>>ptr[i];
			
		}
	}
	int*ptrcr= (int*)malloc( taille*sizeof(int));
	if(ptrcr==NULL)
	   cout<<"pas d'allocation."<<endl;
	else 
	{
		for(i=0 ; i<taille ;  i++){
			ptrcr[i]=ptr[i]*ptr[i];
		
	   }
	   free(ptr);
	   cout<<"le tableau des carres :"<<endl;
	   for(i=0 ; i<taille ; i++ ){
	   	cout<<ptrcr[i]<<"  "<<endl;
		   }
	   }
	free(ptrcr);
		
	return 0;
}
