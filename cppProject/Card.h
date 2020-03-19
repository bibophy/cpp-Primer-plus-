#pragma once
#ifndef CARD_H
#define CARD_H

class Card {
public:
    Card();
    Card(int s, int v);
    ~Card();
    void setSuit(int s);
    void setValue(int v);
    int getSuit() const;
    int getValue() const;
    void print() const;
private:
    int suit = 4;
    int value = 1;
    bool validCard() const;
};

#endif