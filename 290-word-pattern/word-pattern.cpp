/*
    Implementacja struktóry imitującą mape
*/

class Solution
{
    public:

        struct Element
        {
            char key;
            string word;
        };

    bool wordPattern(string pattern, string s)
    {
        vector<Element> elements;

        stringstream ss(s);
        string word;
        short index = 0;

        while (ss >> word)
        {
           	//Sprawdzenie czy dany element już zawiera się w vectorze
           	//Jesli klucz nie pasuje do słowa zwroc false
           	//A jak pasuje to nie dodawaj 

            for (int i = 0; i < elements.size(); ++i)
            {
                if (elements[i].key == pattern[index])
                {
                    if (elements[i].word != word)
                    {
                        return false;
                    }
                }
            }

            for (int i = 0; i < elements.size(); ++i)
            {
                if (elements[i].word == word && elements[i].key != pattern[index]) return false;
            }

            elements.push_back({ pattern[index],
                word });

            index++;
        }

        for (int i = 0; i < elements.size(); ++i)
        {
            std::cout << elements[i].key << " " << elements[i].word << "\n";
        }
        std::cout << index << " " << pattern.size() << "\n";
        if (index != pattern.size())
        {
            return false;
        }
        return true;
    }
};