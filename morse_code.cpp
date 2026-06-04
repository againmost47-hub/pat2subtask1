#include <iostream>
#include <string>
using namespace std;

string to_Morse(char c) {
    switch (c) {
    case 'A': return ".-";
    case 'B': return "-...";
    case 'C': return "-.-.";
    case 'D': return "-..";
    case 'E': return ".";
    case 'F': return "..-.";
    case 'G': return "--.";
    case 'H': return "....";
    case 'I': return "..";
    case 'J': return ".---";
    case 'K': return "-.-";
    case 'L': return ".-..";
    case 'M': return "--";
    case 'N': return "-.";
    case 'O': return "---";
    case 'P': return ".--.";
    case 'Q': return "--.-";
    case 'R': return ".-.";
    case 'S': return "...";
    case 'T': return "-";
    case 'U': return "..-";
    case 'V': return "...-";
    case 'W': return ".--";
    case 'X': return "-..-";
    case 'Y': return "-.--";
    case 'Z': return "--..";
    default: return "";
    }
}

int main() {
    string message;
    string full_Morse = "";

    cout << "Enter a message: ";
    getline(cin, message);

    cout << "Morse Code Output : " << endl;

    for (int i = 0; i < message.length(); i++) {
        char c = toupper(message[i]);

        if (c < 'A' or c > 'Z') continue;

        string morse = to_Morse(c);

        cout << c << ": " << morse << endl;

        full_Morse += morse + "   ";
    }

    cout << "Full Morse Code: " << full_Morse << endl;

    return 0;
}
