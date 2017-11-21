#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height=-1;
    while (height > 23 || height < 0) {
        printf("Height: ");
        height = get_int();
    }
    //printf("Height is %d\n", height);
    int h = 0;
    while (h < height) {
        int s = height-1;
        while(s > h) {
            printf(" ");
            s--;
        }
        int c = 0;
        while(c <= h) {
            printf("#");
            c++;
        }
        printf("  ");
        c = 0;
        while(c <= h) {
            printf("#");
            c++;
        }
        printf("\n");
        h++;

    }

}