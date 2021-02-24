
#ifndef BINOMIAL_H
#define BINOMIAL_H

class Binomial{
  private:
  float coeff1;
  float coeff2;
  int expo1;
  int expo2;
public:
  Binomial(float c1=1.0,int p1=1 ,float c2=1.0, int p2=1);
    float GetCoefficient(int index);
    int GetPower(int index);
    int SetPower(int index, int power);
    int Add(Binomial &B);
    void Multiply(float value);
    void Multiply(float monomialCoeff, int monomialPow);
};

#endif