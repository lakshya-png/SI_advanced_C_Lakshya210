//WAp to print all the numbers between 1 to 10,000 which coontain equal number of even odd and prime digits.

#include <stdio.h>

int main() {

    for (int num = 1; num <= 10000; num++) {

        int countE = 0, countO = 0, countP = 0;

        for (int temp = num; temp > 0; temp /= 10) {

            int rem = temp % 10;

            if (rem % 2 == 0)
                countE++;
            else
                countO++;

            if (rem == 2 || rem == 3 || rem == 5 || rem == 7)
                countP++;
        }

        if (countE == countO && countE == countP)
            printf("%d\n", num);
    }

    return 0;
}