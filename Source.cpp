// Lab8-1 10/24/2024   Gavin Boecker
// Initialized Visual Studio Project

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


int countCharacter(string str) {
	
	int num = str.length();
	return num;

}


int main(){
	
	string word;
	
	cout << "Enter a word: ";
	cin >> word;

	cout << endl << countCharacter(word);

	
}