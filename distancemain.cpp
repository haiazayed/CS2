#include <iostream>
#include "distanceclass.h"
#include "distanceclass.cpp"
using namespace std;
int main()
{
    point Arr[];
    int num;

    int center(point Arr[], int n)
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
}