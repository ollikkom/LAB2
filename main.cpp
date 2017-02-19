#include <iostream>
#include "Rect.h"
int main() {
        int n;
        std::cout<<"Enter n: "<<std::endl;
        std::cin>>n;
        Rect *rects;
        rects = new Rect[n];
        for(int i=0; i<n;i++){
            rects[i].setA(1+rand()%7);
            rects[i].setB(1+rand()%7);
            rects[i].Print();
        }
        int s;
        std::cout<<"Enter s: "<<std::endl;
        std::cin>>s;
        for( int i = 0;i<n; i++){
            if (rects[i].Area() >s)
            {
                rects[i].Print();


            }
        }
    return 0;
    }
