#ifndef Task
class Task
{
public:
	virtual ~Task() {}
	virtual void Initialize() {}
	virtual void Finalize() {}
	virtual void all() {}
};
#endif