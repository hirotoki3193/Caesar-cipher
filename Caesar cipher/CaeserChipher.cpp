#include <iostream>
#include <string>
using namespace std;
#define rep(i,j,k) for(int i=(j);i<(k);i++)

int set_number() {
	int number = -1;
	
	while (true) {
		cout << "Please set number(1-25) : ";
		cin >> number;
		if (number > 0 && number < 26)
			break;
		cin.clear();
		cin.ignore(256, '\n');
		system("cls");
	}
	return number;
}
string set_caeser_chipher(int key,string &clear_text) {
	string text;
	cout << "Enter the characters to encrypt : ";
	cin >> text;
	clear_text += text;
	int len = text.size();
	rep(i, 0, len) {
		if (text[i] >= 'a' && text[i] <= 'z') {
			text[i] = (text[i] - 'a' + key) % 26 + 'a';
		}
		else if (text[i] >= 'A' && text[i] <= 'Z') {
			text[i] = (text[i] - 'A' + key) % 26 + 'A';
		}
	}
	return text;	
}
void print_key_and_text(int key, string clear_text, string chipher_text) {
	cout << "-----------------------" << endl;
	cout << "Key : " << key << endl;
	cout << "Cleartext :" << clear_text << endl;
	cout << "Chiphertext :" << chipher_text << endl;
	cout << "-----------------------" << endl;
}



int main() {
	int key = set_number();
	string clear_text="";
	string chipher_text = set_caeser_chipher(key, clear_text);
	print_key_and_text(key, clear_text, chipher_text);


	system("pause>0");
}