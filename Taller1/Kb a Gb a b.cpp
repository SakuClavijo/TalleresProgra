#include <stdio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int kilobytes;
    printf("Ingresa la cantidad de kilobytes: ");
    scanf("%d", &kilobytes);
    
    double gigabytes = kilobytes / 1024.0 / 1024.0;
    double roundedGB = round(gigabytes * 100) / 100;
    
    long long bits = kilobytes * 8 * 1024;
    
    printf("%d Kilobytes es igual a %.2lf Gigabytes\n", kilobytes, gigabytes);
    printf("%d Kilobytes es igual a %lld bits\n", kilobytes, bits);

    return 0;
}

