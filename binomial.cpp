#include "binomial.h"
#include<iostream>

using namespace std;

Binomial::Binomial(float c1,int p1,float c2, int p2)
{
    coeff1 = c1;
    coeff2 = c2;
    if(p1 < 1)
      expo1 = 1;
    else
      expo1 = p1;
    if(p2 < 1)
      expo2 = 1;
    else
      expo2 = p2;
}
float Binomial::GetCoefficient(int index)
{
    if(index == 1)
     return coeff1;
    else if(index == 2)
     return coeff2;
    else
     return -1.0;
}
int Binomial::GetPower(int index)
{
    if(index == 1)
     return expo1;
    else if(index == 2)
     return expo2;
    else
     return -1;
}
int Binomial::SetPower(int index, int power)
{
    if(index == 1)
{
    if(power < 1)
     expo1 = 1;
    else
     expo1 = power;
return 0;
}
else if(index == 2)
{
  if (power < 1)
     expo2 = 1;
  else
     expo2 = power;
    return 0;
}
else
{
  return -1;
}
}
int Binomial::Add(Binomial &B)
{
    if((expo1 == B.expo1) && (expo2 == B.expo2))
  {
    coeff1 += B.coeff1;
    coeff2 += B.coeff2;
  return 0;
  }
  else
  {
    return -1;
  }
}
void Binomial::Multiply(float numVal)
{
  coeff1 *= numVal;
  coeff2 *= numVal;
}
void Binomial::Multiply(float monomialCoeff, int monomialPow)
{
  coeff1 *= monomialCoeff;
  expo1 += monomialPow;
  coeff2 *= monomialCoeff;
  expo2 += monomialPow;
}
