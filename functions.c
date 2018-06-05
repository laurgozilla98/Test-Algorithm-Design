#include "functions.h"
#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

int minim (int number1, int number2)
{
        if(number1 < number2)
        {
                return number1;
        }
        else
        {
                return number2;
        }
}

int MinCoins( int coins[], int n, int Sum )
{

    /** The vector variable place will be used store the minimum number of coins to obtain the money. */
        int place[Sum+1]; // Sum[x] = the minimum number of coins needed to obtain x.

    // Initialize all place values as 0
        int i = 0;
        int j = 0;
        for(i = 0; i <= Sum; i ++)
        {
            place[i] = INT_MAX;
        }

        place[0] = 0;


        for(i = 0; i < n; i ++)
        {
                for(j = coins[i]; j <= Sum; j++)
                {
                        place[j] = minim( place[j], place[j - coins[i]] + 1);
                }
        }

        return place[Sum];
}
