#pragma once
#include <iostream>
#include <map>
using namespace std;

class Dictionary
{
    map<string, string> data;

public:
    void add(string word, string translation)
    {
        data[word] = translation;
        cout << "You added the word " << endl;
    }

    void remove(string word)
    {
        auto found = data.find(word);

        if (found != data.end())
        {
            data.erase(found);
            cout << "Here is removed word " << endl;
        }
        else
        {
            cout << "Word not found." << endl;
        }
    }

    void edit(string word, string translation)
    {
        auto found = data.find(word);

        if (found != data.end())
        {
            data[word] = translation;
            cout << "Here is edited word " << endl;
        }
        else
        {
            cout << "Word not found." << endl;
        }
    }

    void find(string word)
    {
        auto found = data.find(word);

        if (found != data.end())
        {
            cout << "Here is your found word " << found->first << ": " << found->second << endl;
        }
        else
        {
            cout << "Word not found " << endl;
        }
    }

    void display()
    {
        bool any_words = false;
        for (auto found = data.begin(); found != data.end(); ++found)
        {
            cout << found->first << ": " << found->second << endl;
            any_words = true;
        }
        if (!any_words)
        {
            cout << " No words in the dictionary right now" << endl;
        }
    }
};
