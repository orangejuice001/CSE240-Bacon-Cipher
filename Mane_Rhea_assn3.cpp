/*
Author: Rhea Mane
Date: 10/25/2022
Description: Converting a given text into bacon cipher and vice versa. Here are the functions created-
             englishToBaconCode: Uses if-else statements to convert individual characters into bacon cipher.
             baconToEnglishCode: Uses if-else statements again, to convert bacon cipher into uppercase characters.
             encrypt: Takes in a c-string and goes over it character-by character and uses englishToBaconCode to convert the c-string to bacon code.
             tokenize: Takes in a c-string in bacon code and tokenizes every 5 characters and uses baconToEnglishCode to convert the c-string back to english.
             fileio: Takes in an input file, output file and the type of operation to convert the text and calls encrypt and tokenize to be used accordingly.
Usage: C++
*/

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

// englishToBaconCode: Uses if-else statements to convert individual characters into bacon cipher.

const char *englishToBaconCode(char c)
{
    if ((c == 'A') | (c == 'a'))
    {
        return "aaaaa";
    }
    else if ((c == 'B') | (c == 'b'))
    {
        return "aaaab";
    }
    else if ((c == 'C') | (c == 'c'))
    {
        return "aaaba";
    }
    else if ((c == 'D') | (c == 'd'))
    {
        return "aaabb";
    }
    else if ((c == 'E') | (c == 'e'))
    {
        return "aabaa";
    }
    else if ((c == 'F') | (c == 'f'))
    {
        return "aabab";
    }
    else if ((c == 'G') | (c == 'g'))
    {
        return "aabba";
    }
    else if ((c == 'H') | (c == 'h'))
    {
        return "aabbb";
    }
    else if ((c == 'I') | (c == 'i'))
    {
        return "abaaa";
    }
    else if ((c == 'J') | (c == 'j'))
    {
        return "abaab";
    }
    else if ((c == 'K') | (c == 'k'))
    {
        return "ababa";
    }
    else if ((c == 'L') | (c == 'l'))
    {
        return "ababb";
    }
    else if ((c == 'M') | (c == 'm'))
    {
        return "abbaa";
    }
    else if ((c == 'N') | (c == 'n'))
    {
        return "abbab";
    }
    else if ((c == 'O') | (c == 'o'))
    {
        return "abbba";
    }
    else if ((c == 'P') | (c == 'p'))
    {
        return "abbbb";
    }
    else if ((c == 'Q') | (c == 'q'))
    {
        return "baaaa";
    }
    else if ((c == 'R') | (c == 'r'))
    {
        return "baaab";
    }
    else if ((c == 'S') | (c == 's'))
    {
        return "baaba";
    }
    else if ((c == 'T') | (c == 't'))
    {
        return "baabb";
    }
    else if ((c == 'U') | (c == 'u'))
    {
        return "babaa";
    }
    else if ((c == 'V') | (c == 'v'))
    {
        return "babab";
    }
    else if ((c == 'W') | (c == 'w'))
    {
        return "babba";
    }
    else if ((c == 'X') | (c == 'x'))
    {
        return "babbb";
    }
    else if ((c == 'Y') | (c == 'y'))
    {
        return "bbaaa";
    }
    else if ((c == 'Z') | (c == 'z'))
    {
        return "bbaab";
    }
    else if (c == ' ')
    {
        return "/";
    }
    else if (c == '\n')
    {
        return "/";
    }
    else
    {
        return "!!!!!";
    }
}

// encrypt: Takes in an input c-string and and output c-string and goes over the input c-string character-by character and uses englishToBaconCode to convert the c-string to bacon code.
void encrypt(const char *inputstr, char *outputstr)
{
    int N = strlen(inputstr);
    for (int k = 0; k < N; k++)
    {
        const char *result = englishToBaconCode(inputstr[k]); // calling englishToBaconCode to conver each character to bacon.
        strcat(outputstr, result);
        strcat(outputstr, "|");
    }
}

// baconToEnglishCode: Uses if-else statements again, to convert bacon cipher into uppercase characters.
char baconCodeToEnglish(const char *inputstr)
{
    if (strcmp(inputstr, "aaaaa") == 0)
    {
        return 'A';
    }
    else if (strcmp(inputstr, "aaaab") == 0)
    {
        return 'B';
    }
    else if (strcmp(inputstr, "aaaba") == 0)
    {
        return 'C';
    }
    else if (strcmp(inputstr, "aaabb") == 0)
    {
        return 'D';
    }
    else if (strcmp(inputstr, "aabaa") == 0)
    {
        return 'E';
    }
    else if (strcmp(inputstr, "aabab") == 0)
    {
        return 'F';
    }
    else if (strcmp(inputstr, "aabba") == 0)
    {
        return 'G';
    }
    else if (strcmp(inputstr, "aabbb") == 0)
    {
        return 'H';
    }
    else if (strcmp(inputstr, "abaaa") == 0)
    {
        return 'I';
    }
    else if (strcmp(inputstr, "abaab") == 0)
    {
        return 'J';
    }
    else if (strcmp(inputstr, "ababa") == 0)
    {
        return 'K';
    }
    else if (strcmp(inputstr, "ababb") == 0)
    {
        return 'L';
    }
    else if (strcmp(inputstr, "abbaa") == 0)
    {
        return 'M';
    }
    else if (strcmp(inputstr, "abbab") == 0)
    {
        return 'N';
    }
    else if (strcmp(inputstr, "abbba") == 0)
    {
        return 'O';
    }
    else if (strcmp(inputstr, "abbbb") == 0)
    {
        return 'P';
    }
    else if (strcmp(inputstr, "baaaa") == 0)
    {
        return 'Q';
    }
    else if (strcmp(inputstr, "baaab") == 0)
    {
        return 'R';
    }
    else if (strcmp(inputstr, "baaba") == 0)
    {
        return 'S';
    }
    else if (strcmp(inputstr, "baabb") == 0)
    {
        return 'T';
    }
    else if (strcmp(inputstr, "babaa") == 0)
    {
        return 'U';
    }
    else if (strcmp(inputstr, "babab") == 0)
    {
        return 'V';
    }
    else if (strcmp(inputstr, "babba") == 0)
    {
        return 'W';
    }
    else if (strcmp(inputstr, "babbb") == 0)
    {
        return 'X';
    }
    else if (strcmp(inputstr, "bbaaa") == 0)
    {
        return 'Y';
    }
    else if (strcmp(inputstr, "bbaab") == 0)
    {
        return 'Z';
    }
    else if (strcmp(inputstr, "!!!!!") == 0)
    {
        return '#';
    }
    else if (strcmp(inputstr, "/") == 0)
    {
        return ' ';
    }
    else
    {
        return '%';
    }
}

// tokenize: Takes in a c-string in bacon code and tokenizes every 5 characters and uses baconToEnglishCode to convert the c-string back to english.
void tokenize(char *inputstr, char *outputstr)
{
    // making an input character array
    char i[255 * 6];
    strcpy(i, inputstr);

    char del[] = "|"; // setting the delimiter

    char *token = strtok(i, del);

    while (token)
    {
        char out = baconCodeToEnglish(token);
        char ch[2] = {out, '\0'};
        strcat(outputstr, ch); // converting an array to a c-string
        token = strtok(NULL, del);
    }
}

// fileio: Takes in an input file, output file and the type of operation to convert the text and calls encrypt and tokenize to be used accordingly.
void fileio(char *infile, char *outfile, const char *operation)
{
    // creating the stream objects
    ifstream ifile;
    ofstream ofile;

    // opening the files
    ifile.open(infile);
    ofile.open(outfile);

    if (ifile.is_open())
    {
        while (!ifile.eof())
        {
            char textFromFile[1600];           // creating a character array to get a string from input file.
            ifile.getline(textFromFile, 1600); // getline the input line-by-line from input file.
            char outputstr[255 * 6];           // creating output character array
            for (int i = 0; i < 255 * 6 - 1; i++)
            {
                outputstr[i] = '\0'; // initializing output character array to a null character
            }

            // Checking the operation which needs to be run

            if (strcmp(operation, "-e") == 0) // For bacon to english.
            {

                tokenize(textFromFile, outputstr);
                ofile << outputstr << endl;
                cout << outputstr << endl;
            }
            else if (strcmp(operation, "-bc") == 0) // For english to bacon.
            {

                encrypt(textFromFile, outputstr);
                ofile << outputstr << endl;
                cout << outputstr << endl;
            }
            else
            {
                cout << "Error" << endl;
            }
        }
    }
    else
    {
        cout << "File isnt open" << endl;
    }

    // closing files
    ifile.close();
    ofile.close();

    cout << outfile << " file completed" << endl;
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        cout << "Error -- usage: <exe> <input file> <-bc|-e> <output file>" << endl;
    }
    else
    {
        if (strcmp(argv[2], "-e") == 0)
        {
            cout << "Translating " << argv[1] << " to English" << endl;
        }
        else
        {
            cout << "Translating " << argv[1] << " to Bacon Code" << endl;
        }
        fileio(argv[1], argv[3], argv[2]);
    }

    return 0;
}