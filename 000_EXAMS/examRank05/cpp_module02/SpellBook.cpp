#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell *newSpell)
{
    std::vector<ASpell*>::iterator it = this->book.end();
	while (it != this->book.begin())
	{
		if ((*it)->getName() == newSpell->getName())
			return ;
	}
	this->book.push_back(newSpell->clone());
}

void SpellBook::forgetSpell(std::string const &spell)
{
    std::vector<ASpell*>::iterator it = this->book.end();
	while (it != this->book.begin())
	{
		if ((*it)->getName() == spell)
		{
			this->book.erase(it);
			return ;
		}
	}
}

ASpell *SpellBook::createSpell(std::string const &spell)
{
    std::vector<ASpell*>::iterator it = this->book.end();
	while (it != this->book.begin())
	{
		if ((*it)->getName() == spell)
			return (*it)->clone();
	}       
    return NULL;
}
