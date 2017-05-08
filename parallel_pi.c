//
// Created by alexey on 08.05.17.
//
#include <omp.h>
#include <stdio.h>
int main(){
    const long count_of_steps = 1000000000;
    const int count_of_threads = 2;
    double sum = 0.0;
    double pi = 0.0;
    const double step = 1.0 / count_of_steps;

#pragma omp parallel for reduction(+:sum)
        for(int i = 0; i < count_of_steps; i++){

            double x = (i + 0.5) * step;
            sum += 4.0 / (1.0 + x * x);
        }
    pi = step * sum;
    printf("Pi = %f\n", pi);
}