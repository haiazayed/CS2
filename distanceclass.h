#ifndef distanceclass_h
#define distanceclass_h

#include <iostream>
#include <cmath>
using namespace std;

class point
{
public:
    point();
    point(float, float);
    void setpointx(float);
    void setpointy(float);
    float getpointx() const;
    float getpointy() const;
    void show() const;
    float distance(const point);

private:
    float x;
    float y;
};

#endif
