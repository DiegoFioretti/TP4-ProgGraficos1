#ifndef SCORES_H
#define SCORES_H
#include <list>
#include <string>
#define SIZE 20
#include <iostream>
using namespace std;

namespace Scores{
	class Scores {
	private:
		int _scoreList[SIZE];
		string _nameList[SIZE];
	public:
		Scores();
		~Scores();
		void setScore(int score, string name);
		bool getScore(int position);
		string getName(int position);
	};
}
#endif