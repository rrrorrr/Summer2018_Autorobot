#ifndef Statechanger
#define Statechanger
class StateChanger
{
public:
	virtual ~StateChanger() {}
	virtual void ChangeState(int Nextstate) = 0;
};

#endif