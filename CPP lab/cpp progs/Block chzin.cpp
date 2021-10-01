#include<iostream>
using namespace std;
void character_Hashing() 
{
    char ch = 'b';
    hash<char> hash_character; 
    cout << "\nthe hashed value is: " << hash_character(ch) << endl; 
} 
int main() 
{ 
    character_Hashing(); 
}
