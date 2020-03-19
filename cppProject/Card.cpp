#include "Card.h"
#include <iostream>
using namespace std;
Card::Card() { suit = 4; value = 1; }
Card::Card(int s, int v) { suit = s; value = v; }
Card::~Card() { cout << "The destructor has been invoked\n"; }
void Card::setSuit(int s) { suit = s; }
void Card::setValue(int v) { value = v; }
void Card::print() const
{
    if (!validCard()) {
        cout << "This card is not valid\n";
        return;
    }
    cout << "This is the: ";
    switch (value) {
    case 1:
        cout << "Ace ";
        break;
    case 11:
        cout << "Jack ";
        break;
    case 12:
        cout << "Queen ";
        break;
    case 13:
        cout << "King ";
        break;
    default:
        cout << value << " ";
    }

    switch (suit) {
    case 1:
        cout << "of clubs\n";
        break;
    case 2:
        cout << "of diamonds\n";
        break;
    case 3:
        cout << "of hearts\n";
        break;
    case 4:
        cout << "of spades\n";
        break;
    default:
        cout << "\ninvalid suit\n";
    }
}

int Card::getSuit() const { return suit; }
int Card::getValue() const { return value; }
bool Card::validCard() const
{
    return value >= 1 && value <= 13 && suit >= 1 && suit <= 4;
}
