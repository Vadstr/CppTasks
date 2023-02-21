#include <iostream>
#include <map>
#include <string>
#include<windows.h>

using namespace std;

typedef map<char, string> BasePairMap;

void mapInitialization();
void telegrafMessage(string, BasePairMap);
void soundEffect(string);

BasePairMap m;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    mapInitialization();

    cout << "Напишіть своє повідомлення (усі букви у нижньому регістрі): ";
    string message;
    getline(cin, message);

    telegrafMessage(message, m);
}

void telegrafMessage(string message, BasePairMap m)
{

    for (int i = 0; i < message.length(); i++)
    {
        char letter = message[i];
        string translatedLetter;
        translatedLetter = m[letter];
        
        cout << translatedLetter << endl;
        soundEffect(translatedLetter);
        Sleep(500);
    }
}

void soundEffect(string translatedLetter)
{
    for (int i = 0; i < translatedLetter.length(); i++)
    {
        if (translatedLetter[i] == '·') {
            Beep(1000, 100);
            Sleep(150);
        }
        else {
            Beep(1000, 300);
            Sleep(350);
        }
    }
}

void mapInitialization() 
{
    m['а'] = "·-";
    m['б'] = "-···";
    m['в'] = "·--";
    m['г'] = "····";
    m['ґ'] = "--·";
    m['д'] = "-··";
    m['е'] = "·";
    m['є'] = "··-··";
    m['ж'] = "···-";
    m['з'] = "--··";
    m['и'] = "-·--";
    m['і'] = "··";
    m['ї'] = "·---·";
    m['й'] = "·---";
    m['к'] = "-·-";
    m['л'] = "·-··";
    m['м'] = "--";
    m['н'] = "-·";
    m['о'] = "---";
    m['п'] = "·--·";
    m['р'] = "·-·";
    m['с'] = "···";
    m['т'] = "-";
    m['у'] = "··-";
    m['ф'] = "··-·";
    m['х'] = "----";
    m['ц'] = "-·-·";
    m['ч'] = "---·";
    m['ш'] = "--·-";
    m['щ'] = "--·--";
    m['ь'] = "-··-";
    m['ю'] = "··--";
    m['я'] = "·-·-";
}