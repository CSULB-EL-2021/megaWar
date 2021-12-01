//  Name Emile LEPETIT
//  Class (CECS 282-01)
//  Project Name (Prog 6 – Mega War)
//  Due Date (12/08/2021)
//  I certify that this program is my own original work. I did not copy any part of this program from
//  any other source. I further certify that I typed each and every line of code in this program.

#include "CardPile.hpp"

void CardPile::addCard(Card c)
{
  _pile.push_back(c);
}

Card CardPile::removeCard()
{
  Card tmp = _pile.back();

  _pile.pop_back();
  return tmp;
}

int CardPile::size() const
{
  return (int)_pile.size();
}

void CardPile::display() const
{
  for (const auto & c : _pile)
    std::cout << "S: "<< c.getSuite() << " / R: " << c.getRank() << std::endl;
}
