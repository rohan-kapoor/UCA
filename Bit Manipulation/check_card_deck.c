#include <stdio.h>

#define VALUE_MASK 0x0F
#define SUIT_MASK  0x30
#define SUIT_SHIFT 4

int getValue(int card) {
    return card & VALUE_MASK;
}

int getSuit(int card) {
    return (card & SUIT_MASK) >> SUIT_SHIFT;
}

int isHigherValue(int card1, int card2) {
    return getValue(card1) > getValue(card2);
}

int isSameSuit(int card1, int card2) {
    return getSuit(card1) == getSuit(card2);
}

int main() {
    int card1 = 0x3E;
    int card2 = 0x1D;

    if (isHigherValue(card1, card2)) {
        printf("Card 1 has a higher value.\n");
    } else if (isHigherValue(card2, card1)) {
        printf("Card 2 has a higher value.\n");
    } else {
        printf("Both cards have the same value.\n");
    }

    if (isSameSuit(card1, card2)) {
        printf("Both cards are of the same suit.\n");
    } else {
        printf("Cards are of different suits.\n");
    }

    return 0;
}
