#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

int main(void){
    ifstream input("rosalind_rstr.txt");
    int n;
    float probat;
    float prob;
    float probgc;
    float prob1;
    string st;
    input >> n >> probgc;
    input >> st;
    probat = 1 - probgc;
    prob = 1;
    prob1 = 1;           
    for (int i = 0; i < st.size(); i++)
    {
        if (st.at(i) == 'A' || st.at(i) == 'T')
        {
            prob = prob * probat / 2;
        }else if(st.at(i) == 'C' || st.at(i) == 'G')
        {
            prob1 = prob1 * probgc /2;
        }else
        {
            cout << "Strange nucleotide" << endl;
        }
    }

    //1prob = prob * prob1 / 2;

    float resta = 1 - prob;
    prob = pow(resta, n);
    prob = 1 - prob;
    cout << prob << endl;
    return 0;
}