#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
        /** The vector variable coins will store the coins we can use. */
        int coins[1000] =  {0};
        /** The variable n will store the size of the vector coins. */
        int n = 0;
        /** The variable Sum will store the amount of money we want to exchange. */
        int Sum = 0;
        int i = 0;

        printf("Enter the amount of money: ");
        scanf("%d", &Sum);

        printf("Enter the number of coins: ");
        scanf("%d", &n);
        printf("Enter the value of the coins: ");

        for(i = 0; i < n; i ++)
        {
                scanf("%d", &coins[i]);
        }


        printf("Minimum coins required is %d ",MinCoins(coins, n, Sum));

        return 0;
}
