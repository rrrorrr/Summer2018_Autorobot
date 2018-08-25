#ifndef State
#define State
#include"Task.h"
#include"Statechanger.h"

class BaseState :public Task
{
protected:
	StateChanger * STATECHANGER;
	int count1, count2;
	bool flag1, flag2;
public:
	BaseState(StateChanger*changer) { 
		STATECHANGER = changer;
		ros::init(argc, argv, "checker");

		std_msgs::Int16 motorUpRight;
		std_msgs::Int16 motorDownRight;
		std_msgs::Int16 motorUpLeft;
		std_msgs::Int16 motorDownLeft;
		std_msgs::Bool Air;

		ros::Publisher order1 = nh.advertise<std_msgs::Int16>("motor_order1", 1);
		ros::Publisher order2 = nh.advertise<std_msgs::Int16>("motor_order2", 1);
		ros::Publisher order3 = nh.advertise<std_msgs::Int16>("motor_order3", 1);
		ros::Publisher order4 = nh.advertise<std_msgs::Int16>("motor_order4", 1);
		ros::Publisher orderAir = nh.advertise<stg_msgs::Bool>("Air_order", 1);

		ros::Subscriber sub1 = nh.subscribe("fot1", 50, fotresponce1);
		ros::Subscriber sub2 = nh.subscribe("fot2", 50, fotresponce2);
		ros::Subscriber sub3 = nh.subscribe("touch1", 50, touchresponce1);
		ros::Subscriber sub4 = nh.subscribe("touch2", 50, touchresponce2);
	}
	virtual ~BaseState(){}
	virtual void Initialize()override{}
	virtual void Finalize()override{}
	virtual void all()override{}
};



#endif

