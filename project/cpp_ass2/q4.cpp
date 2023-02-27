#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string input_file;  // To hold input file name
    string output_File; // To hold output file name
    char ch;            // To hold character
    fstream inputFile;
    fstream outputFile;

    bool new_sentence = true;

    cout << "Enter input file name: " << endl;
    cin >> input_file;

    cout << "Enter output file name: " << endl;
    cin >> output_File;

    outputFile.open(output_File, ios::out);
    inputFile.open(input_file, ios::in);

    if (inputFile) {
        while (inputFile.get(ch)) {
            if (isprint(ch)) {
                if (new_sentence) {
                    outputFile.put(toupper(ch));
                }
                else {
                    outputFile.put(tolower(ch));
                }
                new_sentence = false;
            }
            else {
                if (ch == '.') {
                   new_sentence = true;
                   outputFile.put(ch);
                }
            }
        }
        inputFile.close();
        outputFile.close();
   }
   else {
       cout << "Cannot open file(s)." << endl;
   }

   cout << "\nFile conversion complete." << endl;

   return 0;
}
