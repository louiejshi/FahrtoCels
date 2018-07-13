//  C Programming
//
//  Program that converts Fahr to Celsius using a function call.
//
//  Exercise_1-15
//
//  Created by Louie Shi on 6/29/18.
//  Copyright © 2018 Louie Shi. All rights reserved.
//

#include <stdio.h>

#define lower 0
#define upper 300
#define step 20

void FahrtoCelsius(int fahr);

void FahrtoCelsius(int fahr)
{
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
}

int main(int argc, const char * argv[])
{
    char str1[20] = "Fahr";
    char str2[20] = "Celsius";
    
    printf("%s %s\n", str1, str2);
    
    for(int fahr = lower; fahr <= upper; fahr += step)
    {
        FahrtoCelsius(fahr);
    }
    
    return 0;
}
