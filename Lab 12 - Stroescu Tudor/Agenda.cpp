#include "Agenda.h"
#include "Prieten.h"
#include <list>
#include <exception>
using namespace std;
Contact* Agenda::FindContact(string name)
{
        for (auto c : contacts)
            if (c->getName() == name)
                return c;
    
        return nullptr;
    
}

list<Contact*> Agenda::FriendList()
{
    list<Contact*>friend_list;
    for (auto c : contacts)
        if (c->type == "friend")
            friend_list.push_back(c);
    return friend_list;
}

void Agenda::DeleteContact(string name)
{
    try {
        for (auto c : contacts)
            if (c->getName() == name)
                contacts.remove(c);
    }
    catch (exception& e)
    {
        printf("Could not remove contact");
    }
}

void Agenda::AddContact(Contact* c)
{   
    contacts.push_back(c);
}
