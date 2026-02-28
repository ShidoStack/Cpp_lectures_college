#include <iostream>
#include <cstdlib>   // for rand()
#include <ctime>     // for time()
using namespace std;

struct Question {
    string question;
    string options[4];
    int correctOption;
    int difficulty;   // 1-Easy, 2-Medium, 3-Hard
    int category;     // 1-C++, 2-GK
};

// ---------- FUNCTION DECLARATIONS ----------
void showInstructions();
void shuffleQuestions(Question q[], int n);
void displayQuestion(Question q, int qNo, int total);
bool checkAnswer(int userAns, Question q);
void showFinalResult(string name, int score, int correct, int wrong, int skipped, int total);

// ---------- MAIN FUNCTION ----------
int main() {
    srand(time(0));

    string userName;
    char playAgain;

    Question quiz[10] = {
        {"C++ is a ____ language?",
         {"Procedural", "Object-Oriented", "Both", "None"}, 3, 1, 1},

        {"Which symbol is used for comments?",
         {"//", "/* */", "#", "Both 1 & 2"}, 4, 1, 1},

        {"Capital of India?",
         {"Delhi", "Mumbai", "Chennai", "Kolkata"}, 1, 1, 2},

        {"Which loop runs at least once?",
         {"for", "while", "do-while", "none"}, 3, 2, 1},

        {"Size of int (usually)?",
         {"2 bytes", "4 bytes", "8 bytes", "Depends"}, 4, 2, 1},

        {"Who invented C++?",
         {"Dennis Ritchie", "Bjarne Stroustrup", "James Gosling", "Guido"}, 2, 2, 1},

        {"National animal of India?",
         {"Lion", "Tiger", "Elephant", "Horse"}, 2, 1, 2},

        {"Which operator is logical AND?",
         {"&", "&&", "|", "||"}, 2, 2, 1},

        {"Output of 5/2 in C++?",
         {"2", "2.5", "3", "Error"}, 1, 3, 1},

        {"Default return type of main?",
         {"int", "void", "float", "none"}, 1, 3, 1}
    };

    do {
        int score = 0, correct = 0, wrong = 0, skipped = 0;
        int difficultyChoice, categoryChoice;

        cout << "\nEnter your name: ";
        cin >> userName;

        showInstructions();

        cout << "\nSelect Category:\n1. C++\n2. General Knowledge\nChoice: ";
        cin >> categoryChoice;

        cout << "\nSelect Difficulty:\n1. Easy\n2. Medium\n3. Hard\nChoice: ";
        cin >> difficultyChoice;

        shuffleQuestions(quiz, 10);

        int asked = 0;
        for (int i = 0; i < 10 && asked < 5; i++) {
            if (quiz[i].difficulty == difficultyChoice &&
                quiz[i].category == categoryChoice) {

                displayQuestion(quiz[i], asked + 1, 5);

                int ans;
                cout << "Your answer (1-4, 0 to skip): ";
                cin >> ans;

                if (ans == 0) {
                    skipped++;
                } else if (checkAnswer(ans, quiz[i])) {
                    cout << "Correct!\n";
                    score += 1;
                    correct++;
                } else {
                    cout << "Wrong! Correct option is "
                         << quiz[i].correctOption << "\n";
                    score -= 0.25;   // Negative marking
                    wrong++;
                }
                asked++;
            }
        }

        showFinalResult(userName, score, correct, wrong, skipped, asked);

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThank you for playing!\n";
    return 0;
}

// ---------- FUNCTION DEFINITIONS ----------

void showInstructions() {
    cout << "\n----- QUIZ INSTRUCTIONS -----\n";
    cout << "1. Each correct answer gives +1\n";
    cout << "2. Wrong answer gives -0.25\n";
    cout << "3. Enter 0 to skip a question\n";
    cout << "4. Total 5 questions per quiz\n";
    cout << "-----------------------------\n";
}

void shuffleQuestions(Question q[], int n) {
    for (int i = 0; i < n; i++) {
        int r = rand() % n;
        Question temp = q[i];
        q[i] = q[r];
        q[r] = temp;
    }
}

void displayQuestion(Question q, int qNo, int total) {
    cout << "\nQuestion " << qNo << " of " << total << "\n";
    cout << q.question << "\n";
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ". " << q.options[i] << "\n";
    }
}

bool checkAnswer(int userAns, Question q) {
    return userAns == q.correctOption;
}

void showFinalResult(string name, int score, int correct, int wrong, int skipped, int total) {
    cout << "\n----- FINAL RESULT -----\n";
    cout << "Player: " << name << "\n";
    cout << "Score: " << score << "\n";
    cout << "Correct: " << correct << "\n";
    cout << "Wrong: " << wrong << "\n";
    cout << "Skipped: " << skipped << "\n";

    if (score >= 4)
        cout << "Result: Excellent!\n";
    else if (score >= 2)
        cout << "Result: Good\n";
    else
        cout << "Result: Needs Improvement\n";
}
