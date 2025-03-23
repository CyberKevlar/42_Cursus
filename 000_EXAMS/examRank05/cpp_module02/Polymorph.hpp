#pragma once

#include "ASpell.hpp"
#include <iostream>

class Polymorph: public ASpell
{
    public:
        Polymorph();
        virtual ~Polymorph();

        virtual Polymorph *clone(void) const;
};
