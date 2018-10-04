#ifndef COMMAND_HPP
#define COMMAND_HPP

class Command {
	public:
		int Subject;
		int Verb;
		int Condition;

		Command(int subject, int verb, int condition);
}

#endif
