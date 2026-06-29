#include "../include/Huffman.h"

#include <iostream>
#include <fstream>

using namespace std;

void Huffman::readFile(const string& filename)
{
    ifstream file(filename);

    if (!file)
    {
        cout << "Error opening file." << endl;
        return;
    }

    char ch;

    while (file.get(ch))
    {
        frequencyMap[ch]++;
    }

    file.close();

    cout << "\nCharacter Frequencies\n";
    cout << "----------------------\n";

    for (auto item : frequencyMap)
    {
        if (item.first == '\n')
            cout << "\\n";
        else if (item.first == ' ')
            cout << "' '";
        else
            cout << item.first;

        cout << " : " << item.second << endl;
    }
}