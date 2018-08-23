#include "StateMgr.h"



StateMgr::StateMgr():mNextState(0)
{
	mState = (BaseState*)new State1(this);
}

void StateMgr::Initialize() {
	mState->Initialize();
}

void StateMgr::Finalize() {
	mState->Finalize();
}

void StateMgr::all() {
	if (mNextState != 0) {
		mState->Finalize();
		delete mState;
		switch (mNextState){
		case 1:mState = (BaseState*)new State1(this); break;
		case 2:mState = (BaseState*)new State2(this); break;
		case 3:mState = (BaseState*)new State3(this); break;
		case 4:mState = (BaseState*)new State4(this); break;
		case 5:mState = (BaseState*)new State5(this); break;
		case 6:mState = (BaseState*)new State6(this); break;
		case 7:mState = (BaseState*)new State7(this); break;
		case 10:mState = (BaseState*)new EndState(this); break;
		}
		mNextState = 0;
		mState->Initialize();
	}

	mState->all();
}

void StateMgr::ChangeState(int NextState) {
	mNextState = NextState;
}