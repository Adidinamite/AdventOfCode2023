//SEF PE INFO PROGRAMMING SRL
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
    ifstream fin("bac.txt");
    ofstream fout("file.out");
    char s1[256],s2[256],s3[256];
    int sum = 0;
    void part2() {
        int m1[200] = {0}, m2[200] = {0}, m3[200] = {0};
        int size1= strlen(s1),
        size2 = strlen(s2),
        size3 = strlen(s3);
        ///duplicates
        for(int i = 0; i< size1; i++)
            m1[s1[i]]++;
        for(int i = 0; i< size2; i++)
            m2[s2[i]]++;
        for(int i = 0; i< size3; i++)
            m3[s3[i]]++;

        ///solve
        for(int i = 97; i<=122; i++)
        {
            if(m1[i] && m2[i] && m3[i])
                sum+= (i-96);
        }
        for(int i = 65; i<=90; i++)
        {
            if(m1[i] && m2[i] && m3[i])
                sum+= (i-38);
        }
    }
    int main(){

        while (fin.getline(s1, 255))
        {
            fin.getline(s2, 255);
            fin.getline(s3, 255);
           part2();
        }
        fout << sum;
        return 0;
    }
