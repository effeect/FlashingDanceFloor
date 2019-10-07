#pragma once

#include "ofMain.h"

//This is quite a basic class which allows us to flicker

class checkerboard {
public :
	float x;
	float y;
	float size;
	float color;
	//checkerboard();
	checkerboard(float xCord, float yCord, float sizeEntry);

	void show();

};