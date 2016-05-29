class Time
{
	public:
		Time(int,int,int);
		friend void display(Time &);
	private:
		int hour;
		int minute;
		int sec;
};
