#pragma once

#include <iostream>
#include <vector>
#include "ATarget.hpp"

class TargetGenerator
{
    private:
        std::vector<ATarget *> _target;

        TargetGenerator(TargetGenerator const &copy);
		TargetGenerator &operator=(TargetGenerator const &src);
    public:
        TargetGenerator();
        virtual ~TargetGenerator();

        void learnTargetType(ATarget *target);
        void forgetTargetType(std::string const &target);
        ATarget *createTarget(std::string const &target);
};
