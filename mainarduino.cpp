#include"StateMgr.h"



int main(int argc, char **argv) {
	/*
	ros::init(argc, argv, "mainarduino");
	ros::NodeHandle nh;
	ros::Rate loop_rate(10);
	*/
	StateMgr*stateMgr = new StateMgr;
	stateMgr->Initialize();
	/*
	while (ros::ok())
	{
		stateMgr->all();
	}
	*/
	stateMgr->Finalize();
	
	return 0;
}