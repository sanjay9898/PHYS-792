#include <iostream>
#include <TRandom3.h>
using namespace std;
main ()
{
  int a=2;
  int b=3;
  int c=a*b;
  cout<<c<<endl;
  TRandom3 generator(0);
  std::cout<<generator.Rndm()<<std::endl;
  return 0;
}
