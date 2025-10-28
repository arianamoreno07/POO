#pragma once

class
	Sujeto {

public:
	Sujeto() = default;
	~Sujeto() = default;

	virtual void Request() = 0;
};