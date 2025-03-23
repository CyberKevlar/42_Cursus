#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget *target)
{
    std::vector<ATarget *>::iterator it = this->_target.begin();
		while (it != this->_target.end())
		{
			if ((*it)->getType() == target->getType())
				return ;
			it++;
		}	
	this->_target.push_back(target->clone());
}

void TargetGenerator::forgetTargetType(std::string const &spell)
{
	std::vector<ATarget *>::iterator it = this->_target.begin();
	while (it != this->_target.end())
	{
		if ((*it)->getType() == spell)
		{
			this->_target.erase(it);
			return ;
		}
		it++;
	}
}

ATarget *TargetGenerator::createTarget(std::string const &spell)
{
    std::vector<ATarget *>::iterator it = this->_target.begin();
	while (it != this->_target.end())
	{
		if ((*it)->getType() == spell)
        	return (*it);
    }        
    return NULL;
}
