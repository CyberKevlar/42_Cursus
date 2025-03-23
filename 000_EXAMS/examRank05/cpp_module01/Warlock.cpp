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

const std::string &Warlock::getName() const
{
    return this->_name;
}

const std::string &Warlock::getTitle() const
{
    return this->_title;
}

void Warlock::setTitle(const std::string &title)
{
    this->_title = title;
}

void Warlock::introduce() const
{
    std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
    std::vector<ASpell *>::iterator it = this->_spells.begin();
    while (it != this->_spells.end())
    {
        if ((*it)->getName() == spell->getName())
            return ;
        it++;
    }
    this->_spells.push_back(spell->clone());
}

void Warlock::forgetSpell(std::string spell)
{
    std::vector<ASpell *>::iterator it = this->_spells.begin();
    while (it != this->_spells.end())
    {
        if ((*it)->getName() == spell)
        {
            this->_spells.erase(it);
            return ;
        }
        it++;
    }
}

void Warlock::launchSpell(std::string spell, ATarget &target)
{
    std::vector<ASpell *>::iterator it = this->_spells.begin();
    while (it != this->_spells.end())
    {
        if ((*it)->getName() == spell)
        {
            (*it)->launch(target);
            return ;
        }
        it++;
    }
    return ;
}
