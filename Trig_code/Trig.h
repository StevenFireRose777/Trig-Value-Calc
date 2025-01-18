#ifndef TRIG_H
#define TRIG_H

#include <math.h>
#include <stdio.h>

double calculate_trig(double value_x, int incrementer);
double cot(double x);
double sec(double x);
double csc(double x);

double cot(double x){
    return cos(x) / sin(x);
}
double sec(double x){
    return (double)1 / cos(x);
}
double csc(double x){
    return (double)1 / sin(x);
}

#endif