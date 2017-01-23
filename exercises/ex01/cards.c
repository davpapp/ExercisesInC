/*
Card counting program. 
By David Papp
*/
#include <stdio.h>
#include <stdlib.h>

void input(char card_name[3]);
int getCardValue(char card_name[3]);
void controlLoop();

int main() {
	controlLoop();
	return 0;
}

void controlLoop() {
	/* Loop to count cards until X is pressed. */
	char card_name[3];
	int count = 0;
	do {
		input(card_name);
		int val = getCardValue(card_name);
		if (val == -1) continue;
		if ((val > 2) && (val < 7)) {
			count++;
		}
		else if (val == 10) {
			count--;
		}
		printf("Current count: %i\n", count);
	}
	while (card_name[0] != 'X');
}

void input(char card_name[3]) {
	/* Prompts user for card input. */
	puts("Enter the card_name: ");
	scanf("%2s", card_name);
}

int getCardValue(char card_name[3]) {
	/* Returns value of a card. */
	int val = 0;
	switch(card_name[0]) {
		case 'K':
		case 'Q':
		case 'J':
			val = 10;
			break;
		case 'A':
			val = 11;
			break;
		case 'X':
			return -1;
		default:
			val = atoi(card_name);
	}
	return val;
}