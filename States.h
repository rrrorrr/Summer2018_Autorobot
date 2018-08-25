#ifndef states
#define states
/*
#include<ros/ros.h>
#include<std_msgs/Int16>
#include<std_msgs/Bool>
#include<iostream>
*/
#include"State.h"
#include"Statechanger.h"

class State1 :public BaseState
{
	class State1 :public BaseState
	{
	public:
		State1(StateChanger*changer) :BaseState(changer) {}
		void Initialize()override {
			count1 = 0;
			Air.data = true;
			orderAir.publish(Air);
			motorUpRight.data = 255;
			motorDownRight.data = 255;
			motorUpLeft.data = 255;
			motorDownLeft.data = 255;
		}
		void Finalize()override {
		}
		void all()override {
			order1.publish(motorUpRight);
			order2.publish(motorDownRight);
			order3.publish(motorUpLeft);
			order4.publish(motorDownLeft);
			nh.spinOnce();
			if (count1 == 3) {
				motorUpRight.data = 0;
				motorDownRight.data = 0;
				motorUpLeft.data = 0;
				motorDownLeft.data = 0;
				order1.publish(motorUpRight);
				order2.publish(motorDownRight);
				order3.publish(motorUpLeft);
				order4.publish(motorDownLeft);
				STATECHANGER->ChangeState(2);
			}
	}
};

class State2 :public BaseState
{
private:
	bool comflag = true;
	int checker = 0;
public:
	State2(StateChanger*changer) :BaseState(changer) {}
	void Initialize()override {
		Air.data = false;
	}
	void Finalize()override {

	}
	void all()override {
		if (comflag == true)orderAir.publish(Air); comflag = false;
		nh.spinOnce();
		checker++;
		if (checker == 300)STATECHANGER->ChangeState(3);
	}
};

class State3 :public BaseState
{
public:
	State3(StateChanger*changer) :BaseState(changer) {}
	void Initialize()override {
		motorUpRight.data = 255;
		motorDownRight.data = 255;
		motorUpLeft.data = 255;
		motorDownLeft.data = 255;
		flag1 = false;
	}
	void Finalize()override {
		Air.data = true;
		orderAir.publish(Air);
	}
	void all()override {
		order1.publish(motorUpRight);
		order2.publish(motorDownRight);
		order3.publish(motorUpLeft);
		order4.publish(motorDownLeft);
		nh.spinOnce();
		if (flag1) {
			motorUpRight.data = 0;
			motorDownRight.data = 0;
			motorUpLeft.data = 0;
			motorDownLeft.data = 0;
			order1.publish(motorUpRight);
			order2.publish(motorDownRight);
			order3.publish(motorUpLeft);
			order4.publish(motorDownLeft);
			STATECHANGER->ChangeState(4);
		}
	}
};

class State4 :public BaseState
{
public:
	State4(StateChanger*changer) :BaseState(changer){}
	void Initialize()override {
		motorUpRight.data = 255;
		motorDownRight.data = 255;
		motorUpLeft.data = 255;
		motorDownLeft.data = 255;
		count2 = 0;
	}
	void Finalize()override {
	}
	void all()override {
		order1.publish(motorUpRight);
		order2.publish(motorDownRight);
		order3.publish(motorUpLeft);
		order4.publish(motorDownLeft);
		nh.spinOnce();
		if (count2 == 2) {
			motorUpRight.data = 0;
			motorDownRight.data = 0;
			motorUpLeft.data = 0;
			motorDownLeft.data = 0;
			order1.publish(motorUpRight);
			order2.publish(motorDownRight);
			order3.publish(motorUpLeft);
			order4.publish(motorDownLeft);
			STATECHANGER->ChangeState(5);
		}
	}
};

class State5 :public BaseState
{
public:
	State5(StateChanger*changer) :BaseState(changer) {}
	void Initialize()override {
		flag2 = false;
	}
	void Finalize()override {
		Air.data = false;
		orderAir.publish(Air);
	}
	void all()override {
		nh.spinOnce();
		if (flag2) STATECHANGER->ChangeState(6);
	}
};

class State6 :public BaseState
{
public:
	State6(StateChanger*changer) :BaseState(changer) {}
	void Initialize()override {
		count2 = 0;
		motorUpRight.data = 255;
		motorDownRight.data = 255;
		motorUpLeft.data = 255;
		motorDownLeft.data = 255;
	}
	void Finalize()override {

	}
	void all()override {
		order1.publish(motorUpRight);
		order2.publish(motorDownRight);
		order3.publish(motorUpLeft);
		order4.publish(motorDownLeft);
		nh.spinOnce();
		if (count2 == 2) {
			motorUpRight.data = 0;
			motorDownRight.data = 0;
			motorUpLeft.data = 0;
			motorDownLeft.data = 0;
			order1.publish(motorUpRight);
			order2.publish(motorDownRight);
			order3.publish(motorUpLeft);
			order4.publish(motorDownLeft);
			STATECHANGER->ChangeState(7);
		}

	}
};

class State7 :public BaseState
{
public:
	State7(StateChanger*changer) :BaseState(changer) {}
	void Initialize()override {
		count1 = 0;
		motorUpRight.data = 255;
		motorDownRight.data = 255;
		motorUpLeft.data = 255;
		motorDownLeft.data = 255;
	}
	void Finalize()override {

	}
	void all()override {
		order1.publish(motorUpRight);
		order2.publish(motorDownRight);
		order3.publish(motorUpLeft);
		order4.publish(motorDownLeft);
		nh.spinOnce();
		if (count1 == 2) {
			motorUpRight.data = 0;
			motorDownRight.data = 0;
			motorUpLeft.data = 0;
			motorDownLeft.data = 0;
			order1.publish(motorUpRight);
			order2.publish(motorDownRight);
			order3.publish(motorUpLeft);
			order4.publish(motorDownLeft);
			STATECHANGER->ChangeState(10);
		}
	}
};
#endif

