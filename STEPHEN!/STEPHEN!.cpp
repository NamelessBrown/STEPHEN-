// STEPHEN!.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <limits>

const std::string Lyrics = 
    "<st>, <st>\n" 
    "Why won't you call me?\n" 
    "<st>\n"
    "Why won't you call me?\n"
    "I saw you in your tight - ass rocker pants\n"
    "You saw me too\n"
    "I laughed 'cause I was completely trashed\n"
    "And I watched your ugly <sample>\n"
    "Sneer across the room\n"
    "As if I really care that <he/she> here with you\n"
    "All I know is\n"
    "Your my object of affection\n"
    "My drug of choice my sick obsession\n"
    "<st>, why won't you call me?\n"
    "I'm sitting here waiting\n"
    "Why won't you call me?\n"
    "<st>, I'm feeling pathetic\n"
    "I can't take rejection <st>\n"
    "Why won't you call me?\n"
    "I've got guys waiting in the line for me too play\n"
    "My evil <text> games with all their minds\n"
    "Just watch me I've got it down\n"
    "To a simple art just bat my eyes\n"
    "Like this\n"
    "And there's a broken heart\n"
    "But somehow you turn the tables, what the hell?\n"
    "I can charm the pants…\n";

struct Stephen
{
    std::string mNewName = "Joe";
    std::string mNewLyrics = Lyrics;
    std::string mNewPronoun;
public:
    void Convert(std::string newWord = "Stephen", std::string newPronoun = "girlfriend")
    {
        std::string placeHolder = "<st>";
        std::string placeHolder2 = "<sample>";
        std::string placeHolder3 = "<he/she>";
        std::string placeHolder4 = "<text>";

        int index = 0;

        while (index > -1)
        {
            index = mNewLyrics.find(placeHolder, index);

            if (index > -1)
            {
                mNewLyrics.replace(index, placeHolder.length(), newWord);
            }
        }

        index = 0;
        while (index > -1)
        {
            index = mNewLyrics.find(placeHolder2, index);

            if (index > -1)
            {
                if (newPronoun == "girlfriend" || newPronoun == "Girlfriend")
                {

                    mNewLyrics.replace(index, placeHolder3.length(), "boyfriend");
                }
                else
                {
                    mNewLyrics.replace(index, placeHolder3.length(), "girlfriend");
                }
            }
        }

        index = 0;
        while (index > -1)
        {
            index = mNewLyrics.find(placeHolder3, index);

            if (index > -1)
            {
                if (newPronoun == "girlfriend" || newPronoun == "Girlfriend")
                {

                    mNewLyrics.replace(index, placeHolder3.length(), "she");
                }
                else
                {
                    mNewLyrics.replace(index, placeHolder3.length(), "he");
                }
            }
        }

        index = 0;
        while (index > -1)
        {
            index = mNewLyrics.find(placeHolder4, index);

            if (index > -1)
            {
                if (newPronoun == "girlfriend" || newPronoun == "Girlfriend")
                {
                   mNewLyrics.replace(index, placeHolder4.length(), "boy-ly");
                }
                else
                {
                    mNewLyrics.replace(index, placeHolder4.length(), "girly");
                }
            }
            
        }

    }


};
int main()
{
    std::cout << "Welcome to the Stephen converter!\n\n";
    Stephen stephen;

    std::cout << "Enter (Boyfriend OR Girlfriend) If your love one is a girl chose girlfriend. If your love on is a boy chose boyfriend!\n";

    if (stephen.mNewPronoun != "Boyfriend" || stephen.mNewPronoun != "boyfriend" || stephen.mNewPronoun != "Girlfriend" || stephen.mNewPronoun != "girlfriend")
    {
        std::cin >> stephen.mNewPronoun;
        //std::cout << "Failed! not vaild\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    }

    std::cout << "Enter a name! \n";
    //std::cin >> stephen.mNewName;
    std::getline(std::cin, stephen.mNewName);
    system("cls");

    if (std::cin.fail())
    {
        std::cout << "Failed! not vaild\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cin >> stephen.mNewName;
    }

    stephen.Convert(stephen.mNewName, stephen.mNewPronoun);
    std::cout << stephen.mNewLyrics << '\n';

    
    std::cout << "Press [Enter] to continue...\n";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.ignore();

}

