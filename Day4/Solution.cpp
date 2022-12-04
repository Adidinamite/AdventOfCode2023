//SEF PE INFO PROGRAMMING SRL
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
    ifstream fin("bac.txt");
    ofstream fout("file.out");
    int a1,b1,a2,b2,assignment_pairs_part1, assignment_pairs_part2;
    char delim;
    int main(){
        while(fin >> a1>>delim>>b1>>delim>>a2>>delim>>b2)
        {
            if((a1<=a2 && b2<=b1)||(a2 <=a1 && b1<=b2))
                assignment_pairs_part1++;
            if(a1 <=b2 && b1 >=a2 )
                assignment_pairs_part2++;
                //fout<<a1<<'-'<<b1<<'.'<<a2<<'-'<<b2<<endl
        }
        ///PART 1
        fout << assignment_pairs_part1<<'\n';
        ///PART 2
        fout << assignment_pairs_part2;
        return 0;
    }
