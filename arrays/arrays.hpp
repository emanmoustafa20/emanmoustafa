#ifndef ARRAYS_HPP
#define ARRAYS_HPP

#include <iostream>
#include "mathematics.hpp"
namespace arrays
{
void printAll(double *base, int arraySize)
{
    for (int i = 0; i <= arraySize; ++i)
    {
        std::cout << "array[" << i << "]=" << base[i] << std::endl;
    }
}
double maxArray(double *base, int arraySize)
{
    double max = base[0];
    for (int i = 0; i <= arraySize; ++i)
    {
        if (base[i] > max)
            max = base[i];
    }
    return max;
}

double minArray(double *base, int arraySize)
{

    double min = base[0];
    for (int i = 0; i <= arraySize; ++i)
    {
        if (base[i] < min)
            min = base[i];
    }
    return min;
}
double meanArray(double *base, int arraySize)
{
    double sum = 0;
    for (int i = 0; i <= arraySize; ++i)
    {
        sum = sum + base[i];
    }
    return sum / arraySize;
}

double varianceArray(double *base, int arraySize)
{
    double mean = meanArray(&base[0], arraySize);
    double sum = 0;
    for (int i = 0; i <= arraySize; ++i)
    {
        sum = sum + mathematics::square(mean - base[i]);
    }

    return sum / arraySize;
}
int countCharacter(char *basePointer, int size, char query)
{
    int counter = 0;
    for (int i = 0; i <= size; ++i)
    {
        if (basePointer[i] == query)
        {
            ++counter;
        }
    }
    return counter;
}
struct DoubleArray
{
    int size;
    double *base;
};
struct CharacterArray
{
    int size;
    double *base;
};
void printAll(DoubleArray array)
{
    printAll(array);
}

double maxArray(DoubleArray array)
{
    return maxArray(array.base, array.size);
}
double minArray( DoubleArray array )
{
    return maxArray(array.base, array.size);
}

double meanArray(DoubleArray array)
{
    return meanArray(array.base,array.size);
}

double varianceArray(DoubleArray array)
{
    return varianceArray(array.base,array.size);
}
}


#endif // ARRAYS_HPP
