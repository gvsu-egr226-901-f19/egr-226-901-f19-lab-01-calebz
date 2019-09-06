#include <stdio.h>
#include <stdlib.h>
#include "StatsLibrary.h"

int main(void)
{
    int c;
    FILE *f;
    f=fopen("data.txt", "r");
    if (f == NULL)
    {
        printf("Error reading in data.txt");
    }
    for (c= getc(f); c != EOF; c=getc(f))
    {
        c=c+1;
    }
    float nums[c];
    for (int i=0; i<c; i++)
    {
        fscanf(f,"%d", &nums[i]);
    }
    fclose(f);
    return 0;
}
