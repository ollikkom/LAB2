

#ifndef LABB2_RECT_H
#define LABB2_RECT_H

#include <iostream>

class Rect
{
    int A; int B;
public:
    ~Rect();
    Rect();
    void setA(int len);
    void setB(int wid);
    int getA();
    int getB();
    void Print();
    long Area();


};

#endif //LABB2_RECT_H

