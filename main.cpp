#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
 
using namespace std;


 
int main()
{

    // Aditional code for counting how many quotes there are to save memory (tbh I could not think of better solution)
    string filename1 = "quotes.txt";

    string line1;

    int i = 0;      // Creating variable to keep count of each line

    ifstream nFile (filename1);   // Counting how many lines there are;
    if(nFile.is_open()) 
    {
        while(!nFile.eof())
        {
            getline(nFile, line1);
            i++;
        }
        nFile.close();
    }
    else
    {
        cout<<"Could not find file 'quotes.txt'";
    }

    string quotes[i];  // Making array to store each line

    string filename = "quotes.txt";   // Name of the file;

    string line;   // Creting string to read each line from code

    i = 0;    // Reseting variable i

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
    {
        cout<<"Could not find file 'quotes.txt'";
    }
 
    srand(time(0));             //choosing random quote
    int random = rand()%i;

    cout<<"Quote for today > "<<endl<<endl<<quotes[random]<<endl<<endl; //displaying quote

    return 0;
}