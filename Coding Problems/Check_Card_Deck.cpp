#include <bits/stdc++.h>
using namespace std;

int getValue(string card){
	map<string,int> mp;
	mp["2"] = 2;
	mp["3"] = 3;
	mp["4"] = 4;
	mp["5"] = 5;
	mp["6"] = 6;
	mp["7"] = 7;
	mp["8"] = 8;
	mp["9"] = 9;
	mp["10"] = 10;
	mp["J"] = 11;
	mp["Q"] = 12;
	mp["K"] = 13;
	mp["A"] = 14;
	return mp[card]; 
}

void Higher(string card1, string type1, string card2, string type2){
	int val1 = getValue(card1);
	int val2 = getValue(card2);
	if(val1 > val2) cout << card1 << " " << type1 << " is greater";
	else if(val1 < val2) cout << card2 << " " << type2 << " is greater";
	else cout << "Both have the same value";
	cout << endl;
}

void SameSuit(string type1, string type2){
	if(type1 == type2) cout << "They belong to the same suit";
	else cout << "They don't belong to the same suit";
	cout << endl;
}

int main() {
	string card1, type1,card2, type2;
	cout << "Enter card 1 (3 Hearts): ";
	cin >> card1 >> type1;
	cout << "Enter card 2 (3 Hearts): ";
	cin >> card2 >> type2;
	Higher(card1, type1, card2, type2);
	SameSuit(type1, type2);
}