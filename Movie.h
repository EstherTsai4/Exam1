#pragma once
#include <string>
using namespace std;

class Movie
{
public: 
	//constructor with no argument; default movie for theater
	Movie();
	
	//constructor with argument; puts in movie and genre and showtime for theater
	Movie(string Title, string Genre, int ShowTime);

	//returns movie title
	string getTitle();

	//returns movie genre
	string getGenre();

	//returns movie showtime
	int getShowtime();

private:
	string movieTitle;
	string movieGenre;
	int movieShowtime;
};