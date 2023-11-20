//FixedText.cpp
#include "FixedText.h"

FixedText::FixedText() :Text::Text("FIXED") {}
void FixedText::append(string _extra) {}

int main() {
	Text t1("Plain");
	t1.append("A");
	cout << t1.get() << endl;

	FancyText t2("Fancy", "<<", ">>", "***");
	t2.append("A");
	cout << t2.get() << endl;

	FixedText t3;
	t3.append("A");
	cout << t3.get() << endl;
	t1 = t2;

	return 0;
}