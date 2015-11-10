#include "state_machine.h"

int main(void)
{
	StateMachine *sm = CreateStateMachine();

	if (SM_NO_ERROR != sm->error)
	{
		// TODO: Add logging
		DestroyStateMachine(sm);
	}
	else
	{
		RunStateMachine(sm);
	}

	return 0;
}