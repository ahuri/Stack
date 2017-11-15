#include <iostream>
#include "Stack.h"

void main()
{
	StackExercise::Stack<int> s;
	s.Push(4);
	s.Push(3);
	s.Pop();
	s.Push(5);

	StackExercise::Stack<char> s2;
	s2.Push('g');
	s2.Pop();
	s2.Push('c');
}