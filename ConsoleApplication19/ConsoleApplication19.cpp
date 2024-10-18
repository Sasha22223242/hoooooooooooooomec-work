//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main() {
//    ifstream inputFile("InputFile.txt");
//    ofstream outputFile("OutputFile.txt");
//
//    if (!inputFile.is_open()) {
//        cout << "Couldn't open InputFile.txt!" << endl;
//        return 1;
//    }
//
//    if (!outputFile.is_open()) {
//        cout << "Couldn't open OutputFile.txt!" << endl;
//        return 1;
//    }
//
//    string line;
//    vector<string> lines; 
//
//    
//    while (getline(inputFile, line)) {
//        lines.push_back(line);
//    }
//
//   
//    if (lines.size() > 1) {
//        for (size_t i = 0; i < lines.size() - 1; i++) {
//            outputFile << lines[i] << endl;
//        }
//    }
//
//    cout << "Останній рядок видалено. Результат записано у файл OutputFile.txt" << endl;
//
//    inputFile.close();
//    outputFile.close();
//
//    return 0;
//}
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//    ifstream file1("TextFile1.txt");
//    ifstream file2("TextFile2.txt");
//
//    if (!file1.is_open()) {
//        cout << "Couldn't open TextFile1.txt!" << endl;
//        return 1;
//    }
//    if (!file2.is_open()) {
//        cout << "Couldn't open TextFile2.txt!" << endl;
//        return 1;
//    }
//
//    string line1, line2;
//    int lineNum = 1;
//
//    while (getline(file1, line1) && getline(file2, line2)) {
//        if (line1 != line2) {
//            cout << "A string that doesn't match (File 1, line " << lineNum << "): " << line1 << endl;
//            cout << "A string that doesn't match (File 2, line " << lineNum << "): " << line2 << endl;
//            return 0;
//        }
//        lineNum++;
//    }
//
//    if (getline(file1, line1) || getline(file2, line2)) {
//        cout << "Files have different number of lines." << endl;
//        return 0;
//    }
//
//    cout << "The files match." << endl;
//    return 0;
//}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("InputFile(2).txt");

    if (!inputFile.is_open()) {
        cout << "Couldn't open InputFile(2).txt!" << endl;
        return 1;
    }

    string line;
    int maxLength = 0; 

    while (getline(inputFile, line)) {
        int currentLength = line.length();
        if (currentLength > maxLength) {
            maxLength = currentLength;  
        }
    }

    cout << "Length of the longest line: " << maxLength << endl;

    inputFile.close();

    return 0;
}
