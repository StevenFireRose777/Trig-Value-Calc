#include <stdio.h>
#include <math.h>
#include <string.h>
#include "Trig.h"

/*
We want to create a simple calculator that only CALCULATES
the values of trig functions such as cos(x), sin(x),
tan(x), cot(x), sec(x), csc(x). *MAY NOT THE EXACT VALUE BUT CLOSE ENOUGH*

1. Ask the user to put in a random number
2. ***FOR NOW** Put every number into the following functions:
sin(x), cos(x), tan(x), cot(x), csc(x), sec(x)
3. Print out the value.
*/


double calculate_trig(double value_x, int incrementer){
    switch (incrementer){
        case 0:
            return sin(value_x);
            break;
        case 1:
            return cos(value_x);
            break;
        case 2:
            return tan(value_x);
            break;
        case 3:
            return sec(value_x);
            break;
        case 4:
            return cot(value_x);
            break;
        case 5:
            return csc(value_x);
            break;
        default:
            break;
    }

    perror("Um. Why are you here?"); // ERROR OCCURED
    return -1.0; // ERROR has occured
}


int main(void){


    double x, total;
    char *trig_names[] = {
        "sin",
        "cos",
        "tan",
        "sec",
        "cot", 
        "csc"
    }; // List of trig names to print out (may change)

    printf("Enter the value of x: ");
    scanf("%lf", &x);
    int count = sizeof(trig_names) / sizeof(trig_names[0]);

    for(int i = 0; i < count; ++i){
        total = calculate_trig(x, i);
        printf("The value of %s(%.2lf) is %.11lf\n", trig_names[i], x, total);

    }

    return 0;
}