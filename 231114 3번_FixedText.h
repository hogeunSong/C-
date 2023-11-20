//FixedText.h
#include "FancyText.h"

class FixedText :public Text {
public:
	FixedText();
	void append(string)override;
};