#ifndef Mgr
#define Mgr
#include"Statechanger.h"
#include"State.h"
#include"States.h"
class StateMgr:public StateChanger, Task
{
private:
	BaseState * mState;
	int mNextState = 0;
public:
	StateMgr();
	void Initialize()override;
	void Finalize()override;
	void all()override;
	void ChangeState(int NextState)override;
};
#endif
