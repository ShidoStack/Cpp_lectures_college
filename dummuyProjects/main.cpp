#include <iostream>
using namespace std;

struct Question
{
    string question;
    string options[4];
    char correctOption;
};

void displayQuestion(Question q)
{
    cout << "\n" << q.question << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << char('A' + i) << ". " << q.options[i] << endl;
    }
}

bool checkAnswer(char userAnswer, char correctAnswer)
{
    return (toupper(userAnswer) == correctAnswer);
}

void startQuiz(Question quiz[], int size)
{
    int score = 0;
    char answer;

    for (int i = 0; i < size; i++)
    {
        displayQuestion(quiz[i]);
        cout << "Enter your answer (A/B/C/D): ";
        cin >> answer;

        if (checkAnswer(answer, quiz[i].correctOption))
        {
            cout << "Correct!\n";
            score++;
        }
        else
        {
            cout << "Wrong! Correct answer is " << quiz[i].correctOption << endl;
        }
    }

    cout << "\n   Quiz Completed!" << endl;
    cout << "  Your Score: " << score << "/" << size << endl;
}

int main()
{
    Question quiz[5] = {
        {"1. What is the capital of India?",
         {"Mumbai", "Delhi", "Kolkata", "Chennai"},
         'B'},
        {"2. Which language is used for system programming?",
         {"Python", "Java", "C++", "HTML"},
         'C'},
        {"3. Who invented C++?",
         {"Dennis Ritchie", "Bjarne Stroustrup", "James Gosling", "Guido van Rossum"},
         'B'},
        {"4. What does CPU stand for?",
         {"Central Process Unit", "Central Processing Unit", "Computer Processing Unit", "Control Processing Unit"},
         'B'},
        {"5. Which loop runs at least once?",
         {"for", "while", "do-while", "if"},
         'C'}};

    cout<<" -----------------------Output____________________________________  "<<endl<<endl;   // this line is not a part of group project just additional from my side for separating the output screen....
    cout << " Welcome to the Quiz Game " << endl;
    startQuiz(quiz, 5);

    return 0;
}