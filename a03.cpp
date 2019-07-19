/***********************************************************************
* Program:
*    Assignment 03, Access Record  
*    Brother Clements, CS165
* Author:
*    Nimesh Subedi
* Summary:
*    The following program reads a file and displays the names of those
*    from a time frame entered by a user.
************************************************************************/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

using namespace std;

struct Record
{
   string username;
   string file;
   long timeStamp;
};

void prompt(long &startTime, long &endTime);
void displayRecord(Record record[], int count, long startTime, long endTime);
void getFileName(string &fileName);
int readFile(string fileName, Record record[]);
void parseLine(string data);

/**********************************************************************
 * Main creates a struct and calls all the functions.
 ***********************************************************************/
int main()
{
   string fileName;
   long startTime;
   long endTime;
   int count;

   Record record[500];
   getFileName(fileName);
   count = readFile(fileName, record);
   prompt(startTime, endTime);
   displayRecord(record, count, startTime, endTime);
   
   return 0;
}

/**********************************************************************
 * prompts the user for the file name.
 *********************************************************************/
void getFileName(string &fileName)
{
   cout << "Enter the access record file: ";
   getline(cin, fileName);
}

/**********************************************************************
 * Reads the file.
 *********************************************************************/
int readFile(string fileName, Record record[])
{
   int count = 0;
   string data = ""; 

   ifstream inFile;
   inFile.open(fileName.c_str());   
   if (inFile.fail())
      return -1;
 
   while (isalnum(inFile.peek()))
   {
      getline(inFile, data); 

      try 
      {
         parseLine(data); 

         // If no error thrown by above, run following
         stringstream ssin(data); 

         ssin >> record[count].file;
         ssin >> record[count].username; 
         ssin >> record[count].timeStamp; 
         
         count++;
      }
      catch (char const * e)
      {
         cout << e << data << endl; 
      }
   }
   inFile.close();
   return count;
}

/**********************************************************************
 * Parses every line and throws exceptions.
 *********************************************************************/
void parseLine(string data)
{
   Record temp;

   stringstream ssin(data); 
   
   ssin >> temp.file;
   ssin >> temp.username; 
   ssin >> temp.timeStamp;  
   
   
   if (ssin.fail())
   {
      throw "Error parsing line: "; 
   }
   else if (temp.timeStamp <= 1000000000 
            || temp.timeStamp >= 10000000000)
   {
      throw "Error parsing line: "; 
   }
   else
      return; 
}

/**********************************************************************
 * Prompts the user for start time and end time.
 *********************************************************************/
void prompt(long &startTime, long &endTime)
{
   cout << endl;
   cout << "Enter the start time: ";
   cin >> startTime;
   cout << "Enter the end time: ";
   cin >> endTime;
   cout << endl;
}

/**********************************************************************
 * Displays the record between the time frame.
 *********************************************************************/
void displayRecord(Record record[], int count, long startTime, long endTime)
{
   cout << "The following records match your criteria:\n";
   cout << endl;
   cout << "      Timestamp                File                User\n";
   cout << "--------------- ------------------- -------------------\n";
   int i = 0;
   while (i < count)
   {
      if (record[i].timeStamp > startTime && record[i].timeStamp < endTime)
      {
         cout << setw(15) << record[i].timeStamp;
         cout << setw(20) << record[i].file;
         cout << setw(20) << record[i].username;
         cout << endl;
      }
      i++;
   }
   cout << "End of records" << endl;
}
