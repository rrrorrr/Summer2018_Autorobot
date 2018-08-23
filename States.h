#ifndef states
#define states
/*
#include<ros/ros.h>
#include<iostream>
*/
#include"State.h"
#include"Statechanger.h"

class State1 :public BaseState
{
public:
	State1(StateChanger*changer):BaseState(changer) {}
	void Initialize()override {

	}
	void Finalize()override {

	}
	void all()override {

	}
};

class State2 :public BaseState
{
public:
	State2(StateChanger*changer) :BaseState(changer){}
	void Initialize()override {

	}
	void Finalize()override {

	}
	void all()override {

	}
};

class State3 :public BaseState
{
public:
	State3(StateChanger*changer) :BaseState(changer){}
	void Initialize()override {

	}
	void Finalize()override {

	}
	void all()override {

	}
};

class State4 :public BaseState
{
public:
	State4(StateChanger*changer) :BaseState(changer){}
	void Initialize()override {

	}
	void Finalize()override {

	}
	void all()override {

	}
};

class State5 :public BaseState
{
public:
	State5(StateChanger*changer) :BaseState(changer){}
	void Initialize()override {

	}
	void Finalize()override {

	}
	void all()override {

	}
};

class State6 :public BaseState
{
public:
	State6(StateChanger*changer) :BaseState(changer){}
	void Initialize()override {

	}
	void Finalize()override {

	}
	void all()override {

	}
};

class State7 :public BaseState
{
public:
	State7(StateChanger*changer) :BaseState(changer){}
	void Initialize()override;
	void Finalize()override;
	void all()override;
};

class EndState :public BaseState
{
public:
	EndState(StateChanger*changer) :BaseState(changer){}
	void Initialize()override;
	void Finalize()override;
	void all()override;
};
#endif

