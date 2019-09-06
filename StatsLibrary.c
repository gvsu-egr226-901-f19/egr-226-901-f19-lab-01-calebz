#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "StatsLibrary.h"

float maximum(float nums[], int n)
{
    int i;
    float x;

    for(i=0;i<n+1;i++)
    {
        x=0;
        if(x<nums[i])
        {
            x=nums[i];
        }
    }
    return x;
}

float minimum(float nums[], int n)
{
    int i;
    float x;

        for(i=0;i<n+1;i++)
    {
        x=0;
        if(x>nums[i])
        {
            x=nums[i];
        }
    }
    return x;
}

float mean(float nums[], int n)
{
    int i=0;
    int sum=0;
    for(i=0; i<n; i++)
    {
        sum=sum + nums[i];
        sum+=nums[i];
    }
    float mean=sum/n;
    return mean;
}

float median(float nums[], int n)
{
    if (n%2==0)
    {
        int x=n/2;
        float median=nums[x];
        return median;
    }
    else
    {
        int x=n/2;
        float sum= nums[x]+nums[x+1];
        float median= sum/2;
        return median;
    }
}

float variance(float nums[], int n)
{
   int i;
   float diff;
   float square;
   float sumofsquare;
   for(i=0; i<n; i++)
   {
       diff=nums[i]-median(nums,n);
       square=diff*diff;
       sumofsquare+=square;
   }
   float variance=sumofsquare/(n-1);
   return variance;
}

float standard_deviation(float nums[], int n)
{
    float deviation=sqrt(variance(nums,n));
    return deviation;
}
