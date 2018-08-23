#ifndef State
#include"Task.h"
#include"Statechanger.h"

class BaseState :public Task
{
protected:
	StateChanger * STATECHANGER;
public:
	BaseState(StateChanger*changer);
	virtual ~BaseState(){}
	virtual void Initialize()override{}
	virtual void Finalize()override{}
	virtual void all()override{}
};



#endif

