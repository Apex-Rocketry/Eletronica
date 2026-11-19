#include <stdint.h>
#include <stdio.h>
#include <math.h>

typedef int32_t         i32;
typedef int64_t         i64;

typedef float           f32;

typedef struct {
        f32 x;
        f32 y;
} vec2f;




f32 calcDist(vec2f v1, vec2f v2) {

        f32 distance = 0;

        distance = sqrt(pow( ( v2.x - v1.x ), 2) + pow( ( v2.y - v1.y ), 2) );

        return distance;
}



int main(void) {

        vec2f v1 = {};
        vec2f v2 = {};
        vec2f v3 = {};

        f32 perimeter = 0;

        printf("\nInsira as coordenadas x1 e y1\n");
        scanf("%f%f", &v1.x, &v1.y);

        printf("\nInsira as coordenadas x2 e y2\n");
        scanf("%f%f", &v2.x, &v2.y);

        printf("\nInsira as coordenadas x3 e y3\n");
        scanf("%f%f", &v3.x, &v3.y);

        perimeter = calcDist(v1, v2) + calcDist(v1, v3) + calcDist(v2, v3);

        printf("\nO perimetro do triangulo e igual a: %.2f",perimeter);

        return 0;
}