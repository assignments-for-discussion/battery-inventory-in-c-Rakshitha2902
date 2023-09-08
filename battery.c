#include<stdio.h>
int main(){
    float present_capacity,rated_capacity,SoH;
    printf("enter present capacity");
    scanf("%f",&present_capacity);
    printf("enter rated capacity");
    scanf("%f",&rated_capacity);
    SoH=(present_capacity/rated_capacity)*100;

    if (SoH>80 && SoH<=100)
    {
     printf("healthy");
    }
    if (SoH>=80 && SoH<=65)
    {
     printf("exchange");
    }
     if (SoH<65)
    {
     printf("failed");
    }
}