#pragma once

#include "math/Vec3.h"

struct key_action{
    int key;
    int action;
    int mod;
};

class IControlable{
public:
    virtual bool isControlled() = 0;
    virtual IControlable* takeControl(Vec3f) = 0;
    virtual void movetop()  = 0;
    virtual void movebot()  = 0;
    virtual void moveleft() = 0;
    virtual void moveright()= 0;
};
