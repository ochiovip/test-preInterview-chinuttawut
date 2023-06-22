#include <iostream>
#include <string>
using namespace std;

int calculateScore(const string& word) {
    int score = 0;
    for (char c : word) {
        score += c - 'a' + 1;
    }
    return score;
}

string findHighestScoringWord(const string& sentence) {
    string highestWord;
    int highestScore = 0;

    string word;
    for (char c : sentence) {
        if (c != ' ') {
            word += c;
        } else {
            int score = calculateScore(word);
            if (score >= highestScore) {
                highestScore = score;
                highestWord = word;
            }
            word = "";
        }
    }

    // Check the last word
    int score = calculateScore(word);
    if (score >= highestScore) {
        highestScore = score;
        highestWord = word;
    }

    return highestWord;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string highestScoringWord = findHighestScoringWord(sentence);
    cout << "'" << sentence << "' => " << highestScoringWord << endl;

    return 0;
}
