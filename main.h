//Dallas Johnson
//File IO: Sorting a file based on ascii order
//Alphabetizing any file basically.


#ifndef __AUTOGENERATED__
#define __AUTOGENERATED__
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char** argv);
void getByteCount(string inputBuffer, int& outputVariable);
void getIndexCount(int bufferSize, int& outputVariable, int lengthOfFile);
void doShellSort(fstream &inputStream, int byteCount, int numIndexes);
#endif
