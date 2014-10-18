//
//  main.c
//  Homework
//
//  Created by Mac on 16.10.14.
//  Copyright (c) 2014 Mac. All rights reserved.
//

#include <stdio.h>

void mult_f(int k, int m);//декларация функции
int sum_f(int m, int l);

int main()
{
    mult_f(0, 0);//вызов функции
    int result_sum_f= sum_f(5,4);
    printf("\nresult in decimal: %d result in hex: %x\n", result_sum_f, result_sum_f);
    return 0;
}
void mult_f(int k, int m)//реализация функции
{
    
    printf("\nmultiplyinggg : k * m = %d\n", k * m);//умножение
}


int sum_f(int m, int l)
{
    return(m + l);
}