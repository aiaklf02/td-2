#include<iostream>
using namespace std ;
class Test{
public:
   static int nbrcall;
   void call(){
   	nbrcall++;
   }
};
int Test::nbrcall=0;
int main()
{
Test inst1;
Test inst2;
inst1.call();
inst2.call();
inst1.call();
inst1.call();
inst2.call();
cout<<"la fonction call est appele "<<Test::nbrcall<<" fois"<<endl;

 return 0;	
}
