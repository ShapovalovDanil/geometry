#include "func.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float POkr(int r)
{
    if (r <= 0) {
        printf("Error");
        return 0;
    }
    float pi = 3.14;
    return 2 * pi * r;
}
float SOkr(int r)
{
    if (r <= 0) {
        printf("Error");
        return 0;
    }
    float pi = 3.14;
    return pi * r * r;
}
float triangleS(int xt1, int yt1, int xt2, int yt2, int xt3, int yt3)
{
    float p, plosh, str1, str2, str3;
    str1 = sqrt(pow(xt2 - xt1, 2) + pow(yt2 - yt1, 2));
    str2 = sqrt(pow(xt3 - xt1, 2) + pow(yt3 - yt1, 2));
    str3 = sqrt(pow(xt3 - xt2, 2) + pow(yt3 - yt2, 2));
    p = (str1 + str2 + str3) / 2;
    plosh = sqrt(p * (p - str1) * (p - str2) * (p - str3));
    printf("Plosh=%.2f\n", plosh);
    return plosh;
}
float triangleP(int xt1, int yt1, int xt2, int yt2, int xt3, int yt3)
{
    float perim, str1, str2, str3;
    str1 = sqrt(pow(xt2 - xt1, 2) + pow(yt2 - yt1, 2));
    str2 = sqrt(pow(xt3 - xt1, 2) + pow(yt3 - yt1, 2));
    str3 = sqrt(pow(xt3 - xt2, 2) + pow(yt3 - yt2, 2));
    perim = str1 + str2 + str3;
    printf("Perim=%.2f\n", perim);
    return perim;
}
float polygonS(
        int px1, int py1, int px2, int py2, int px3, int py3, int px4, int py4)
{
    float ploshs = 0;
    ploshs = abs((px1 * py2) + (px2 * py3) + (px3 * py4) + (px4 * py1)
                 - (px2 * py1) - (px3 * py2) - (px4 * py3) - (px1 * py4))
            / 2;
    printf("Plosh=%.2f\n", ploshs);
    return ploshs;
}
float polygonP(
        int px1, int py1, int px2, int py2, int px3, int py3, int px4, int py4)
{
    float perims = 0, str1 = 0, str2 = 0, str3 = 0, str4 = 0;
    str1 = sqrt(pow(px2 - px1, 2) + pow(py2 - py1, 2));
    str2 = sqrt(pow(px3 - px2, 2) + pow(py3 - py2, 2));
    str3 = sqrt(pow(px4 - px3, 2) + pow(py4 - py3, 2));
    str4 = sqrt(pow(px1 - px4, 2) + pow(py1 - py4, 2));
    perims = str1 + str2 + str3 + str4;
    printf("Perim=%.2f\n", perims);
    return perims;
}
int peres(int x1, int y1, int r1, int x2, int y2, int r2)
{
    float ras;
    ras = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    if (x1 == x2 && y1 == y2) {
        if (r1 == r2) {
            printf("\n Peresekautsa!");
            return 1;
        } else {
            printf("\n Net peresechenia!");
            return 0;
        }
    }
    if (r1 > r2 && ras <= r1) {
        if (r2 >= r1 - ras) {
            printf("\n Peresekautsa!");
            return 1;
        } else {
            printf("\n Net peresechenia!");
            return 0;
        }
    } else {
        if (r2 > r1 && ras <= r2) {
            if (r1 >= r2 - ras) {
                printf("\n Peresekautsa!");
                return 1;
            } else {
                printf("\n Net peresechenia!");
                return 0;
            }
        }
    }
    if (ras <= r1 + r2) {
        printf("\n Peresekautsa!");
        return 1;
    } else {
        printf("\n Net peresechenia!");
        return 0;
    }
}
