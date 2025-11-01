typedef struct{
    double x;
    double y;
}coordinates;

typedef struct{
    coordinates point_1;
    coordinates point_2;
}rectangle;

double rectangleArea( rectangle *r)
{
    return fabs(r->point_1.x-r->point_2.x) * fabs(r->point_1.y-r->point_2.y);
}

double rectanglePerimeter( rectangle *r)
{
    return 2 * ( fabs(r->point_1.x-r->point_2.x) + fabs(r->point_1.y-r->point_2.y));
}

double rectangleDiagonal( rectangle *r)
{
    return hypot( (r->point_1.x-r->point_2.x) , (r->point_1.y-r->point_2.y));
}