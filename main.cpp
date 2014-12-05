//Dallas Johnson
//File IO: Sorting a file based on ascii order
//Alphabetizing any file basically.

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <fstream>
#include "main.h"
using namespace std;

//Our main method will handle most of the basic up front user operation. Input file name, file formatting will be used to do everything.
int main(int argc, char** argv) {
    string f_name = "";
    int indexByteCount;
    int indexCount;
    int fileLength;
    string buffer = "";
    char * newBuffer[1024];
    //These three variables should just control the whole thing.

    cout << "Please input the name of the file you wish to sort through: ";
    getline(cin, f_name);
    //fstream fileStream (f_name.c_str(), ios::in | ios::out);
    ifstream fileStream (f_name.c_str());
    fileStream.seekg(0, ios::end);
    //get the file length
    fileLength = (int)fileStream.tellg();
        cout << "Our file length is " << fileLength << endl;
    //get the byte count
    fileStream.seekg(0);
    getline(fileStream, buffer);
        cout << buffer << endl;
    getByteCount(buffer, indexByteCount);
        cout << "Our byte count is " << indexByteCount << endl;
    getIndexCount(indexByteCount, indexCount, fileLength);
        cout << "Our index count is " << indexCount << endl;
    //doShellSort(fileStream, indexByteCount, indexCount);
    cout << buffer << endl;

fileStream.close();
//REMOVE THE SYSTEM PAUSE TO COMPILE ON LINUX!!!!
system ("pause");
return 0;
}

//This is going to run through the string here and remove leading zeroes, then giving an integer number back.
void getByteCount(string inputBuffer, int &outputVariable) {
    string newNumber;
    for (int i = 0; i < 4; i++) {
        if (inputBuffer[i] != '0') {
            newNumber += inputBuffer[i];
        }
    }
    //thank you stringstream for your faithful service.
    stringstream convert(newNumber);
    if (!(convert >> outputVariable)) {
        outputVariable = 0;
    }
}

//Does a simple division to get our amount of indexes that we will be working with for our file sort.
void getIndexCount(int bufferSize, int &outputVariable, int lengthOfFile) {
    outputVariable = (int)(lengthOfFile-4)/bufferSize;
}

//uses the shell sort method to alphabetize the file. Takes in the actual stream itself to do this and will output directly to it from this method as well.
void doShellSort(fstream &inputStream, int byteCount, int numIndexes) {
    inputStream.seekg(4);
int d = numIndexes; //We'll try setting the shell sort variable to the number of indexes. I'll have to actually remove that four byte set from the string before doing this.
	while (d > 1) {
		d = (d==2) ? 1 : d%2==1 ? (d+1)/2 : d%4==0 ? d/2+1 : d/2+2; //turnery operator for the shell sort to work.
            cout << d << endl;
			}
	}
