#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <math.h>
#include <map>
using namespace std;


string findSubString(string st){
    
    map<string, string> keys {
    {"UUU","F"}, {"UUC","F"}, {"UUA","L"}, {"UUG","L"},
    {"UCU","S"}, {"UCC","S"}, {"UCA","S"}, {"UCG","S"},
    {"UAU","Y"}, {"UAC","Y"}, {"UAA","Stop"}, {"UAG","Stop"},
    {"UGU","C"}, {"UGC","C"}, {"UGA","Stop"}, {"UGG","W"},
    {"CUU","L"}, {"CUC","L"}, {"CUA","L"}, {"CUG","L"},
    {"CCU","P"}, {"CCC","P"}, {"CCA","P"}, {"CCG","P"},
    {"CAU","H"}, {"CAC","H"}, {"CAA","Q"}, {"CAG","Q"},
    {"CGU","R"}, {"CGC","R"}, {"CGA","R"}, {"CGG","R"},
    {"AUU","I"}, {"AUC","I"}, {"AUA","I"}, {"AUG","M"},
    {"ACU","T"}, {"ACC","T"}, {"ACA","T"}, {"ACG","T"},
    {"AAU","N"}, {"AAC","N"}, {"AAA","K"}, {"AAG","K"},
    {"AGU","S"}, {"AGC","S"}, {"AGA","R"}, {"AGG","R"},
    {"GUU","V"}, {"GUC","V"}, {"GUA","V"}, {"GUG","V"},
    {"GCU","A"}, {"GCC","A"}, {"GCA","A"}, {"GCG","A"},
    {"GAU","D"}, {"GAC","D"}, {"GAA","E"}, {"GAG","E"},
    {"GGU","G"}, {"GGC","G"}, {"GGA","G"}, {"GGG","G"}
    };
    map<string, string>::iterator p = keys.find(st);
    if (p != keys.end())
    {
        return p->second;
    }else{
        return "ERROR";
    }
}


int main(void){
    ifstream input("rosalind_rstr.txt");
    string st;
    input >> st;
    string solution;
    for(int i = 0; i < st.size(); i = i + 3)
    {
        solution.append(findSubString(st.substr(i, 3)));
        //cout << st.substr(i, 3) << endl;
    }
    cout << solution << endl;

}