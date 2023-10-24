#include<iostream>
using namespace std;
int i=0  ;
void appel(){
i++;
cout<<"appel numero " <<i<<endl;
	
}
int main()
{
	int j , nbr ;
	cout<<"combien de fois avez vous appelez la fonction ? "<<endl;
	cin>>nbr;
	for (j=0; j<nbr ; j++){
		appel();
	}
return 0;
}

   

	

