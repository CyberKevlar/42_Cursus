/* Este main es solo para pruebas! (g++ -g -Wall -Werror -Wextra main.cpp Warlock.cpp ASpell.cpp ATarget.cpp Fwoosh.cpp Dummy.cpp -o test)*/

#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"

int main(void)
{
    Warlock richard("Richard", "the Titled");

    Dummy bob;
    Fwoosh* fwoosh = new Fwoosh();
  
    richard.learnSpell(fwoosh);
  
    richard.introduce();
    richard.launchSpell("Fwoosh", bob);
  
    richard.forgetSpell("Fwoosh");
    richard.launchSpell("Fwoosh", bob);
    
    return 0;
}
