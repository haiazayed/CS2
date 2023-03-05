#include "distanceclass.h"
point::point()
{
    x = 0.0;
    y = 0.0;
}

point::point(float h, float i)
{
    x = h;
    y = i;
}

void point::setpointx(float k)
{
    x = k;
}

void point::setpointy(float l)
{
    y = l;
}

float point::getpointx() const
{
    return x;
}

float point::getpointy() const
{
    return y;
}

void point::show() const
{
    cout << "(" << x << " , " << y << ")";
}

float point::distance(const point f)
{
    float d;
    d = sqrt(pow(x - f.x, 2) + pow(y - f.y, 2));
    return d;
}

point center(point Arr[], int n)
{
    float averagex, averagey;
    float sumx = 0.0, sumy = 0.0;

    for (int i = 0; i < n; i++)
    {
        sumx = sumx + Arr[i].getpointx();
        sumy = sumy + Arr[i].getpointy();
    }

    averagex = sumx / n;
    averagey = sumy / n;

    point P(averagex, averagey);

    return P;
}

void closeto(point N[], int s, point M[], int i, point p)
{
    point centerA = center(N, s);
    point centerB = center(M, i);

    float distanceA = centerA.distance(p);
    float distanceB = centerB.distance(p);

    if (distanceA < distanceB)
    {
        cout << " belongs to cluster A." << endl;
    }
    else
    {
        cout << " belongs to cluster B." << endl;
    }
}