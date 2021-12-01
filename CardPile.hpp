//  Name Emile LEPETIT
//  Class (CECS 282-01)
//  Project Name (Prog 6 – Mega War)
//  Due Date (12/08/2021)
//  I certify that this program is my own original work. I did not copy any part of this program from
//  any other source. I further certify that I typed each and every line of code in this program.

#ifndef PROG6_CARDPILE_HPP
#define PROG6_CARDPILE_HPP

#include "Card.hpp"

#include <iostream>
#include <vector>

class CardPile {
  public:
    CardPile() = default;
    ~CardPile() = default;

    void addCard(Card);
    Card removeCard();

    int size() const;

    void display() const;

  protected:
    std::vector<Card> _pile;
};


#endif //PROG6_CARDPILE_HPP
