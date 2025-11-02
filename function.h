typedef struct{
    double x;
    double y;
}coordinates;

typedef struct{
    coordinates point_1;
    coordinates point_2;
}rectangle;

double rectangleArea( rectangle *r);
double rectanglePerimeter( rectangle *r);
double rectangleDiagonal( rectangle *r);