#include <iostream>
using namespace std;
class Artist{
    public:
        string name;
        int *voteScores;

};

Artist ar1;
Artist ar2;
Artist ar3;
Artist ar4;


int main() {
    ar1.name = "周華建";
    int vote1[] = {713, 600, 310};
    ar1.voteScores = vote1;

    ar2.name = "劉的華";
    int vote2[] = {999, 512, 215};
    ar2.voteScores = vote2;

    ar3.name = "張學有";
    int vote3[] = {543, 689,287};
    ar3.voteScores = vote3;

    ar4.name = "梁朝為";
    int vote4[] = {1125,387, 769};
    ar4.voteScores = vote4;

    Artist artists[] = {ar1, ar2, ar3, ar4};

    for(int i=0; i<4; i++){
        
        cout << artists[i].name << endl;
        int total=0;
        for (int j=0; j<3; j++){
            cout << "第" << j+1 << "區票數:" <<  artists[i].voteScores[j] << endl;
            total += artists[i].voteScores[j];
        }
        cout << "總票數:" << total << endl;
        cout << "=====================" << endl;
    }

    
}
