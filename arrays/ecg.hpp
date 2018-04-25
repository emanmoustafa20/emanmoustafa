#ifndef ECG_HPP
#define ECG_HPP
#include "arrays.hpp"
namespace ECG
{
using ECGArray = arrays::DoubleArray;
void analyzeECG(double *base, int arraySize, double &mean, double &variance, double &max, double &min)
{
    mean = arrays::meanArray(&base[0], arraySize);
    variance = arrays::varianceArray(&base[0], arraySize);
    max = arrays::maxArray(&base[0], arraySize);
    min = arrays::minArray(&base[0], arraySize);
}

struct Statistics
{
    double mean;
    double variance;
    double min;
    double max;
};
Statistics analyzeECG(ECGArray ecg)
{
    Statistics x;
    x.mean = arrays::meanArray(ecg);
    x.variance = arrays::varianceArray(ecg);
    x.min = arrays::minArray(ecg);
    x.max = arrays::maxArray(ecg);
    return x;
}
}

#endif // ECG_HPP
