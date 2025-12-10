#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {

    map<string, vector<int> > movies;
    ifstream file("210-xc2-FA25.txt");

    // Milestone 1
    string title;
    int rating;

    while(file >> title >> rating) {
        movies[title].push_back(rating);    
    }
    
    cout << "\n Milestone 1: Movies AND Ratings \n";
    for (auto &p : movies) {
        cout << p.first << ": ";
        for (int r : p.second) cout << r << " ";
        cout << endl;
    }

    
    // Milestone 2
    cout << "\n Milestone 2: Averages \n";

    map<string, double> averages;
    int totalMovies = 0;

    for (auto &p : movies) {
        int sum = 0;
        for (int r : p.second) sum += r;

    double avg = (double)sum / p.second.size();
        averages[p.first] = avg;
    
    
    return 0;
}



