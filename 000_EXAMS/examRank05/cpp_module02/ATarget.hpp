#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    protected:
        std::string _type;

        ATarget();
    public:
        ATarget(const std::string &type);
        ATarget(const ATarget &copy);
        virtual ~ATarget();
        ATarget &operator=(const ATarget &src);

        std::string const &getType() const;

        virtual ATarget *clone() const = 0;

        void getHitBySpell(const ASpell &spell) const;
};
