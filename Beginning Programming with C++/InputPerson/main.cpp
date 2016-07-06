// InputPerson - create objects of class Person and
//               display their data
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// Person - stores the name and social security number
class Person
{
  public:
    char szFirstName[128];
    char szLastName[128];
    int  nSocialSecurityNumber;
};

// getPerson - read a Person object from the keyboard
//             and return a copy to the caller
Person getPerson()
{
    Person person;

    cout << "\nEnter another Person\n"
         << "First name: ";
    cin  >> person.szFirstName;

    cout << "Last name: ";
    cin  >> person.szLastName;

    cout << "Social Security number: ";
    cin  >> person.nSocialSecurityNumber;

    return person;
}

// getPeople - read an array of Person objects;
//             return the number read
int getPeople(Person people[], int nMaxSize)
{
    // keep going until operator says he's done or
    // until we're out of space
    int index;
    for(index = 0; index < nMaxSize; index++)
    {
        char cAnswer;
        cout << "Enter another name? (Y or N):";
        cin  >> cAnswer;

        if (cAnswer != 'Y' && cAnswer != 'y')
        {
            break;
        }

        people[index] = getPerson();
    }
    return index;
}

// displayPerson - display a person on the default display
void displayPerson(Person person)
{
    cout << "First name: " << person.szFirstName << endl;
    cout << "Last name : " << person.szLastName  << endl;
    cout << "Social Security number : "
         << person.nSocialSecurityNumber << endl;
}

// displayPeople - display an array of Person objects
void displayPeople(Person people[], int nCount)
{
    for(int index = 0; index < nCount; index++)
    {
        displayPerson(people[index]);
    }
}

// sortPeople - sort an array of nCount Person objects
//              by Social Security Number
//              (this uses a binary sort)
void sortPeople(Person people[], int nCount)
{
    // keep going until the list is in order
    int nSwaps = 1;
    while(nSwaps != 0)
    {
        // we can tell if the list is in order by
        // the number of records we have to swap
        nSwaps = 0;

        // iterate through the list...
        for(int n = 0; n < (nCount - 1); n++)
        {
            // ...if the current entry is greater than
            // the following entry...
            if (people[n].nSocialSecurityNumber >
                people[n+1].nSocialSecurityNumber)
            {
                // ...then swap them...
                Person temp  = people[n+1];
                people[n+1] = people[n];
                people[n]   = temp;

                // ...and count it.
                nSwaps++;
            }
        }
    }
}

int main(int nNumberofArgs, char* pszArgs[])
{
    // allocate room for some names
    Person people[128];

    // prompt the user for input
    cout << "Read name/social security information\n";
    int nCount = getPeople(people, 128);

    // sort the list
    sortPeople(people, nCount);

    // now display the results
    cout << "\nHere is the list sorted by "
         << "social security number" << endl;
    displayPeople(people, nCount);

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
