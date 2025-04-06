#include <iostream>
#include <vector>
using namespace std;

class Movie {
private:
    string title;
    string director;
    string releaseDate;
    string genre;
    double rating;

public:
    
    Movie(string t, string d, string rDate, string g, double rate) {
        title = t;
        director = d;
        releaseDate = rDate;
        genre = g;
        rating = rate;
    }

    
    ~Movie() {
        cout << "Movie \"" << title << "\" is being removed from memory.\n";
    }

    
    void display() {
        cout << "Title: " << title << endl;
        cout << "Director: " << director << endl;
        cout << "Release Date: " << releaseDate << endl;
        cout << "Genre: " << genre << endl;
        cout << "Rating: " << rating << "/5.0" << endl;
    }
};

int main() {
    
    vector<Movie> movieLibrary;

    
    movieLibrary.push_back(Movie("Inception", "Christopher Nolan", "2010", "Sci-Fi", 4.8));
    movieLibrary.push_back(Movie("The Godfather", "Francis Ford Coppola", "1972", "Crime", 4.9));
    movieLibrary.push_back(Movie("Interstellar", "Christopher Nolan", "2014", "Sci-Fi", 4.7));
    movieLibrary.push_back(Movie("Titanic", "James Cameron", "1997", "Romance", 4.6));
    movieLibrary.push_back(Movie("The Dark Knight", "Christopher Nolan", "2008", "Action", 4.9));

    
    for (size_t i = 0; i < movieLibrary.size(); i++) {
        cout << "Movie #" << i + 1 << ":\n";
        movieLibrary[i].display();
        cout << endl;
    }

    return 0;
}


