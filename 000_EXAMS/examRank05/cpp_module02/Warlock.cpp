#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
{
    this->_name = name;
    this->_title = title;
    std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
    std::cout << this->_name << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName(void) const
{
    return this->_name;
}

const std::string &Warlock::getTitle(void) const
{
    return this->_title;
}

void Warlock::setTitle(const std::string &title)
{
    this->_title = title;
}

void Warlock::introduce(void) const
{
    std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
    this->_spellbook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spell)
{
    this->_spellbook.forgetSpell(spell);
}

void Warlock::launchSpell(std::string spell, ATarget &target)
{
    ASpell *tmp = _spellbook.createSpell(spell);
    if (tmp)
        tmp->launch(target);
}
