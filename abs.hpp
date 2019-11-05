#ifndef __ABS_HPP__
#define __ABS_HPP__

#include "base.hpp"
#include "op.hpp"
#include "math.h"
class Abs : public Base
{
        public:
        Base* composite;
        Abs(Base*composite)
        {
                this->composite = composite;
        }
        double evaluate() {return 0;};
        std::string stringify(){return "s";};
        int change();
};

#endif

