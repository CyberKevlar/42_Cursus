#pragma once

#include "ASpell.hpp"
#include <iostream>

class Fwoosh: public ASpell
{
    public:
        Fwoosh();
        virtual ~Fwoosh();

        virtual Fwoosh *clone(void) const;
};
