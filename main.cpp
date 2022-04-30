#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
 
using namespace std;
 
int main()
{
    string filename;   // Name of the file
    filename = "quotes.txt";

    string line;   // Creting string to read each line from code

    int i = 0;    // Creating variable to keep count of each line

    string quotes[100000];  // Making array to store each line

    ifstream mFile (filename);   //Opening file and reading quotes from it
    if(mFile.is_open()) 
    {
        while(!mFile.eof())
        {
            getline(mFile, line);
            quotes[i]=line;
            i++;
        }
        mFile.close();
    }
    else
        cout<<"Could not find file 'quotes.txt'";
 
    srand(time(0));             //choosing random quote
    int random = rand()%5;

    cout<<"Quote for today > "<<endl<<endl<<quotes[random]<<endl<<endl; //displaying quote

    return 0;
}