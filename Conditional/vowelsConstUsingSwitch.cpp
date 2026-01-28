#include <iostream>
using namespace std;
int main ()
{
    cout << "OUTPUT: " << endl << endl;

    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    cout << endl;

    switch (letter)
    {
        case 'a' || 'A':
            cout << "Letter is Vowel";
            break;

        case 'e' || 'E':
            cout << "Letter is Vowel";
            break;

        case 'i' || 'I':
            cout << "Letter is Vowel";
            break;

        case 'o' || 'O':
            cout << "Letter is Vowel";
            break;

        case 'u' || 'U':
            cout << "Letter is Vowel";
            break;

        default:
            cout << "Letter is Consonant"; 
    }
    cout << endl;
    return 0;
}