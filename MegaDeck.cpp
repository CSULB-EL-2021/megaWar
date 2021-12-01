//  Name Emile LEPETIT
//  Class (CECS 282-01)
//  Project Name (Prog 6 – Mega War)
//  Due Date (12/08/2021)
//  I certify that this program is my own original work. I did not copy any part of this program from
//  any other source. I further certify that I typed each and every line of code in this program.

#include "MegaDeck.hpp"

MegaDeck::MegaDeck(int nbr)
{
  for (int i = 0; i != nbr; i++)
    for (Deck tmp; tmp.size() > 0; this->addCard(tmp.removeCard()));
}

void MegaDeck::shuffle()
{
  unsigned seed = std::chrono::system_clock::now()
      .time_since_epoch()
      .count();
  std::shuffle(_pile.begin(), _pile.end(), std::default_random_engine(seed));
}
