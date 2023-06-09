#include "../header/DBManager.h"

void DBManager::loadData(){ //parse data
    fstream inFS;
    string filename;

    filename = "./data/movies.csv";

    inFS.open(filename);

    if (!inFS.is_open()){
        cout << "Could not open file" << endl;
        exit(1);
    }

    string headerLine;

    getline(inFS, headerLine); //skip header line

    string line;
    while (getline(inFS, line)){ 
        int movieID;
        string title, genres, temp;

        stringstream inputString(line); //creates a string stream using the line grabbed from the file

        getline(inputString, temp, ','); //take the ID as a string, then convert it into an integer
        movieID = atoi(temp.c_str());
        temp = "";

        getline(inputString, title, ',');

        getline(inputString, genres, ',');

        Movie newMovie = Movie(movieID, title, genres, "", "", "", 0);
        this->movies.push_back(newMovie);

        line = "";
    }

    // for (int i = 0; i < 2; ++i){
    //     movies.at(i).output();
    //     cout << endl;
    // }

    
    inFS.close();
}

vector<Movie> DBManager::getMovies(){ //return parsed data
    loadData();
    return movies;
}

// int main(){
//     DBManager db;
//     db.loadData();
// }
