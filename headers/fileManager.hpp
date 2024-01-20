#pragma once

#include <sstream>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class FileManager
{
    public:
        static void readAndPrint(string path, ostream &output)
        {
            string extension = getExtension(path);

            ifstream fin(path, ios::in);

            if (extension == "txt") {
                string line;
                while (getline(fin, line)) {
                    cout << line << "\n";
                }
            }   
            else if (extension == "csv") {
                string line;

                while (getline(fin, line)) {
                    istringstream ss(line);

                    vector<string> row;

                    string field;
                    while (getline(ss, field, ',')) {
                        row.push_back(field);
                    }

                    for (string element : row) {
                        output<<"\t"<<element<<"\t";
                    }
                    output << "\n";
                }
            }
            fin.close();
        }

        static string getExtension(string path)
    {
        size_t dotPos = path.find_last_of('.');

        string extension = path.substr(dotPos + 1);

        return extension;
    }
};
