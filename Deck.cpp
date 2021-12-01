//  Name Emile LEPETIT
//  Class (CECS 282-01)
//  Project Name (Prog 6 – Mega War)
//  Due Date (12/08/2021)
//  I certify that this program is my own original work. I did not copy any part of this program from
//  any other source. I further certify that I typed each and every line of code in this program.

#include "Deck.hpp"
#include <iostream>

Deck::Deck()
{
  for (int suite = Card::SUITE::HEARTS; suite != Card::SUITE::LAST_S; suite++)
    for (int rank = Card::RANK::ACE; rank != Card::RANK::LAST_R; rank++)
      this->addCard(*(new Card(static_cast<Card::RANK>(rank), static_cast<Card::SUITE>(suite))));
}
