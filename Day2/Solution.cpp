//SEF PE INFO PROGRAMMING SRL
#include <iostream>
#include <fstream>
#include <map>
using namespace std;
    ifstream fin("bac.txt");
    ofstream fout("file.out");

    int main(){
        map <string, int> scores_part_1 = {
                //Y-2PAPER
                //X-1ROCK
                //Z-3Scissors
                //A ROCK = 1
                { "A Y", 2 + 6},//w
                { "A X", 1 + 3},//d
                { "A Z", 3 + 0},//l
                //B  PAPER = 2
                { "B Y", 2 + 3},//d
                { "B X", 1 + 0},//l
                { "B Z", 3 + 6},//w
                //C Scissors = 3
                { "C Y", 2 + 0},//l
                { "C X", 1 + 6},//w
                { "C Z", 3 + 3}//d
        };
        map <string, int> scores_part_2 = {
                //Y-2PAPER
                //X-1ROCK
                //Z-3Scissors
                //A ROCK = 1
                { "A Y", 1 + 3},//d
                { "A X", 3 + 0},//l
                { "A Z", 2 + 6},//w
                //B  PAPER = 2
                { "B Y", 2 + 3},//d
                { "B X", 1 + 0},//l
                { "B Z", 3 + 6},//w
                //C Scissors = 3
                { "C Y", 3 + 3},//d
                { "C X", 2 + 0},//l
                { "C Z", 1 + 6}//w
        };

        long long total_score_part_1 = 0, total_score_part_2 = 0;
        char read[10];
        while(fin.getline(read, 8))
        {
            total_score_part_1 += scores_part_1[read];
            total_score_part_2 += scores_part_2[read];
        }
        fout << total_score_part_1 << '\n';
        fout << total_score_part_2 ;
        return 0;
    }
