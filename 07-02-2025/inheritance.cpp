#include <iostream>

using namespace std;

class Shape {
    public:
    float areaCovered;
    float periMeter;
};

class square: public Shape {
    public:
    float length;
};

class rectangle: public Shape {
    public:
    float length, breadth;
};

class circle: public Shape {
    public:
    float radius;
};
