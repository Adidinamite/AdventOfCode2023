//SEF PE INFO PROGRAMMING SRL
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
    ifstream fin("bac.txt");
    ofstream fout("file.out");
    char x[256],s1[256],s2[256],common_chars[200];
    int sum = 0;

    void check_duplicates_part1(){
        int m1[200]={0},m2[200]={0};
        int size1=strlen(s1);
        for(int i = 0; i<size1; i++) {
            m1[s1[i]]++, m2[s2[i]]++;}
        for(int i = 97; i<= 122; i++)
        {
            if(m1[i] >=1 && m2[i] >=1)
                common_chars[i]++;
        }
        for(int i = 65; i<=90; i++)
        {
            if(m1[i] >=1 && m2[i] >=1)
                common_chars[i]++;
        }
    }
    int main(){

        while (fin.getline(x, 255))
        {
            int size = strlen(x);
            strncpy(s1, x, (size/2));
            strcpy(s2, x + (size/2));
            //cout << s1 <<" " <<s2 << endl;
            check_duplicates_part1();
            memset(s1, 0, 255),memset(s2, 0, 255);
        }
        for(int i = 97; i<=122; i++)
        {
            if(common_chars[i] >=1)
                sum+= ((i-96)*common_chars[i]);
        }
        for(int i = 65; i<=90; i++)
        {
            if(common_chars[i] >=1)
                sum+= ((i-38)*common_chars[i]);
        }
        fout << sum;
        return 0;
    }
