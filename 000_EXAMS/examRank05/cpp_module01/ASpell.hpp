#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
        std::string _name;
        std::string _effects;

        ASpell();
    public:
        ASpell(const std::string &name, const std::string &effects);
        ASpell(const ASpell &copy);
        virtual ~ASpell();
        ASpell &operator=(const ASpell &src);

        std::string const &getName() const;
        std::string const &getEffects() const;
        
        virtual ASpell *clone() const = 0;

        void launch(const ATarget &target);
};
