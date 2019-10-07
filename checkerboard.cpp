#include "checkerboard.h"

checkerboard::checkerboard(float xCord, float yCord, float sizeEntry)
{
	x = xCord;
	y = yCord;
	size = sizeEntry;
	color = ofRandom(0, 255);
}

void checkerboard::show()
{
	ofSetColor(ofRandom(0,255));
	ofRect(x, y, size, size);
}