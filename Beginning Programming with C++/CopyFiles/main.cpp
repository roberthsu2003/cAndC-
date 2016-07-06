//
//  CopyFiles - make backup copies of whatever files
//              are passed to the program by creating
//              a file with the same name plus the name
//              ".backup" appended.
//
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

void copyFile(const char* pszSrcFileName)
{
    // create a copy of the specified filename with
    // ".backup" added to the end
    int nTargetNameLength = strlen(pszSrcFileName) + 10;
    char *pszTargetFileName = new char[nTargetNameLength];
    strcpy(pszTargetFileName, pszSrcFileName);
    strcat(pszTargetFileName, ".backup");

    // now open the source file for input and
    // the target file for output
    ifstream input(pszSrcFileName,
                   ios_base::in | ios_base::binary);
    if (input.good())
    {
        ofstream output(pszTargetFileName,
      ios_base::out | ios_base::binary | ios_base::trunc);
        if (output.good())
        {

            while (!input.eof() && input.good())
            {
                char buffer[4096];
                input.read(buffer, 4096);
                output.write(buffer, input.gcount());
            }
        }
    }

    // restore memory to the heap
    delete pszTargetFileName;
}

int main(int nNumberofArgs, char* pszArgs[])
{
    // pass every file name provided to main() to
    // the copyFile() function, one name at a time
    for (int i = 1; i < nNumberofArgs; i++)
    {
        cout << "Copying " << pszArgs[i] << endl;
        copyFile(pszArgs[i]);
    }

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

