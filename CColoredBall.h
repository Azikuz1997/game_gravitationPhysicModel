#pragma once
#include "CBall.h"

//
class CColoredBall :public CBall
{
private:
	HBRUSH hBrush;
	//Ξοπεδελενθε RGB
	unsigned char r;
	unsigned char g;
	unsigned char b;
public:
	CColoredBall(void);
	virtual ~CColoredBall(void);
	virtual void SetColor(unsigned char r, unsigned char g, unsigned char b);
	virtual void Draw(HDC dc);
	virtual void GetColor(unsigned char& r, unsigned char& g, unsigned char& b);
};