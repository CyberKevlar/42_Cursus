#include "ATarget.hpp"

ATarget::ATarget(const std::string &type)
{
    this->_type = type;
}

ATarget::ATarget(const ATarget &copy)
{
    this->_type = copy._type;
}

ATarget::~ATarget() {}

ATarget &ATarget::operator=(const ATarget &src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    return *this;
}

std::string const &ATarget::getType(void) const
{
    return this->_type;
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
    std::cout << this->_type << " has been " << spell.getEffects() << "!" << std::endl;
}
