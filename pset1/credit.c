#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    printf("Number: ");
    long int number = get_long_long();
    //printf("Got it: %ld", number);
    long int tempNumber = number;
    int tempDigit = 0;
    int pSum = 0;
    int mSum = 0;
    int m = 0;
    int length = 0;

    while(tempNumber > 0) {
        tempDigit = tempNumber % 10;
        //printf("%d\n", tempDigit);
        if (m == 0) {
            pSum = pSum + tempDigit;
            //printf("psum: %d\n", pSum);
            m = 1;
        } else {
            if (tempDigit*2 > 9) {
                int dSum = (tempDigit*2) % 10 + (tempDigit*2/10) % 10;
                mSum = mSum + dSum;
                //printf("msum: %d\n", mSum);
                m = 0;
            } else {
            mSum = mSum + tempDigit*2;
            //printf("msum: %d\n", mSum);
            m = 0;
            }
        }
        tempNumber = tempNumber/10;
        length += 1;
    }

    int finalSum = pSum + mSum;
    //printf("finalSum: %d\n", finalSum);

    if (finalSum % 10 != 0) {
        printf("INVALID\n");
    }
    else {
        //printf("VALID");
        //int firstDigitDiv = number/((int)pow(10,(length-1)));
        //int firstDigit = firstDigitDiv % 10;
        //int secondDigitDiv = number/((int)pow(10,(length-2)));
        //int secondDigit = secondDigitDiv % 10;
        //printf("First 2 digits: %d %d\n", firstDigit, secondDigit);

        if (number >= 4000000000000 && number <= 4999999999999) {
            printf("VISA\n");
        };
        if (number >= 4000000000000000 && number <= 4999999999999999) {
            printf("VISA\n");
        };
        if (number >= 340000000000000 && number <= 349999999999999) {
            printf("AMEX\n");
        };
        if (number >= 370000000000000 && number <= 379999999999999) {
            printf("AMEX\n");
        };
        if (number >= 5100000000000000 && number <= 5599999999999999) {
            printf("MASTERCARD\n");
        };
    };
return 0;
}