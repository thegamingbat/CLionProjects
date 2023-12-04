//
// Created by danis on 10/9/2023.
//

#ifndef PRACTICE_CPP_BOX_H
#define PRACTICE_CPP_BOX_H
template<class t>
class Box{
private:t width , length , height;

public:
    void setLength(t l);
    void setWidth(t w);
    void setHeight(t h);
    t getVolume();

friend Box;
};



#endif //PRACTICE_CPP_BOX_H
