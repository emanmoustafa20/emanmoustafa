#ifndef DNA_HPP
#define DNA_HPP

#include "arrays.hpp"
namespace dna
{
char complementaryBase(char base)
{
  char combase = 'A';
  switch (base)
  {
  case 'A':
  {
    combase = 'T';
  }
  break;

  case 'T':
  {
    combase = 'A';
  }
  break;

  case 'C':
  {
    combase = 'G';
  }
  break;

  default:
  {
    combase = 'C';
  }
  break;
  }
  return combase;
}
char *complementarySequence(char *base, int size)
{
  char *complementarySeq = new char[size];
  for (int i = 0; i < size; ++i)
  {
    complementarySeq[i] = complementaryBase(base[size - i - 1]);
  }
  return complementarySeq;
}
char *analyzeDNA(char *base, int size, int &countA, int &countC, int &countG, int &countT)
{
  countA = arrays::countCharacter(&base[0], size, 'A');
  countC = arrays::countCharacter(&base[0], size, 'C');
  countG = arrays::countCharacter(&base[0], size, 'G');
  countT = arrays::countCharacter(&base[0], size, 'T');
  return complementarySequence(&base[0], size);
}
struct DNAArray
{
  char *base;
  int size;
};
struct analy_dna
{
  int counterA;
  int counterT;
  int counterG;
  int counterC;
char *comp_seq;
};
analy_dna analyzeDna (DNAArray dnadata)
{
analy_dna x;
x.counterA= arrays::countCharacter(dnadata.base, dnadata.size, 'A');
x.counterC= arrays::countCharacter(dnadata.base, dnadata.size, 'C');
x.counterG= arrays::countCharacter(dnadata.base, dnadata.size, 'G');
x.counterT= arrays::countCharacter(dnadata.base, dnadata.size, 'T');
x.comp_seq=complementarySequence(dnadata.base, dnadata.size);
return x;
}
}
#endif // DNA_HPP
