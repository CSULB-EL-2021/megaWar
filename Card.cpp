//  Name Emile LEPETIT
//  Class (CECS 282-01)
//  Project Name (Prog 6 – Mega War)
//  Due Date (12/08/2021)
//  I certify that this program is my own original work. I did not copy any part of this program from
//  any other source. I further certify that I typed each and every line of code in this program.

#include "Card.hpp"

Card::Card(Card::RANK rank, Card::SUITE suite): _rank(rank), _suite(suite)
{}

bool Card::operator==(const Card &c) const
{
  return _rank == c._rank;
}
bool Card::operator>(const Card &c) const
{
  return _rank > c._rank;
}
bool Card::operator<(const Card &c) const
{
  return _rank < c._rank;
}

Card::RANK Card::getRank() const
{
  return _rank;
}
Card::SUITE Card::getSuite() const
{
  return _suite;
}
