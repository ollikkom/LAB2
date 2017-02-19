

#include <iostream>
#include "Rect.h"

void Rect::setA(int len)
{
    A = len;
}

void Rect::setB(int wid)
{
    B = wid;
}

int Rect::getA()
{
    return A;
}
int Rect::getB()
{
    return B;
}

long Rect::Area()
{
    return A*B;
}

Rect::~Rect(){}


Rect::Rect()
{
    A = 0;
    B = 0;
}

void Rect::Print()
{
    std::cout<<std::endl<<"Width= "<<B<<"\nLenght= "<<A<<std::endl;
}

