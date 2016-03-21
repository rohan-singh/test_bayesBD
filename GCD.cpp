#include <Rcpp.h>

using namespace Rcpp;
// [[Rcpp::export]]

long int GCD( long int a, long int b)
{
  while(a%b != 0) 
  {
    int temp = a;
    a = b;
    b = temp%b;
  }
  return b;
}
