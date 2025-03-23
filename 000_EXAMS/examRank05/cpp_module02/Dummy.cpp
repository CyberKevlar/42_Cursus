#include "Dummy.hpp"

Dummy::Dummy() : ATarget ("Target Practice Dummy") {}

Dummy::~Dummy() {}

Dummy *Dummy::clone (void) const {
    return new Dummy(*this);
}