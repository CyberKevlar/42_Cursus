#pragma once

#include "ATarget.hpp"
#include <iostream> 

class Dummy : public ATarget
{
    public:
        Dummy();
        virtual ~Dummy();

        virtual Dummy *clone(void) const;
};
