#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    int _integer;
    double _double;
    float _float;
    
    _integer = INT_MAX;
    _double = DBL_MAX;
    _float = FLT_MAX;
    
    printf ("Max value of int = %d\nMax value of double = %f\nMax value of float = %f\n", _integer, _double, _float);
    printf("Size of int = %lu bytes, Size of double = %lu bytes, Size of float = %lu bytes", sizeof(int), sizeof(double), sizeof(float));
    return 0;
}
