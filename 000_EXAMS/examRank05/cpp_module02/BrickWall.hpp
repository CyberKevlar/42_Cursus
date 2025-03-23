#pragma once

#include "ATarget.hpp"
#include <iostream> 

class BrickWall : public ATarget
{
    public:
        BrickWall();
        virtual ~BrickWall();

        virtual BrickWall *clone(void) const;
};
