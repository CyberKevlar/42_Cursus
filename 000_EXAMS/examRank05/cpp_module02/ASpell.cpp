#include "ASpell.hpp"

ASpell::ASpell(const std::string &name, const std::string &effects)
{
    this->_name = name;
    this->_effects = effects;
}

ASpell::ASpell(const ASpell &copy)
{
    this->_name = copy._name;
    this->_effects = copy._effects;
}

ASpell::~ASpell() {}

ASpell &ASpell::operator=(const ASpell &src)
{
    if (this != &src) {
        this->_name = src._name;
        this->_effects = src._effects;
    }
    return *this;
}

std::string const &ASpell::getName(void) const
{
    return this->_name;
}

std::string const &ASpell::getEffects(void) const
{
    return this->_effects;
}

void ASpell::launch(const ATarget &target)
{
    target.getHitBySpell(*this);
}
