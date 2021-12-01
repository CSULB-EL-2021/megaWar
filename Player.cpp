//  Name Emile LEPETIT
//  Class (CECS 282-01)
//  Project Name (Prog 6 – Mega War)
//  Due Date (12/08/2021)
//  I certify that this program is my own original work. I did not copy any part of this program from
//  any other source. I further certify that I typed each and every line of code in this program.

#include "Player.hpp"

Player::Player(int id): _id(id), _battle(0), _win(0)
{}

int Player::getId() const
{
  return _id;
}

int Player::getBattle() const
{
  return _battle;
}

int Player::getWin() const
{
  return _win;
}

double Player::getFierceness() const
{
  double tmp = 0;

  if (size() == 0) return tmp;
  for (const auto & c : _pile)
    tmp += c.getRank();

  return tmp / size();
}

std::ostream &operator<<(std::ostream &os, const Player &dt)
{
  return os <<
    "Player " << dt.getId() << " : "
    "Fierceness = " << std::setprecision(3) << dt.getFierceness() << std::setw(13) <<
    "Cards = " << dt.size() << std::setw(15) <<
    "Battles = " << dt.getBattle() << std::setw(12) <<
    "Wins = " << dt.getWin();
}

void Player::addBattle()
{
  _battle++;
}

void Player::addWin()
{
  _win++;
}
