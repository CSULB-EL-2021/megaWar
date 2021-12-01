//  Name Emile LEPETIT
//  Class (CECS 282-01)
//  Project Name (Prog 6 – Mega War)
//  Due Date (12/08/2021)
//  I certify that this program is my own original work. I did not copy any part of this program from
//  any other source. I further certify that I typed each and every line of code in this program.


#ifndef PROG6_CARD_HPP
#define PROG6_CARD_HPP


class Card {
  public:
    enum RANK { ACE = 1, TWO = 2, THREE = 3, FOUR = 4, FIVE = 5, SIX = 6, SEVEN = 7, EIGHT = 8, NINE = 9, TEN = 10, JACK = 11, QUEEN = 12, KING = 13, LAST_R = 14 };
    enum SUITE { HEARTS = 1, DIAMONDS = 2, SPADES = 3, CLUBS = 4, LAST_S = 5 }; // Coeur, Diamand, Trèfle, Pique

    Card() = default;
    Card(RANK rank, SUITE suite);
    ~Card() = default;

    bool operator==(const Card& c) const;
    bool operator>(const Card& c) const;
    bool operator<(const Card& c) const;

    RANK getRank() const;
    SUITE getSuite() const;

  private:
    RANK _rank;
    SUITE _suite;
};


#endif //PROG6_CARD_HPP
