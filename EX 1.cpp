#include<iostream>
using namespace std;
static int i=0  ;
static void call(){
i++;	
}
int main()
{
	call();
        call();
	call();
	cout<<"Appel numero:"<<i<<endl;	
return 0;
}

   

	

