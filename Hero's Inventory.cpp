// Chapter 3 Hero's Inventory Assignment

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

using namespace std;

int main()
{
    const int MAX_ITEMS = 10;
    string inventory[MAX_ITEMS];
    string weapon1;
    string weapon2;
    string weapon3;

    int numItems = 0;
    inventory[numItems++] = "Master Sword";
    inventory[numItems++] = "Gerudo Shield";
    inventory[numItems++] = "Edge of Duality";

    cout << "Your name is Link. You're about to embark on a journey through Hyrule.\n";
    cout << "\nYour Items: \n";
    for (int i = 0; i < numItems; ++i)
    {
        cout << inventory[i] << endl;
    }

    cout << "You run into a hoard of Bokoblins. You destroy them all, but you broke your Edge of Duality. You pick up another weapon. What will you call this? Use only one word.\n";
    cin >> weapon1;

    inventory[2] = weapon1;
    cout << "\nYour Items: \n";
    for (int i = 0; i < numItems; ++i)
    {
        cout << inventory[i] << endl;
    }

    cout << "You are frolicking through Hyrule field, when all of a sudden some bitch ass Lizalfos run up on you. You have no choice but to kill them all.\n";
    cout << "In doing so, you come across a strange new weapon. What will you call this one?\n";
    cin >> weapon2;

    inventory[numItems++] = weapon2;
    cout << "\nYour Items: \n";
    for (int i = 0; i < numItems; ++i)
    {
        cout << inventory[i] << endl;
    }

    cout << "You were just minding your own business when a Hinox came out of nowhere and started farting. The stench was so horrible people were dropping dead like flies.\n";
    cout << "You realized you had to do something. The unadulterated rage was building up inside you and it was time to KILL.\n";
    cout << "You slaughtered the Hinox and took his weapon. What shall this weapon be called?\n";
    cin >> weapon3;

    inventory[numItems++] = weapon3;
    cout << "\nYour Items: \n";
    for (int i = 0; i < numItems; ++i)
    {
        cout << inventory[i] << endl;
    }

    cout << "Finally, after pilfering and terrorizing Hyrule, you decide to roll up on Ganon. You gotta get your girl back.\n";
    cout << "Ganon decides that he'll let the princess go on one condition: you have to give him the Master Sword.\n";
    cout << "Perhaps against your better judgement, you decide to give him the Master Sword. You and Zelda ride off into the sunset.\n";
    cout << "Meanwhile, Ganon takes over Hyrule and everyone dies.\n";
    cout << "THE END\n";

    cout << "\nHere's the items you were left with before the Calamity Ganon destroyed everything: \n";
    inventory[0] = "";
    for (int i = 0; i < numItems; ++i)
    {
        cout << inventory[i] << endl;
    }
    
    return 0;
}