#pragma once
class Point3D {
    int x, y, z;
    static int count;
public:
   

    Point3D();
    Point3D(int x, int y, int z);
    ~Point3D();

    void Init(int x, int y, int z);
    void Show();

    Point3D Sum(Point3D& b);
    Point3D Mult(Point3D& b);

    Point3D& Sum(int x, int y, int z);
    Point3D& Min(int x, int y, int z);
    Point3D& Mult(int x, int y, int z);
    Point3D& Div(int x, int y, int z);

    static void GetCount();
};


