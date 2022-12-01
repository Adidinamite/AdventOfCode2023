//SEF PE INFO PROGRAMMING SRL
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
    ifstream fin("bac.txt");
    ofstream fout("file.out");
    long long convert_text_to_num(string s)
    {
        long long num= 0;
        int p = 10;
        for(int i = 0; i<s.size();i++)
        {
            num = num * p + (int)(s[i] - '0');
        }
        return num;
    }
    int main(){
        string s;
        int index = 0;
        long long sum = 0, max1=0,max2=0,max3=0;
        while(getline(fin, s))
        {
            if(s.empty())
            {
                if(sum > max1) {
                    max3 = max2;
                    max2 = max1;
                    max1 = sum;
                }
                else if(sum > max2)
                {
                    max3 = max2;
                    max2 = sum;
                }
                else if(sum > max3)
                    max3 = sum;
                sum = 0;
            }
                sum += convert_text_to_num(s);
        }
        if(max3 <=sum)
            max3 = sum;
        ///PART1
        fout << max1<< '\n';
        ///PART3
        fout << max1 + max2 + max3;
        return 0;
    }
