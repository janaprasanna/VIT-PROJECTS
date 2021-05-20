#include<stdio.h>
float roundoff(float);
int main()
{
    float x=45.67;
    float result;
    result = roundoff(x);
    printf("after rounding : %f",result);

    return 0;
}
    /* int result;
    if(x>0)
        result = (float)(x + 0.5);
    else    
        result = (float)(x-0.5); */
float roundoff(float x)
{
    // 37.66666 * 100 =3766.66
    // 3766.66 + .5 =3767.16    for rounding off value
    // then type cast to int so value is 3767
    // then divided by 100 so the value converted into 37.67
    float value = (int)(x * 100 + 0.5);
    return (float)value / 100;
}
    