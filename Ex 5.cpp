#include<iostream>
using namespace std ;
int main()
{
   int a;
    int &ref_a = a;
    int *p_a= &a ;
    cout<<"Entrez un entier:"<<endl;
    cin>>a;
    cout<<"la variable est :"<<a<<endl;
    cout<<"la reference de "<<a<< "  est  :"<< ref_a<<endl;
    cout<<"l'adresse de p_a est :"<< p_a<<endl;
    cout<<"l'adresse de  "<<a<<" est:"<< &a<<endl;
    cout<<"la valeur pointee par p_a est :"<< *p_a<<endl;
    return 0;
    
   
}
