#ifndef COMMAND_BUFFER_HPP
#define COMMAND_BUFFER_HPP

class CommandBuffer {
	public:
		CommandBuffer();
		int PushCommand();
		int InterruptBuffer();

	private:
		int IssueCommand();
}

#endif
