#include<iostream>
using namespace std ;
void incrementer(int *val){
  (*val)++;
}
int permuter(int *a , int *b){
	int permt ;
	permt=*a;
	*a=*b;
	*b=permt;
	cout<<"la nouveau valeur de A est :"<<*a<<endl;
	cout<<"la nouveau valeur de B est :"<<*b<<endl;

	return 0 ;
	
}

int main()
{
	int a , A,B ;
	cout<<"Entrez une valeur :"<<endl;
	cin>>a;
	incrementer(&a);
	cout<<"la valeur incremetee est :"<<a<<endl;
	incrementer(&a);
	cout<<"entrez une valeur pour A :"<<endl;
	cin>>A;
	cout<<"entrez une valeur pour B  :"<<endl;
	cin>>B;
	
    permuter( &A, &B);
    
	return 0;
	
}
