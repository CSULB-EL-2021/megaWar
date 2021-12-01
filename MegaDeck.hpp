//  Name Emile LEPETIT
//  Class (CECS 282-01)
//  Project Name (Prog 6 – Mega War)
//  Due Date (12/08/2021)
//  I certify that this program is my own original work. I did not copy any part of this program from
//  any other source. I further certify that I typed each and every line of code in this program.

#ifndef PROG6_MEGADECK_HPP
#define PROG6_MEGADECK_HPP

#include "CardPile.hpp"
#include "Deck.hpp"

#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

class MegaDeck: public CardPile {
  public:
    MegaDeck(int);
    void shuffle();
};


#endif //PROG6_MEGADECK_HPP
