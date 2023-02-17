#include<iostream>
using namespace std;
int factTR(int n , int a )    
// a=ACCUMULATOR
{
  if (n==0)
  return a;
  return factTR(n-1 , n*a );
}
/*int fact(int n)
{
  return factTR(n , 1 );
}*/
int main()
{
  cout<<factTR(4,1);
  return 0;
}

