#pragma once

#include "ASpell.hpp"
#include <iostream>

class Fireball: public ASpell
{
    public:
        Fireball();
        virtual ~Fireball();

        virtual Fireball *clone(void) const;
};
