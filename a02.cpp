/***********************************************************************
* Program:
*    Assignment 02, Access Record  
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

using namespace std;

struct Record
{
   string username;
   string file;
   long timeStamp;
};

void prompt(long &startTime, long &endTime);
void displayRecord(Record output, Record record[], int count);
void getFileName(string &fileName);
int readFile(string fileName, Record customer,
             Record record[], long startTime, long endTime);

/**********************************************************************
 * Main creates a struct and calls all the functions.
 ***********************************************************************/
int main()
{
   string fileName;
   long startTime;
   long endTime;
   int count;

   Record customer;
   Record record[500];
   getFileName(fileName);
   prompt(startTime, endTime);
   count = readFile(fileName, customer, record, startTime, endTime);
   displayRecord(customer, record, count);
   
   return 0;
}

/**********************************************************************
 * prompts the user for the file name.
 *********************************************************************/
void getFileName(string &fileName)
{
   cout << "Enter the access record file: ";
   getline(cin, fileName);
   cout << endl;
}

/**********************************************************************
 * Reads the file.
 *********************************************************************/
int readFile(string fileName, Record customer,
             Record record[], long startTime, long endTime)
{
   int count = 0;
   ifstream inFile;
   inFile.open(fileName.c_str());   
   if (inFile.fail())
      return -1;
   int i = 0;
   int j = 0;
   while (!inFile.eof())
   {
      inFile >> customer.file >> customer.username >> customer.timeStamp;
      if ((customer.timeStamp >= startTime) && (customer.timeStamp <= endTime))
      {
         record[j].file = customer.file;
         record[j].username = customer.username;
         record[j].timeStamp = customer.timeStamp;
         count++;
         j++;
      }
      
      i++;
   }
   inFile.close();
   return count;
}

/**********************************************************************
 * Prompts the user for start time and end time.
 *********************************************************************/
void prompt(long &startTime, long &endTime)
{
   cout << "Enter the start time: ";
   cin >> startTime;
   cout << "Enter the end time: ";
   cin >> endTime;
   cout << endl;
}

/**********************************************************************
 * Displays the record between the time frame.
 *********************************************************************/
void displayRecord(Record output, Record record[], int count)
{
   cout << "The following records match your criteria:\n";
   cout << endl;
   cout << "      Timestamp                File                User\n";
   cout << "--------------- ------------------- -------------------\n";
   int i = 0;
   while (i < count)
   {
      cout << setw(15) << record[i].timeStamp;
      cout << setw(20) << record[i].file;
      cout << setw(20) << record[i].username;
      cout << endl;
      i++;
   }
   cout << "End of records" << endl;
}
