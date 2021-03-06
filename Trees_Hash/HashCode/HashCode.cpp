/**
 * HashCode.cpp - This program will calculate a hash code for a given
 *                string and insert the string into the hash table at
 *                the provide position.
 *
* TODO: Insert your name and course number here.
 */

#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

int calcHashCode(string key);
void insertHash(int hashCode, string item);
void displayTable();

const int TABLE_SIZE = 0; // TODO: change 0 to be the size of the
                          // hash table here this should be set to
                          // value indicated in the handout.
string hashTable[TABLE_SIZE];

int main(int argc, char **argv)
{
   string data[] = {
       "Bones", "Scotty", "Chekov", "Uhura", "Sulu", "Nurse Chapel",
	   "Dax", "O'Brien", "Quark", "Dr. Bashier", "Kira", "B'Elanna",
       "Picard", "Riker", "Data", "La Forge", "Worf", "Dr. Crusher",
       "Reed", "Travis", "Hoshi", "Dr. Phlox", "Kirk", "Spock",
       "Dr. Pulaski", "Wesley", "Troi", "Tasha", "Sisko", "Odo"
   };

   const int numberOfDataItems = 30;
   int hash = 0;

   for (int i=0; i < numberOfDataItems; i++)
   {
       hash = calcHashCode(data[i]);
       cout << data[i] << " hashCode=" << hash << endl;
       insertHash(hash, data[i]);
   }

   displayTable();

   cout << "\n** Press any key to continue **\n";
   getchar();

   return 0;
}

int calcHashCode(string key)
{
   // TODO: Use a loop to add together the ASCII value of
   // each character in the given string s.
   //
   // HINT: You can get the length of the string by calling the
   // function key.size() or key.length().

   return 0;
}

void insertHash(int hashCode, string item)
{
   // TODO: Implement the details of the this function
   // This function should insert item in the hashTable
   // at the hashCode position. Print an error message
   // if the position is occupied and do not insert
   // the string into the hash table.
   //
   // HINT: the hashTable variable is an array. The
   // position in the hashTable is occupied if the size()
   // or length() of the position is greater than 0.

   return;
}

void displayTable()
{
   cout << "\nHash Table:" << endl;
   cout << "Index\tKey" << endl;

   for (int i=0; i < TABLE_SIZE; i++)
   {
      if (hashTable[i].length() > 0)
      {
         cout << i << "\t" << hashTable[i] << endl;
      }
   }

   return;
}
