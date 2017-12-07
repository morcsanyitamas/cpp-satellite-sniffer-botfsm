#pragma once
#include <utility>
#include <list>
#include "TLE.h"
#include "Texture.h"
#include <ctime>
#include <SDL.h>
class Satellite {
public:
	Satellite(std::string name, std::string noradId);
	std::pair<double, double> calculate(std::tm& time);
	std::pair<double, double> calculate();
	void render(SDL_Rect& mapSize, std::time_t time = 0);
	~Satellite();
private:
	std::string tle1;
	std::string tle2;
	std::string exec(const char* cmd);
	std::string name, noradId;
	std::list<TLE> tleData;
	std::shared_ptr<Texture> texture;
};

