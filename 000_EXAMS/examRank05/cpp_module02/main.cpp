/* Este main es solo para pruebas! (g++ -g -Wall -Werror -Wextra main.cpp Warlock.cpp ASpell.cpp ATarget.cpp Fwoosh.cpp Dummy.cpp Fireball.cpp Polymorph.cpp BrickWall.cpp SpellBook.cpp TargetGenerator.cpp -o test)*/

#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "BrickWall.hpp"
#include "SpellBook.hpp"
#include "TargetGenerator.hpp"

int main(void)
{
    Warlock richard("Richard", "foo");
    richard.setTitle("Hello, I'm Richard the Warlock!");
    BrickWall model1;
  
    Polymorph* polymorph = new Polymorph();
    TargetGenerator tarGen;
  
    tarGen.learnTargetType(&model1);
    richard.learnSpell(polymorph);
  
    Fireball* fireball = new Fireball();
  
    richard.learnSpell(fireball);
  
    ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");
  
    richard.introduce();
    richard.launchSpell("Polymorph", *wall);
    richard.launchSpell("Fireball", *wall);

    return 0;
  }