#include <iostream>
using namespace std;

// STRUCTURE
struct Question {
    string ques;
    char correct;
};

// FUNCTION
int playQuiz(Question q[], int n) {
    int score = 0;
    char answer;

    cout << "\nWelcome to Quiz Game!\n";
    cout << "Each correct answer gives 1 mark.\n\n";

    // LOOP through all questions
    for (int i = 0; i < n; i++) {
        cout << "Q" << i + 1 << ". " << q[i].ques << endl;
        cout << "a) Option A  b) Option B  c) Option C  d) Option D\n";
        cout << "Enter your answer: ";
        cin >> answer;

        if (answer == q[i].correct || answer == toupper(q[i].correct))
            score++;
    }

    return score;
}

int main() {
    // ARRAY of STRUCTURE
    Question q[5] = {
        {"Capital of India?", 'a'},
        {"Prime Minister of India?", 'a'},
        {"National Bird of India?", 'a'},
        {"National Animal of India?", 'a'},
        {"Capital of UP?", 'a'}
    };

    // Play quiz once
    int result = playQuiz(q, 5);

    cout << "\nYour Total Score: " << result << "/5\n";

    if (result >= 3)
        cout << "You are PASS\n";
    else
        cout << "You are FAIL\n";

    // Ask if user wants to play again
    char playAgain;
    cout << "Do you want to play again? (y/n): ";
    cin >> playAgain;

    if (playAgain == 'y' || playAgain == 'Y') {
        cout << "\nRestarting Quiz...\n";
        result = playQuiz(q, 5);

        cout << "\nYour Total Score: " << result << "/5\n";
        if (result >= 3)
            cout << "You are PASS\n";
        else
            cout << "You are FAIL\n";
    }

    cout << "\nThank you for playing!\n";
    return 0;
}