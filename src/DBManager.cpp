#include "../header/DBManager.h"

void DBManager::LoadData(){ //parse data
    fstream inFS;
    string filename;

    filename = "../data/movies.csv";

    inFS.open(filename);

    if (!inFS.is_open()){
        cout << "File could not be opened" << endl;
        exit(1);
    }

    inFS.ignore(20, '\n'); //skip header line

    string line = "";
    
    while (getline(inFS, line)){
        int movieID;
        string title;
        string genres;
        string temp;

        stringstream inputString(line); //creates a string stream using the line grabbed from the file

        getline(inputString, temp, ','); //take the ID as a string, then convert it into an integer
        movieID = atoi(temp.c_str());
        temp = "";

        getline(inputString, title, ',');
        getline(inputString, genres, ',');

        Movie newMovie = Movie(movieID, title, genres, "", "", "", 0);
        this->Movies.push_back(newMovie);

        line = "";
    }

    // for (auto movie : this->Movies){
    //      movie.output();
    // }

    
    inFS.close();
}

vector<Movie> DBManager::getMovies(){ //return parsed data
    return Movies;
}

// int main(){
//     DBManager db;
//     db.LoadData();
    
    
// }

