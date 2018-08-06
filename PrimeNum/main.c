#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    // initializing variables
    int num;
    int fact;
    int primes[100];
    int primeCount = 1;
    int root;
    bool isPrime;

    // setting first prime value
    primes[0] = 2;

    // Check if number is prime
    for(num = 3; num <= 100; num += 2){
        isPrime = true;
        root = sqrt(num);
        for(fact = 2; fact <= root; ++fact){
            if(num % primes[fact] == 0){
                isPrime = false;
            }
        }
        if(isPrime == true){
            primes[primeCount] = num;
            ++primeCount;
        }
    }

    // displaying prime values
    for(fact = 0; fact < primeCount; ++fact){
         printf("Prime value: %d\n", primes[fact]);
    }

    return 0;
}
