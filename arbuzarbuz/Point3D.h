#pragma once
class Point3D {
public:
    int x, y, z;

    Point3D();
    Point3D(int x, int y, int z);
    void Init(int x, int y, int z);
    void Show();

    Point3D Sum(Point3D& b);
    Point3D Mult(Point3D& b);

    Point3D& Sum(int x, int y, int z);
    Point3D& Min(int x, int y, int z);
    Point3D& Mult(int x, int y, int z);
    Point3D& Div(int x, int y, int z);
};

