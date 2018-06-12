#include "Scores.h"

namespace Scores {
	Scores::Scores() {

		for (size_t i = 0; i < SIZE; i++) {
			_scoreList[i] = 0;
		}
		for (size_t i = 0; i < SIZE; i++) {
			_nameList[i] = "EMPTY";
		}
	}

	Scores::~Scores() {
		if (_scoreList != NULL)
			delete[] _scoreList;
		if (_nameList != NULL)
			delete[] _nameList;
	}

	void Scores::setScore(int score, string name) {
		int position = 0;
		bool isWorth = false;
		for (size_t i = 0; i < SIZE; i++) {
			if (score > _scoreList[i]) {
				position = i;
				isWorth = true;
				break;
			}
		}
		if (isWorth) {
			for (size_t i = SIZE; i > position; i--) {
				_scoreList[i] = _scoreList[i - 1];
				_nameList[i] = _nameList[i - 1];
			}
			_scoreList[position] = score;
			_nameList[position] = name;
		}
	}
	bool Scores::getScore(int position) {
		return _scoreList[position];
	}
	string Scores::getName(int position) {
		return _nameList[position];
	}
}