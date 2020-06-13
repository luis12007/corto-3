#include<iostream>

using namespace std;


bool bisiesto(int x)
{
 if((x%4==0) && (x%100!=0) or (x%400==0))
   return true;
  else 
   return false;
}


int main()
{
 int x;
  cout << "ingrese el año"<<endl;
 cin>>x;

  if(bisiesto(x)){
   cout<<"El año "<<x<<" es bisiesto"<<endl;
  }else{
   cout<<"El año " <<x<<" no es bisiesto"<<endl;
  
 }
  
 return 0;
 
}
